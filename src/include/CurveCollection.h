#ifndef CurveCollection_h
#define CurveCollection_h

#include "Curve.h"
#include <vector>
#include <istream>

class CurveCollection: public std::vector<Curve> {
	public:
	CurveCollection():std::vector<Curve>(){};
	CurveCollection(std::vector<Curve>& vec):std::vector<Curve>(vec){};

	void push_back(const Curve& c){std::vector<Curve>::push_back(c);}

	//definisikan ini
	//beserta format CurveStreamFile, TextureStreamFile
	static CurveCollection fromFile(istream& CurveStreamFile, istream& TextureStreamFile);

	//definisikan ini
	void draw();

	
};

#endif
