#include "main_window.h"
#include "io_manager.h"
#include <QApplication>

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	Main_window w;
	w.show();

	IO_manager io_manager(&w);
	io_manager.read_from_file();

	return a.exec();
}
