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

	Alphabet2.drawTextCentered("GRAPHICAT",50,3,255,0,0,255);
	Printer::printToScreen();

	sleep(1);

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
