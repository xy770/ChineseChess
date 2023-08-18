#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QGridLayout>
#include <QPushButton>

class ChessBoard
{
public:
    ChessBoard();
    ~ChessBoard();

    void setChessBoardParent(QWidget* winParent);

    void test()
    {
        m_chessBoard = new QWidget(m_winParent);
        m_chessGridLayout = new QGridLayout(m_winParent);
        QPushButton* btn1 = {new QPushButton("1")};
        m_chessGridLayout->addWidget(btn1,0,0);
        QPushButton* btn2 = {new QPushButton("2")};
        m_chessGridLayout->addWidget(btn2,1,0);
        QPushButton* btn3 = {new QPushButton("3")};
        m_chessGridLayout->addWidget(btn3,0,1);
    }

private:
    QGridLayout* m_chessGridLayout{new QGridLayout};
    QWidget* m_chessBoard{nullptr};
    QWidget* m_winParent{nullptr};
};

#endif // CHESSBOARD_H
