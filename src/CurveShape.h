#ifndef CurveShape_h
#define CurveShape_h

#include <vector>
#include "Point.h"
#include "Texture.h"

class CurveShape: public std::vector<Point>{
	public:
	CurveShape(Texture t = Texture::createSingleColorTexture(0,0,0,0)):std::vector<Point>(){texture=t;};
	CurveShape(std::vector<Point>& vec, Texture t = Texture::createSingleColorTexture(0,0,0,0)):std::vector<Point>(vec),texture(t){};

	void push_back(int x, int y); 
	void push_back(const Point& p){std::vector<Point>::push_back(p);};

	void draw();

	private:
	Texture texture;
};

#endif
