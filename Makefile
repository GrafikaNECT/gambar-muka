bin/main: bin bin/girl bin/Alphabet-2.txt bin/animshape

bin/animshape: src/lib/*.cpp src/include/*.h src/main/mAnimationFace.cpp
	g++ -o bin/animshape src/main/mAnimationFace.cpp src/lib/Curve.cpp src/lib/CurveShape.cpp src/lib/Printer.cpp src/lib/Point.cpp src/lib/SolidPolygon.cpp src/lib/Texture.cpp src/lib/CurveCollection.cpp src/lib/Girl.cpp src/lib/Kbhit.cpp src/lib/Alphabet.cpp src/lib/PixelBoolMatrix.cpp src/lib/Polygon.cpp src/lib/Letter.cpp -std=c++11 -fpermissive -lpthread

bin:
	mkdir -p bin

bin/girl:
	mkdir -p bin/girl
	cp src/main/girl/* bin/girl/

bin/Alphabet-2.txt:
	cp src/main/Alphabet-2.txt bin/
