#ifndef Girl_h
#define Girl_h

#include "../include/Curve.h"
#include "../include/CurveShape.h"
#include "../include/CurveCollection.h"
#include "../include/Printer.h"
#include <string.h>
#include <pthread.h>
#include <unistd.h>

class Girl {
public:
	Girl();
	static void* drawAnimation(void* arg);
	void changeEmotionToNormal(); 
	void changeEmotionToInLove();
	void changeEmotionToShock();
	void changeEmotionToHappy();
	void changeEmotionToBoring();
	void changeEmotionToAngry();
	void changeEmotionToSad();

private:
	int start();

	static std::string faceImage;

	static std::string eyesOpenNormalImage;
	static std::string eyesClosedNormalImage;
	static std::string mouthNormalImage;

	// eyesOpen = eyesOpenNormal
	static std::string eyesClosedInLoveImage;
	static std::string mouthInLoveImage;
	static std::string attributeInLoveImage;

	// eyesOpen = eyesOpenNormal
	// eyesClosed = eyesClosedNormal
	static std::string mouthShockedImage;
	static std::string attributeShockedImage;

	// eyesOpen = eyesOpenNormal
	// eyesClosed = eyesClosedNormal
	static std::string mouthHappyImage;
	static std::string attributeHappyImage;

	static std::string eyesOpenBoredImage;
	static std::string eyesClosedBoredImage;
	static std::string mouthBoredImage;
	static std::string attributeBoredImage;

	static std::string eyesOpenAngryImage;
	static std::string eyesClosedAngryImage;
	static std::string mouthAngryImage;
	static std::string attributeAngryImage;

	// eyesOpen = eyesClosedBored
	// eyesClosed = eyesClosedInLove
	static std::string mouthSadImage;
	static std::string attributeSadImage;

	static CurveCollection face;
	static CurveCollection eyesOpen;
	static CurveCollection eyesClosed;
	static CurveCollection mouth;
	static CurveCollection attribute;

	pthread_t m_tid;
};

#endif