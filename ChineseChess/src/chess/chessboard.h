#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QGridLayout>
#include "../widgets/chesswindow.h"

class ChessBoard : ChessWindow
{
public:
    ChessBoard();

private:
    QGridLayout* m_chessGridLayout;
};

#endif // CHESSBOARD_H
