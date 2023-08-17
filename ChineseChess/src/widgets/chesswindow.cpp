#include "chesswindow.h"

ChessWindow::ChessWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChessWindow)
{
    ui->setupUi(this);

    SetupWindow();

    chs.setChessBtnParent(centralWidget());
    chs.setChessColor(Chess::ChessColor::Black);
    chs.setChessType(Chess::ChessType::Chariot);
    chs.RenderChessBtn();
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
