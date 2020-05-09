#include <iostream>
#include "inc/SmartHub.h"
#include <QApplication>
int main(int argc, char* argv[]){
	
	QApplication window(argc, argv);
	SmartHub smartHub;

	smartHub.show();

	return window.exec();
	
}
