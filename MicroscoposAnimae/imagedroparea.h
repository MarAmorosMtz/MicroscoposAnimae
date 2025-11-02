#ifndef IMAGEDROPAREA_H
#define IMAGEDROPAREA_H

#include <QLabel>

class ImageDropArea : public QLabel
{
    Q_OBJECT
public:
    explicit ImageDropArea(QWidget *parent = nullptr);
protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;
};

#endif // IMAGEDROPAREA_H
