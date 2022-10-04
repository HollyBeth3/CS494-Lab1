# CS494-Lab1

### Comilation Instructions
The Makefile will compile the program draw.cpp file and run it five times to create five unique jpg images. The "make" command does this, and make clean removes the draw executable.
The compilation line on its own is "g++ -o draw draw.cpp". To run draw.cpp on its own, there are 10 arguments on the command line ./draw (the executable), rt, gt, bt (rgb values of the top rectangle entered as values between 0 and 255), rb, gb, bb (rgb values of the bottom rectangle entered as values between 0 and 255), main_feature (entered as "ds" for Death Star, "h" for Hippogriff, and "o" for owl), and foreground_elements (entered as "pf" for pink flowers, "bf" for blue flowers, "yf" for yellow flowers, and "st" for stars).

### Description
I created a few .jgr files seperately and converted them to .jpg to see how they looked on there own. There are three main feature files:
![name](https://github.com/HollyBeth3/CS494-Lab1/blob/main/cropped_images/cropped_DeathStar.jpg?raw=true)
My program draw.cpp creates a top and bottom rectangles in the background using the given rgb values, places the main feature in the middle based on the given line, and places foreground elements all around it.
