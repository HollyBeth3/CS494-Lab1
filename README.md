# CS494-Lab1

### Compilation Instructions
The Makefile will compile the program draw.cpp file and run it five times to create five unique .jpg images. The "make" command does this, and "make clean" removes the draw executable.
The compilation line on its own is "g++ -o draw draw.cpp". To run draw.cpp on its own, there are 10 arguments on the command line ./draw (the executable), rt, gt, bt (rgb integers of the top rectangle entered as values between 0 and 255), rb, gb, bb (rgb values of the bottom rectangle entered as integers between 0 and 255), main_feature (entered as "ds" for Death Star, "h" for Hippogriff, and "o" for owl), and foreground_elements (entered as "pf" for pink flowers, "bf" for blue flowers, "yf" for yellow flowers, and "st" for stars).
Every run creates a .jgr and .jpg file for the created illustration.

### Description
I love to draw and wanted to create an interactive program that generates styalized illustrations of simplified versions of some of my favorite subjects. Similar to traditional art, I wanted users to be able to choose a background, main feature, and foreground element. The three main feature options I ended up choosing are an owl, the Death Star from Star Wars, and Buckbeak from Harry Potter. The finished product allows users to create an image with a customizable background, a chosen main feature, and foreground elements.
Firstly, I created a few .jgr files seperately and converted them to .jpg to see how they looked on there own. There are three main feature files: the Death Star, an owl, and Buckbeak. For example, here is the owl as an image.
![name](https://github.com/HollyBeth3/CS494-Lab1/blob/main/cropped_images/cropped_owl.jpg?raw=true)

Then I converted the main features and foreground elements into .eps files to be used in draw.cpp. 
My program draw.cpp creates top and bottom rectangles in the background using the given rgb values, places the main feature in the middle, and places foreground elements around it. Because the jgaph executable in draw.cpp is "/home/jplank/bin/LINUX-X86_64/jgraph", everything should be run from the hydras.
There are four possible foreground elements: stars, pink flowers, blue flowers, and yellow flowers. For instance, here is the pink flower image.
![name](https://github.com/HollyBeth3/CS494-Lab1/blob/main/cropped_images/cropped_pinkFlower.jpg?raw=true)
Here is the third image created by the Makefile.
![name](https://github.com/HollyBeth3/CS494-Lab1/blob/main/cropped_images/cropped_wow3.jpg?raw=true)
