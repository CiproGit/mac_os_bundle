#ifndef IO_MANAGER_H
#define IO_MANAGER_H

#include "main_window.h"
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class IO_manager : public QObject {
	Q_OBJECT

private:
	Main_window *window;
	QString working_dir;
	const QString INPUT_FILE = "input_file.txt";
	const QString OUTSIDE_BUNDLE = "/../../../";

public:
	IO_manager(Main_window *window);
	virtual ~IO_manager();
	void read_from_file() const;
};

#endif // IO_MANAGER_H
