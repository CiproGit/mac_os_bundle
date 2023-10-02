#include "main_window.h"
#include "./ui_main_window.h"

Main_window::Main_window(QWidget *parent) : QMainWindow(parent), ui(new Ui::Main_window) {
	ui->setupUi(this);
}

Main_window::~Main_window() {
	delete ui;
}

void Main_window::print_working_dir(QString string) const {
	ui->working_dir_textedit->setPlainText(string);
}

void Main_window::print_console(QString string) const {
	ui->console_textbrowser->append(string);
}
