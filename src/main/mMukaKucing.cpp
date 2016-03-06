#include "../include/CurveShape.h"
#include "../include/Printer.h"
#include <unistd.h>
#include <iostream>

#include <vector>

int main(){
	std::vector<Point> points;
	/* points.push_back(Point(166,42));

	points.push_back(Point(141,77));
	points.push_back(Point(87,108));
	points.push_back(Point(78,210));

	points.push_back(Point(72,279));
	points.push_back(Point(92,315));
	points.push_back(Point(105,333));

	points.push_back(Point(114,245));
	points.push_back(Point(159,402));
	points.push_back(Point(282,298));

	points.push_back(Point(351,296));
	points.push_back(Point(418,402));
	points.push_back(Point(470,361));

	points.push_back(Point(531,313));
	points.push_back(Point(520,251));
	points.push_back(Point(515,195));

	points.push_back(Point(514,180));
	points.push_back(Point(457,49));
	points.push_back(Point(439,49));

	points.push_back(Point(424,49));
	points.push_back(Point(394,127));
	points.push_back(Point(381,120));

	points.push_back(Point(329,93));
	points.push_back(Point(251,92));
	points.push_back(Point(210,124));

	points.push_back(Point(198,133));
	points.push_back(Point(202,78));
	points.push_back(Point(165,43));*/
	CurveShape curve("cat-face.txt",Texture::createSingleColorTexture(0,0,0,255));
	CurveShape curve2("cat-face.txt",Texture::createSingleColorTexture(0,0,0,255),Texture::createSingleColorTexture(0,0,255,255));

	Printer::initializePrinter();

	Printer::drawCanvas(255,255,255,255);

	curve.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::finishPrinter();

	return 0;
}
