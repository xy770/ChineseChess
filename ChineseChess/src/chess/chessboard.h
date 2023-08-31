#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QGridLayout>
#include <QPushButton>
<<<<<<< HEAD
#include <QLabel>
#include <QPixmap>

#include <vector>

=======

>>>>>>> 907f6081b29ab9bae857b86e2501683b97dde226
class ChessBoard
{
public:
    ChessBoard();
    ~ChessBoard();

    void setChessBoardParent(QWidget* winParent);
<<<<<<< HEAD
    void ShowChessBoard();
    void ShowChessBoard(QWidget* winParent);

    void test()
    {
        board.show(m_winParent);

=======

    void test()
    {
        m_chessBoard = new QWidget(m_winParent);
        m_chessGridLayout = new QGridLayout(m_winParent);
>>>>>>> 907f6081b29ab9bae857b86e2501683b97dde226
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
<<<<<<< HEAD

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
=======
>>>>>>> 907f6081b29ab9bae857b86e2501683b97dde226
};

#endif // CHESSBOARD_H
