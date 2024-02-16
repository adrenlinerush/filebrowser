#include <QApplication>
#include <QCoreApplication>
#include <QDebug>
#include <QFont>
#include <QWidget>
#include <QIcon>
#include <QMainWindow>
#include <filebrowser.h>

int main(int argc, char *argv[])
{
    setenv("TERM", "konsole-256color", 1); 
    QApplication a(argc, argv);
    QMainWindow w;

    QFont font = QApplication::font();
    font.setFamily("Terminus");
    font.setPointSize(12);
    a.setFont(font);

    FileBrowser* fb = new FileBrowser;

    w.setCentralWidget(fb);
    w.setWindowIcon(QIcon("adrenaline.png"));
    w.resize(1024,768);
    w.show();

    return a.exec();
}

