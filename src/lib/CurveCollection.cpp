#include "../include/CurveCollection.h"

//menambah Curve
//perhatikan orderGambar (spek di bawah)
void CurveCollection::addCurve(Curve c){
	curves.push_back(c);
	orderGambarCurve.push_back(numElmts);
	numElmts++;
}



//menambah CurveShape
//perhatikan orderGambar (spek di bawah)
void CurveCollection::addCurveShape(CurveShape curveShape){
	curveShapes.push_back(curveShape);
	orderGambarCurveShape.push_back(numElmts);
	numElmts++;
}


//gambar
//curve dan curveshapeigon
void CurveCollection::draw(){
	std::list<Curve>::iterator itcurve = curves.begin();
	std::list<CurveShape>::iterator itcurveshape = curveShapes.begin();
	std::list<int>::iterator itordcurve = orderGambarCurve.begin();
	std::list<int>::iterator itordcurveshape = orderGambarCurveShape.begin();
	
	while (itcurve != curves.end() || itcurveshape != curveShapes.end()){
		if (itordcurveshape==orderGambarCurveShape.end()){
			itcurve->draw();
			itcurve++;
			itordcurve++;
		}else if(itordcurve==orderGambarCurve.end()){
			itcurveshape->draw();
			itcurveshape++;
			itordcurveshape++;
		}else if (*itordcurve<*itordcurveshape){
			itcurve->draw();
			itcurve++;
			itordcurve++;
		}else{
			itcurveshape->draw();
			itcurveshape++;
			itordcurveshape++;
		}
	}
}
