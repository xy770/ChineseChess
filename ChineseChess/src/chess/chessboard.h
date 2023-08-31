#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>

#include <vector>

class ChessBoard
{
public:
    ChessBoard();
    ~ChessBoard();

    void setChessBoardParent(QWidget* winParent);
    void ShowChessBoard();
    void ShowChessBoard(QWidget* winParent);

    void test()
    {
        board.show(m_winParent);

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

    struct Board
    {
        const QString imgPath = ("://Images/ChessBoard.gif");
        QLabel *boardLabel{nullptr};
        QPixmap boardImg{imgPath};

        void show()
        {
            boardLabel->setPixmap(boardImg);
        };
        void show(QWidget* winParent)
        {
            boardLabel = new QLabel;

            boardLabel->setScaledContents(true);
            boardLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            boardLabel->setParent(winParent);

            boardLabel->setPixmap(boardImg.scaled(boardLabel->size(), Qt::KeepAspectRatio));
        };

        void setParent(QWidget* winParent)
        {
            boardLabel = new QLabel(winParent);
        }
    };

    Board board;
};

#endif // CHESSBOARD_H
