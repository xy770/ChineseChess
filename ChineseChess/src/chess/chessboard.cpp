#include "chessboard.h"

ChessBoard::ChessBoard()
{


}

ChessBoard::~ChessBoard()
{
    delete m_chessGridLayout;
}

void ChessBoard::setChessBoardParent(QWidget* winParent)
{
    m_winParent = winParent;
}
