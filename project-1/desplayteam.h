#ifndef DESPLAYTEAM_H
#define DESPLAYTEAM_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include "team.h"

namespace Ui {
class desplayTeam;
}

class desplayTeam : public QDialog
{
    Q_OBJECT

public:
    explicit desplayTeam(QWidget *parent = nullptr);
    ~desplayTeam();

private slots:

    void on_pushButton_2_clicked();

private:
    Ui::desplayTeam *ui;
    team *teams;
};

#endif // DESPLAYTEAM_H
