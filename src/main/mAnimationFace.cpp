#include "../include/Curve.h"
#include "../include/CurveShape.h"
#include "../include/CurveCollection.h"
#include "../include/Printer.h"
#include "../include/Girl.h"
#include <unistd.h>
#include <iostream>

#include <vector>

int main(){
	/* CurveCollection face("girl/face.txt");
	CurveCollection smileyEyes("girl/eyes-open.txt");
	CurveCollection mouth("girl/mouth-smile.txt");
	Printer::initializePrinter();
	Printer::drawCanvas(255,255,255,255);
	face.draw();
	smileyEyes.draw();
	mouth.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::finishPrinter();*/
	Printer::initializePrinter();
	Printer::drawCanvas(255,255,255,255);

	Girl* girl = new Girl();

	while (true) {}
	Printer::finishPrinter();
	return 0;
}
