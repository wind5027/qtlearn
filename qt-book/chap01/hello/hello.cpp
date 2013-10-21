#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("<h2><i>Hello</i>"
		                       "<font color = green size = 20> Qt!</font></h2>");
    label->show();
    return app.exec();
}
