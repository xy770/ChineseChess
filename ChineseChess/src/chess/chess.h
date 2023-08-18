#ifndef CHESS_H
#define CHESS_H

#include <QPushButton>

class Chess : public QWidget
{
public:
    explicit Chess(QWidget *parent = nullptr);
    ~Chess();

    enum class ChessType{
        General,
        Advisor,
        Elephant,
        Chariot,
        Horse,
        Cannon,
        Soldier,
        UnKnown
    };

    enum class ChessColor{
        Red,
        Black,
        UnKnown
    };

    ChessType getChessType() const;
    void setChessType(ChessType type);

    ChessColor getChessColor() const;
    void setChessColor(ChessColor type);

    void setChessBtnParent(QWidget* winParent);

    void RenderChessBtn() const;

    QPushButton& GetBtn()
    {
        return *m_chessBtn;
    }
private:
    void setChessBtnIcon() const;
    ChessType m_chessType{ChessType::UnKnown};
    ChessColor m_chessColor{ChessColor::UnKnown};

    QPushButton* m_chessBtn{new QPushButton};
};

#endif // CHESS_H
