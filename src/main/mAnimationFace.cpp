#include "../include/Alphabet.h"
#include "../include/Curve.h"
#include "../include/CurveShape.h"
#include "../include/CurveCollection.h"
#include "../include/Printer.h"
#include "../include/Girl.h"
#include "../include/Kbhit.h"
#include <unistd.h>
#include <iostream>

#include <vector>

int main(){
	//inisialisasi printer
	Printer::initializePrinter();
	Printer::drawCanvas(255,255,255,255);

	ifstream Alphabetfile;
	Alphabetfile.open("Alphabet-2.txt");
	Alphabet a1(Alphabetfile);
	Alphabet Alphabet2= a1;
	Alphabetfile.close();

	Alphabet2.drawText("GRAPHICAT", 600,50,3,255,0,0,255);
	Alphabet2.drawText("KEYS",600,150,2,139,69,19,255);
	Alphabet2.drawText("N  NORMAL",600,200,2,139,69,19,255);
	Alphabet2.drawText("L  IN LOVE",600,250,2,139,69,19,255);
	Alphabet2.drawText("H  HAPPY",600,300,2,139,69,19,255);
	Alphabet2.drawText("B  BORED",600,350,2,139,69,19,255);
	Alphabet2.drawText("A  ANGRY",600,400,2,139,69,19,255);
	Alphabet2.drawText("S  SHOCK",600,450,2,139,69,19,255);
	Alphabet2.drawText("C  SAD",600,500,2,139,69,19,255);
	Alphabet2.drawText("Z  SLEEP",600,550,2,139,69,19,255);
	Alphabet2.drawText("Q  QUIT",600,600,2,139,69,19,255);

	Printer::printToScreen();

	Girl girl = Girl();

	bool cont=true;
	char c;
	Kbhit::initTermios();

	while (cont) {
		if (Kbhit::kbhit()) {
			c = Kbhit::getch();
			switch(c) {
				case 'n':
				case 'N':
					girl.changeEmotionToNormal();
				break;
				case 'l':
				case 'L':
					girl.changeEmotionToInLove();
				break;
				case 's':
				case 'S':
					girl.changeEmotionToShock();
				break;
				case 'h':
				case 'H':
					girl.changeEmotionToHappy();
				break;
				case 'b':
				case 'B':
					girl.changeEmotionToBored();
				break;
				case 'a':
				case 'A':
					girl.changeEmotionToAngry();
				break;
				case 'c':
				case 'C':
					girl.changeEmotionToSad();
				break;
				case 'z':
				case 'Z':
					girl.goToSleep();
				break;
				case 'q':
					cont=false;
				break;
				default:
					cerr<<"No action bound for key '"<<c<<"'"<<endl;
				break;
			}
		}
	}

	Kbhit::resetTermios();
	Printer::finishPrinter();
	return 0;
}
