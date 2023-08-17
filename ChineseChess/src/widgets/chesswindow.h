#ifndef CHESSWINDOW_H
#define CHESSWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "../chess/chess.h"
#include "ui_chesswindow.h"

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
};

#endif // CHESSWINDOW_H
