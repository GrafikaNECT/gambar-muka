#include "../include/Girl.h"

std::string Girl::faceImage = "girl/face.txt";
std::string Girl::eyesOpenNormalImage = "girl/eyes-open-normal.txt";
std::string Girl::eyesClosedNormalImage = "girl/eyes-closed-normal.txt";
std::string Girl::mouthNormalImage = "girl/mouth-normal.txt";

// TODO: KEBAWAH INI BELUM ADA GAMBARNYA SEMUA
// liat aja di gambarnya udah ada semua di sini:
// http://cache1.asset-cache.net/xc/534972431.jpg?v=2&c=IWSAsset&k=2&d=f72VY9-Jh1-YI426yhlX-iB5DiDs6cYnWH7fKsl0sZEQVi7F0uW7aBnFNtG4EEk60
// attribute itu kaya love, tanda seru, tangisan, etc.
// yang mungkin ga ada kaya mata merem pas angry kira kira aja

std::string Girl::eyesClosedInLoveImage = "girl/eyes-closed-inlove.txt";
std::string Girl::mouthInLoveImage = "girl/mouth-inlove.txt";
std::string Girl::attributeInLoveImage = "girl/attribute-inlove.txt";
std::string Girl::eyesOpenShockedImage = "girl/eyes-open-shocked.txt";
std::string Girl::eyesClosedShockedImage = "girl/eyes-closed-shocked.txt";
std::string Girl::mouthShockedImage = "girl/mouth-shocked.txt";
std::string Girl::attributeShockedImage = "girl/attribute-shocked.txt";
std::string Girl::mouthHappyImage = "girl/mouth-happy.txt";
std::string Girl::attributeHappyImage = "girl/attribute-happy.txt";
std::string Girl::eyesOpenBoredImage = "girl/eyes-open-bored.txt";
std::string Girl::eyesClosedBoredImage = "girl/eyes-closed-sleep.txt";
std::string Girl::mouthBoredImage = "girl/mouth-bored.txt";
std::string Girl::attributeBoredImage = "girl/attribute-bored.txt";
std::string Girl::eyesOpenAngryImage = "girl/eyes-open-angry.txt";
std::string Girl::mouthAngryImage = "girl/mouth-angry.txt";
std::string Girl::attributeAngryImage = "girl/attribute-angry.txt";
std::string Girl::mouthSadImage = "girl/mouth-sad.txt";
std::string Girl::attributeSadImage = "girl/attribute-sad.txt";
std::string Girl::eyesClosedSleepImage = "girl/eyes-closed-sleep.txt";
std::string Girl::attributeSleepImage = "girl/attribute-sleep.txt";

CurveCollection Girl::face = CurveCollection(faceImage);
CurveCollection Girl::eyesOpen = CurveCollection(eyesOpenNormalImage);
CurveCollection Girl::eyesClosed = CurveCollection(eyesClosedNormalImage);
CurveCollection Girl::mouth = CurveCollection(mouthNormalImage);
CurveCollection Girl::attribute = CurveCollection();

std::vector<Point> Girl::canvasEdges({Point(0,0),Point(0,399),Point(399,399),Point(399,0)});
SolidPolygon Girl::canvas(canvasEdges,Texture::createSingleColorTexture(255,255,255,255));

Girl::Girl() {
	changeEmotionToNormal();
	start();
}

void* Girl::drawAnimation(void * arg) {
	while (true) {
		canvas.draw();
		face.draw();
		eyesOpen.draw();
		mouth.draw();
		Printer::printToScreen();
		usleep(25000);
		attribute.draw();
		Printer::printToScreen();
		usleep(25000);
		canvas.draw();
		face.draw();
		eyesClosed.draw();
		mouth.draw();
		Printer::printToScreen();
		usleep(25000);
		attribute.draw();
		Printer::printToScreen();
		usleep(25000);
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
	Girl::eyesOpen = CurveCollection(eyesOpenShockedImage);
	Girl::eyesClosed = CurveCollection(eyesClosedShockedImage);
	Girl::mouth = CurveCollection(mouthShockedImage);
	Girl::attribute = CurveCollection(attributeShockedImage);
}

void Girl::changeEmotionToHappy() {
	Girl::eyesOpen = CurveCollection(eyesOpenNormalImage);
	Girl::eyesClosed = CurveCollection(eyesClosedNormalImage);
	Girl::mouth = CurveCollection(mouthHappyImage);
	Girl::attribute = CurveCollection(attributeHappyImage);
}

void Girl::changeEmotionToBored() {
	Girl::eyesOpen = CurveCollection(eyesOpenBoredImage);
	Girl::eyesClosed = CurveCollection(eyesClosedBoredImage);
	Girl::mouth = CurveCollection(mouthBoredImage);
	Girl::attribute = CurveCollection(attributeBoredImage);
}

void Girl::changeEmotionToAngry() {
	Girl::eyesOpen = CurveCollection(eyesOpenAngryImage);
	Girl::eyesClosed = CurveCollection(eyesClosedInLoveImage);
	Girl::mouth = CurveCollection(mouthAngryImage);
	Girl::attribute = CurveCollection(attributeAngryImage);
}

void Girl::changeEmotionToSad() {
	Girl::eyesOpen = CurveCollection(eyesOpenBoredImage);
	Girl::eyesClosed = CurveCollection(eyesClosedInLoveImage);
	Girl::mouth = CurveCollection(mouthSadImage);
	Girl::attribute = CurveCollection(attributeSadImage);
}

void Girl::goToSleep() {
	Girl::eyesOpen = CurveCollection(eyesClosedSleepImage);
	Girl::eyesClosed = CurveCollection(eyesClosedSleepImage);
	Girl::mouth = CurveCollection(mouthNormalImage);
	Girl::attribute = CurveCollection(attributeSleepImage);
}

int Girl::start() {
	int result = pthread_create(&m_tid, NULL, drawAnimation, this);
    return result;
}
