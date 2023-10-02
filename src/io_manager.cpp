#include "io_manager.h"
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>

using namespace std;

IO_manager::IO_manager(Main_window *window) {
	this->window = window;
	this->working_dir = QCoreApplication::applicationDirPath();

	window->print_working_dir(this->working_dir);
}

IO_manager::~IO_manager() {}

void IO_manager::read_from_file() const {
	QFile input_file(this->working_dir + OUTSIDE_BUNDLE + INPUT_FILE);
	window->print_console("Opening file...");

	if (input_file.open(QIODevice::ReadOnly)) {
		QTextStream in(&input_file);
		window->print_console("*** Contents of file:");

		// Read each line of INPUT_FILE
		while (!in.atEnd()) {
			QString line = in.readLine();			
			window->print_console(line);
		}

		window->print_console("*** End of file");
		input_file.close();
	}
	else window->print_console("Error opening file");
}
