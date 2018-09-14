﻿#ifndef COURSEFIND_H
#define COURSEFIND_H

#include <QWidget>

namespace Ui {
class coursefind;
}

class coursefind : public QWidget
{
    Q_OBJECT

public:
    explicit coursefind(QWidget *parent = 0);
    ~coursefind();

private slots:
    void on_stu_query_courseButton_clicked();
    void on_stu_course_backButton_clicked();
    void on_show_all_courseButton_clicked();
    void on_choose_clicked();
    void on_drop_courseButton_clicked();

private:
    Ui::coursefind *ui;
};

#endif // COURSEFIND_H
