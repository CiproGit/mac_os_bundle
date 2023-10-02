# mac_os_bundle
This repository shows how a Mac OS bundle can access files located outside from the bundle itself and also shows that the working directory is where the executable (within the bundle) is located.
Specifically, the program opens and reads a file, named input_file.txt, located in the same directory as the bundle (so not in the same directory as the executable), gets the working directory using QCoreApplication::applicationDirPath() and prints the contents of the file.
