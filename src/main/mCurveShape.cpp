#include "../include/CurveShape.h"
#include "../include/Printer.h"
#include <unistd.h>
#include <iostream>

#include <vector>

int main(){
	std::vector<Point> points;
	points.push_back(Point(109,102));
	points.push_back(Point(107,93));
	points.push_back(Point(112,187));
	points.push_back(Point(117,201));
	points.push_back(Point(127,228));
	points.push_back(Point(191,245));
	points.push_back(Point(206,246));
	points.push_back(Point(227,247));
	points.push_back(Point(259,225));
	points.push_back(Point(268,213));
	points.push_back(Point(282,195));
	points.push_back(Point(292,95));
	points.push_back(Point(283,93));
	points.push_back(Point(268,90));
	points.push_back(Point(267,97));
	points.push_back(Point(252,99));
	points.push_back(Point(237,101));
	points.push_back(Point(153,91));
	points.push_back(Point(142,81));
	points.push_back(Point(131,71));
	points.push_back(Point(120,112));
	points.push_back(Point(109,102));
	CurveShape curve(points,Texture::createSingleColorTexture(0,0,0,255));
	CurveShape curve2(points,Texture::createSingleColorTexture(0,0,0,255),Texture::createSingleColorTexture(0,0,255,255));

	Printer::initializePrinter();

	Printer::drawCanvas(255,255,255,255);

	curve.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::drawCanvas(255,255,255,255);

	curve2.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::finishPrinter();

	return 0;
}
