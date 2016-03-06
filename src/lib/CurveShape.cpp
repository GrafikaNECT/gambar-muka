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
    std::vector<Point> path;
    SolidPolygon fill(fillTexture);

    for (int i = 0; i < this->size()-3; i+=3) {
      tmp.push_back(this->at(i));
      tmp.push_back(this->at(i+1));
      tmp.push_back(this->at(i+2));
      tmp.push_back(this->at(i+3));
      Curve curve(tmp,outlineTexture);
      path = curve.getPathPoints();
      fill.insert(fill.end(),path.begin(),path.end());
      path.clear();
      tmp.clear();
    }

    //draw fill
    fill.draw();

    //draw outline
    for (int i=0;i<fill.size();i++) {
        outlineTexture.draw(fill.at(i).getX(), fill.at(i).getY());
    }
}
