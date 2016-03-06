#include "../include/Curve.h"
#include "../include/CurveShape.h"
#include "../include/CurveCollection.h"
#include "../include/Printer.h"
#include <unistd.h>
#include <iostream>

#include <vector>

int main(){
	CurveCollection babyface("baby-face.txt");
	Printer::initializePrinter();
	Printer::drawCanvas(255,255,255,255);
	babyface.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::finishPrinter();
	/* CurveShape head(Texture::createSingleColorTexture(232,203,174,255),Texture::createSingleColorTexture(255,240,224,255));
	CurveShape hair(Texture::createSingleColorTexture(184,150,50,255),Texture::createSingleColorTexture(217,201,95,255));
	Curve nose(Texture::createSingleColorTexture(232,203,174,255));
	CurveCollection babyface;

	hair.push_back(103, 66);
	hair.push_back(96, 62);
	hair.push_back(88, 38);;
	hair.push_back(110, 40);
	hair.push_back(138, 42);
	hair.push_back(95, 38);
	hair.push_back(111, 57);
	hair.push_back(124, 73);
	hair.push_back(100, 70);
	hair.push_back(103, 66);
	 
	nose.push_back(106,120);
	nose.push_back(108,121);
	nose.push_back(112,128);
	nose.push_back(108,127);

	head.push_back(106,57);
	head.push_back(42,62);
	head.push_back(64,113);
	head.push_back(53,113);
	head.push_back(44,113);
	head.push_back(47,126);
	head.push_back(57,134);
	head.push_back(66,141);
	head.push_back(70,163);
	head.push_back(107,162);
	head.push_back(147,161);
	head.push_back(153,134);
	head.push_back(160,130);
	head.push_back(169,125);
	head.push_back(173,109);
	head.push_back(164,110);
	head.push_back(149,112);
	head.push_back(172,63);
	head.push_back(107,57);

	babyface.addCurveShape(head);
	babyface.addCurveShape(hair);
	babyface.addCurve(nose);

	Printer::initializePrinter();
	Printer::drawCanvas(255,255,255,255);
	babyface.draw();
	Printer::printToScreen();
	sleep(5);
	Printer::finishPrinter();*/

	return 0;
}
