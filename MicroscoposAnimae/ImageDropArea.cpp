#include "imagedroparea.h"
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QPixmap>

ImageDropArea::ImageDropArea(QWidget *parent)
    : QLabel(parent)
{
    setAlignment(Qt::AlignCenter);
    setText("Arrastra una imagen aquí");
    setStyleSheet("border: 2px dashed gray;");
    setAcceptDrops(true);
}

void ImageDropArea::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasUrls())
        event->acceptProposedAction();
}

void ImageDropArea::dropEvent(QDropEvent *event)
{
    QList<QUrl> urls = event->mimeData()->urls();
    if(urls.isEmpty()) return;

    QString filename = urls.first().toLocalFile();
    QPixmap pix(filename);

    if(!pix.isNull())
        setPixmap(pix.scaled(size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}
