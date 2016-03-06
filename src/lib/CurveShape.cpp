#include "../include/SolidPolygon.h"
#include "../include/CurveShape.h"
#include "../include/Curve.h"
#include "../include/Printer.h" 

void CurveShape::push_back(int x, int y){
	Point p(x,y);
	push_back(p);
}

void CurveShape::draw(){
    std::vector<Point> tmp;
    SolidPolygon fill(texture);
    for (int i = 0; i < this->size()-3; i+=3) {
      tmp.push_back(this->at(i));
      tmp.push_back(this->at(i+1));
      tmp.push_back(this->at(i+2));
      tmp.push_back(this->at(i+3));
      Curve curve(tmp,texture);
      //curve.draw();
      for (double t = 0; t <= 1; t += 0.01) { 
        fill.push_back(curve.calculateBezier(t));
      }
      tmp.clear();
    }
    fill.draw();
}