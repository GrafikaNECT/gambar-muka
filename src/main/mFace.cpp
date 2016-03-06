#include "../include/CurveShape.h"
#include "../include/Printer.h"
#include <unistd.h>
#include <iostream>

#include <vector>

int main(){
	std::vector<Point> points;
	CurveShape curve("face.txt",Texture::createSingleColorTexture(0,0,0,255));
	CurveShape curve2("face.txt",Texture::createSingleColorTexture(0,0,0,255),Texture::createSingleColorTexture(0,0,255,255));

	CurveShape curve3("hair.txt",Texture::createSingleColorTexture(0,0,0,255));
	CurveShape curve4("hair.txt",Texture::createSingleColorTexture(0,0,0,255),Texture::createSingleColorTexture(0,0,0,255));

	Printer::initializePrinter();

	Printer::drawCanvas(255,255,255,255);

	curve.draw();
	curve3.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::finishPrinter();

	return 0;
}
