#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Main_window; }
QT_END_NAMESPACE

class Main_window : public QMainWindow {
	Q_OBJECT

private:
	Ui::Main_window *ui;

public:
	Main_window(QWidget *parent = nullptr);
	~Main_window();
	void print_working_dir(QString string) const;
	void print_console(QString string) const;
};
#endif // MAIN_WINDOW_H
