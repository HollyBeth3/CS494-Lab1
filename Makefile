draw: draw.cpp
	g++ -o draw draw.cpp
	./draw wow1 25 25 112 255 0 0 ds st
	./draw wow2 135 206 250 34 139 34 o pf
	./draw wow3 0 206 209 255 228 225 h yf
	./draw wow4 216 160 221 240 255 240 h bf
	./draw wow5 47 79 79 128 0 0 ds st
clean:
	rm draw
