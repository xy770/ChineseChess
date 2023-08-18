#include "chesswindow.h"

ChessWindow::ChessWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChessWindow)
{
    ui->setupUi(this);

    SetupWindow();

    chs.setChessBtnParent(centralWidget());
    chs.setChessColor(Chess::ChessColor::Red);
    chs.setChessType(Chess::ChessType::General);
    chs.RenderChessBtn();

    bd.setChessBoardParent(centralWidget());
    bd.test();
}

ChessWindow::~ChessWindow()
{
    delete ui;
}

void ChessWindow::SetupWindow()
{
    setWindowTitle(windowInfo.Name);
    setWindowIcon(windowInfo.Icon);
}
