bin/main: bin src/lib/*.cpp src/include/*.h src/main/mAnimationFace.cpp
	g++ -o bin/animshape src/main/mAnimationFace.cpp src/lib/Curve.cpp src/lib/CurveShape.cpp src/lib/Printer.cpp src/lib/Point.cpp src/lib/SolidPolygon.cpp src/lib/Texture.cpp src/lib/CurveCollection.cpp src/lib/Girl.cpp -std=c++11 -fpermissive -lpthread

bin:
	mkdir -p bin