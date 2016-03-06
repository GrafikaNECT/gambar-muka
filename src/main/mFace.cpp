#include "../include/Curve.h"
#include "../include/CurveShape.h"
#include "../include/CurveCollection.h"
#include "../include/Printer.h"
#include <unistd.h>
#include <iostream>

#include <vector>

int main(){
	CurveCollection girlface("girl-face.txt");

	Printer::initializePrinter();

	Printer::drawCanvas(255,255,255,255);
	girlface.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::finishPrinter();

	return 0;
}
