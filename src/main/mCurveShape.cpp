#include "../include/CurveShape.h"
#include "../include/Printer.h"
#include <unistd.h>
#include <iostream>

#include <vector>

int main(){
	CurveShape curve(Texture::createSingleColorTexture(0,0,0,255));
	curve.push_back(109,102);
	curve.push_back(107,93);
	curve.push_back(112,187);
	curve.push_back(117,201);
	curve.push_back(127,228);
	curve.push_back(191,245);
	curve.push_back(206,246);
	curve.push_back(227,247);
	curve.push_back(259,225);
	curve.push_back(268,213);
	curve.push_back(282,195);
	curve.push_back(292,95);
	curve.push_back(283,93);
	curve.push_back(268,90);
	curve.push_back(267,97);
	curve.push_back(252,99);
	curve.push_back(237,101);
	curve.push_back(153,91);
	curve.push_back(142,81);
	curve.push_back(131,71);
	curve.push_back(120,112);
	curve.push_back(109,102);

	Printer::initializePrinter();

	Printer::drawCanvas(255,255,255,255);

	curve.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::finishPrinter();

	return 0;
}