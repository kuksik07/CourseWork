#include <QApplication>
#include "myrect.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // create a scene
    QGraphicsScene * scene = new QGraphicsScene();

    // create an item to add to the scene
    MyRect * rect = new MyRect();
    rect->setPixmap(QPixmap(":/images/blobby.png")); // change the rect background

    // add the item to the scene
    scene->addItem(rect);

    // make rect focusable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    // create a view to visualize the scene
    QGraphicsView * view = new QGraphicsView(scene);

    // size of window
    view->resize(800, 600);

    // background image
    view->setStyleSheet("background-image: url(:/images/background.PNG)");

    // show the view
    view->show();

    return a.exec();
}
