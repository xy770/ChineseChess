#ifndef CHESSWINDOW_H
#define CHESSWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>

#include "ui_chesswindow.h"

#include "../chess/chess.h"
#include "../chess/chessboard.h"

#include <string>

namespace Ui {
class ChessWindow;
}

class ChessWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChessWindow(QWidget *parent = nullptr);
    ~ChessWindow();

private:
    void SetupWindow();
    Ui::ChessWindow *ui;

    struct WindowInfo
    {
        QString Name;
        QIcon Icon;
    };

    const WindowInfo windowInfo{"Chess",QIcon("://Images/R_General.gif")};
    Chess chs;
    ChessBoard bd;
};

#endif // CHESSWINDOW_H
