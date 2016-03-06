#include "../include/Curve.h"
#include "../include/Printer.h"
#include <unistd.h>
#include <iostream>

#include <vector>

int main(){
	std::vector<Point> points;
	points.push_back(Point(118,95));
	points.push_back(Point(209,41));
	points.push_back(Point(225,227));
	points.push_back(Point(105,181));

	Printer::initializePrinter();

	Printer::drawCanvas(255,255,255,255);

	Curve curve(points, Texture::createSingleColorTexture(0,0,0,255));
	curve.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::finishPrinter();

	return 0;
}