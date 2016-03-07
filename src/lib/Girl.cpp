#include "../include/Girl.h"

std::string Girl::faceImage = "../main/girl/face.txt";
std::string Girl::eyesOpenNormalImage = "../main/girl/eyes-open-normal.txt";
std::string Girl::eyesClosedNormalImage = "../main/girl/eyes-closed-normal.txt";
std::string Girl::mouthNormalImage = "../main/girl/mouth-normal.txt";

// TODO: KEBAWAH INI BELUM ADA GAMBARNYA SEMUA
// liat aja di gambarnya udah ada semua di sini:
// http://cache1.asset-cache.net/xc/534972431.jpg?v=2&c=IWSAsset&k=2&d=f72VY9-Jh1-YI426yhlX-iB5DiDs6cYnWH7fKsl0sZEQVi7F0uW7aBnFNtG4EEk60
// attribute itu kaya love, tanda seru, tangisan, etc.
// yang mungkin ga ada kaya mata merem pas angry kira kira aja

std::string Girl::eyesClosedInLoveImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::mouthInLoveImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::attributeInLoveImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::mouthShockedImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::attributeShockedImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::mouthHappyImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::attributeHappyImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::eyesOpenBoredImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::eyesClosedBoredImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::mouthBoredImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::attributeBoredImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::eyesOpenAngryImage = "../main/girl/eyes-open-angry.txt";
std::string Girl::eyesClosedAngryImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::mouthAngryImage = "../main/girl/mouth-angry.txt";
std::string Girl::attributeAngryImage = "../main/girl/attribute-angry.txt";
std::string Girl::eyesOpenSadImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::eyesClosedSadImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::mouthSadImage = "../main/girl/NOTIMPLEMENTEDYET.txt";
std::string Girl::attributeSadImage = "../main/girl/NOTIMPLEMENTEDYET.txt";

CurveCollection Girl::face = CurveCollection(faceImage);
CurveCollection Girl::eyesOpen = CurveCollection(eyesOpenNormalImage);
CurveCollection Girl::eyesClosed = CurveCollection(eyesClosedNormalImage);
CurveCollection Girl::mouth = CurveCollection(mouthNormalImage);
CurveCollection Girl::attribute = CurveCollection();

Girl::Girl() {
	changeEmotionToNormal();
	start();
}

void* Girl::drawAnimation(void * arg) {
	while (true) {
		Printer::drawCanvas(255,255,255,255);
		face.draw();
		eyesOpen.draw();
		mouth.draw();
		Printer::printToScreen();
		sleep(0.1);
		attribute.draw();
		sleep(0.4);
		Printer::drawCanvas(255,255,255,255);
		face.draw();
		eyesClosed.draw();
		mouth.draw();
		attribute.draw();
		Printer::printToScreen();
		sleep(0.1);
	}

}

void Girl::changeEmotionToNormal() {
	Girl::eyesOpen = CurveCollection(eyesOpenNormalImage);
	Girl::eyesClosed = CurveCollection(eyesClosedNormalImage);
	Girl::mouth = CurveCollection(mouthNormalImage);
	Girl::attribute = CurveCollection();
}

void Girl::changeEmotionToInLove() {
	Girl::eyesOpen = CurveCollection(eyesOpenNormalImage);
	Girl::eyesClosed = CurveCollection(eyesClosedInLoveImage);
	Girl::mouth = CurveCollection(mouthInLoveImage);
	Girl::attribute = CurveCollection(attributeInLoveImage);
}

void Girl::changeEmotionToShock() {
	Girl::eyesOpen = CurveCollection(eyesOpenNormalImage);
	Girl::eyesClosed = CurveCollection(eyesClosedNormalImage);
	Girl::mouth = CurveCollection(mouthShockedImage);
	Girl::attribute = CurveCollection(attributeShockedImage);
}

void Girl::changeEmotionToHappy() {
	Girl::eyesOpen = CurveCollection(eyesOpenNormalImage);
	Girl::eyesClosed = CurveCollection(eyesClosedNormalImage);
	Girl::mouth = CurveCollection(mouthHappyImage);
	Girl::attribute = CurveCollection(attributeHappyImage);
}

void Girl::changeEmotionToBoring() {
	Girl::eyesOpen = CurveCollection(eyesOpenBoredImage);
	Girl::eyesClosed = CurveCollection(eyesClosedBoredImage);
	Girl::mouth = CurveCollection(mouthBoredImage);
	Girl::attribute = CurveCollection(attributeBoredImage);
}

void Girl::changeEmotionToAngry() {
	Girl::eyesOpen = CurveCollection(eyesOpenAngryImage);
	Girl::eyesClosed = CurveCollection(eyesOpenAngryImage);
	Girl::mouth = CurveCollection(mouthAngryImage);
	Girl::attribute = CurveCollection(attributeAngryImage);
}

void Girl::changeEmotionToSad() {
	Girl::eyesOpen = CurveCollection(eyesOpenSadImage);
	Girl::eyesClosed = CurveCollection(eyesClosedSadImage);
	Girl::mouth = CurveCollection(mouthSadImage);
	Girl::attribute = CurveCollection(attributeSadImage);
}


int Girl::start() {
	int result = pthread_create(&m_tid, NULL, drawAnimation, this);
    return result;
}
