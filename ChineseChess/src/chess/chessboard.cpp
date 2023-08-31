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

ChessBoard::~ChessBoard()
{
    delete m_chessGridLayout;
    delete m_chessBoard;
    delete m_winParent;
}

/*
 * 函数简介：
 * 设置棋盘的父级
*/
void ChessBoard::setChessBoardParent(QWidget* winParent)
{
    m_winParent = winParent;

    m_chessBoard = new QWidget;
    m_chessBoard->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    m_chessBoard->setParent(m_winParent);

    m_chessGridLayout = new QGridLayout(m_winParent);
}

void ChessBoard::ShowChessBoard()
{

}

void ChessBoard::ShowChessBoard(QWidget* winParent)
{

}
