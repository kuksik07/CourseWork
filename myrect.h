#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsPixmapItem>

class MyRect: public QGraphicsPixmapItem{
public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // MYRECT_H
