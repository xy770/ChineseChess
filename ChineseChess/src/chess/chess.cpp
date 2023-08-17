#include "chess.h"

Chess::Chess(QWidget* winParent)
{
    m_chessBtn->setParent(winParent);
    m_chessBtn->setFixedSize(50, 50);
    m_chessBtn->setIcon(QIcon("://Images/B_Horse.gif"));
    m_chessBtn->setIconSize(m_chessBtn->size());
    m_chessBtn->setStyleSheet("background-color: transparent; border:none;");
}

Chess::~Chess(){
    delete m_chessBtn;
}

Chess::ChessType Chess::getChessType() const
{
    return m_chessType;
}

void Chess::setChessType(ChessType type)
{
    m_chessType = type;
}

Chess::ChessColor Chess::getChessColor() const
{
    return m_chessColor;
}

void Chess::setChessColor(ChessColor color)
{
    m_chessColor = color;
}

void Chess::setChessBtnParent(QWidget* winParent)
{
    m_chessBtn->setParent(winParent);
}

/*
 * 函数简介：
 * 根据象棋信息渲染象棋棋子
*/
void Chess::RenderChessBtn() const
{
    setChessBtnIcon();

    m_chessBtn->setFixedSize(50, 50);
    m_chessBtn->setIconSize(m_chessBtn->size());
    m_chessBtn->setStyleSheet("background-color: transparent; border:none;");
}

/*
 * 函数简介：
 * 根据Chess的颜色和类型设置象棋图标
*/
void Chess::setChessBtnIcon() const
{
    auto Setter = [this](Chess::ChessColor color,Chess::ChessType type)->void
    {
        switch (color) {
        case Chess::ChessColor::Red:
            switch (type) {
            case Chess::ChessType::Advisor:
                m_chessBtn->setIcon(QIcon("://Images/R_Advisor.gif"));
                break;
            case Chess::ChessType::Cannon:
                m_chessBtn->setIcon(QIcon("://Images/R_Cannon.gif"));
                break;
            case Chess::ChessType::Chariot:
                m_chessBtn->setIcon(QIcon("://Images/R_Chariot.gif"));
                break;
            case Chess::ChessType::Elephant:
                m_chessBtn->setIcon(QIcon("://Images/R_Elephant.gif"));
                break;
            case Chess::ChessType::General:
                m_chessBtn->setIcon(QIcon("://Images/R_General.gif"));
                break;
            case Chess::ChessType::Horse:
                m_chessBtn->setIcon(QIcon("://Images/R_Horse.gif"));
                break;
            case Chess::ChessType::Soldier:
                m_chessBtn->setIcon(QIcon("://Images/R_Soldier.gif"));
                break;
            default:
                break;
            }
            break;
        case Chess::ChessColor::Black:
            switch (type) {
            case Chess::ChessType::Advisor:
                m_chessBtn->setIcon(QIcon("://Images/B_Advisor.gif"));
                break;
            case Chess::ChessType::Cannon:
                m_chessBtn->setIcon(QIcon("://Images/B_Cannon.gif"));
                break;
            case Chess::ChessType::Chariot:
                m_chessBtn->setIcon(QIcon("://Images/B_Chariot.gif"));
                break;
            case Chess::ChessType::Elephant:
                m_chessBtn->setIcon(QIcon("://Images/B_Elephant.gif"));
                break;
            case Chess::ChessType::General:
                m_chessBtn->setIcon(QIcon("://Images/B_General.gif"));
                break;
            case Chess::ChessType::Horse:
                m_chessBtn->setIcon(QIcon("://Images/B_Horse.gif"));
                break;
            case Chess::ChessType::Soldier:
                m_chessBtn->setIcon(QIcon("://Images/B_Soldier.gif"));
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    };

    Setter(getChessColor(),getChessType());
}


