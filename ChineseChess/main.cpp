#include "src/chess/chessboard.h"
#include "src/widgets/chesswindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ChessWindow w;
    w.show();

    ChessBoard bd;

    return a.exec();
}
