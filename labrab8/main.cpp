//#include "mainwindow.h"

#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
#include <QPlainTextEdit>

void populate_window(QWidget* widget);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w(0);
    QMainWindow w(0);

    QWidget *centralWidget = new QWidget(&w);
    w.setCentralWidget(centralWidget);

    populate_window(centralWidget);
//    w.populate_window();

    w.show();
    w.resize(500, 300);
    return a.exec();
}

void populate_window(QWidget* widget) {
    QGridLayout *grid_layout = new QGridLayout(widget);

    QLabel *l_red = new QLabel("Red");
    QLabel *l_green = new QLabel("Green");
    QLabel *l_blue = new QLabel("Blue");
    grid_layout->addWidget(l_red, 0, 0);
    grid_layout->addWidget(l_green, 1, 0);
    grid_layout->addWidget(l_blue, 2, 0);

    QSpinBox* sp_red = new QSpinBox();
    QSpinBox* sp_green = new QSpinBox();
    QSpinBox* sp_blue = new QSpinBox();
    sp_red->setMaximum(255);
    sp_green->setMaximum(255);
    sp_blue->setMaximum(255);
    grid_layout->addWidget(sp_red, 0, 1);
    grid_layout->addWidget(sp_green, 1, 1);
    grid_layout->addWidget(sp_blue, 2, 1);

    QSlider* s_red = new QSlider(Qt::Orientation::Horizontal);
    QSlider* s_green = new QSlider(Qt::Orientation::Horizontal);
    QSlider* s_blue = new QSlider(Qt::Orientation::Horizontal);
    s_red->setMaximum(255);
    s_green->setMaximum(255);
    s_blue->setMaximum(255);
    grid_layout->addWidget(s_red, 0, 2);
    grid_layout->addWidget(s_green, 1, 2);
    grid_layout->addWidget(s_blue, 2, 2);

    QPlainTextEdit* pte = new QPlainTextEdit();
    grid_layout->addWidget(pte, 0, 3, 0, 2);
}
