// Name: Holland Johnson
// Year: 2022
// Assignment: CS 494 Lab 1
// Description: Use jgraph to make something interesting.

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
  if (argc != 10) {
    cerr << "usage: ./draw r_top g_top b_top r_bottom g_bottom b_bottom main_feature foreground_element\n";
	return 1;
  }

  // Variables
  ofstream fout;
  string fileName;
  string newFile;
  string feature;    // Death Star: ds, owl: o, Hippogriff: h
  string featSize;   // Feature marksize
  string forEl;      // Foreground element
  int irt, igt, ibt;
  int irb, igb, ibb;
  float rt, gt, bt;
  float rb, gb, bb;
  int rv;
  stringstream ss;

  // Create and open jgr file
  fileName = (string) argv[1];
  newFile = (string) argv[1];
  fileName += ".jgr";
  newFile += ".jpg";
  fout.open(fileName);

  // Calculate rgb values
  sscanf(argv[2], "%d", &irt);
  sscanf(argv[3], "%d", &igt);
  sscanf(argv[4], "%d", &ibt);
  sscanf(argv[5], "%d", &irb);
  sscanf(argv[6], "%d", &igb);
  sscanf(argv[7], "%d", &ibb);

  rt = irt / 255.0;
  gt = igt / 255.0;
  bt = ibt / 255.0;
  rb = irb / 255.0;
  gb = igb / 255.0;
  bb = ibb / 255.0;

  // Choose feature
  feature = argv[8];
  if (feature == "ds") {
    feature = "DeathStar.eps";
	featSize = "10 10";
  } else if (feature == "o") {
    feature = "owl.eps";
	featSize = "15 15";
  } else if (feature == "h") {
    feature = "Hippogriff.eps";
	featSize = "15 15";
  }

  // Choose foreground element
  forEl = argv[9];
  if (forEl == "pf") {
    forEl = "pinkFlower.eps";
  } else if (forEl == "bf") {
    forEl = "blueFlower.eps";
  } else if (forEl == "yf") {
    forEl = "yellowFlower.eps";
  } else if (forEl == "st") {
    forEl = "star.eps";
  }

  // Create new graph
  fout << "newgraph\n";
  fout << "xaxis min 0 max 40 nodraw\nyaxis min 0 max 40 nodraw\n";
  fout << "newcurve marktype box marksize 40 20 cfill "
	   << fixed << setprecision(3)
       << rt << " " << gt << " " << bt << " pts 20 30\n";
  fout << "newcurve marktype box marksize 40 20 cfill "
	   << fixed << setprecision(3)
       << rb << " " << gb << " " << bb << " pts 20 10\n";
  fout << "newcurve eps " << feature << " marksize " << featSize<< " pts 20 20\n";
  fout << "newcurve eps " << forEl << " marksize 20 20 pts 1 1\n";
  fout << "newcurve eps " << forEl << " marksize 15 15 pts 7 5\n";
  fout << "newcurve eps " << forEl << " marksize 10 10 pts 25 12\n";
  fout << "newcurve eps " << forEl << " marksize 18 18 pts 32 10\n";
  fout << "newcurve eps " << forEl << " marksize 5 5 pts 8 35\n";
  fout << "newcurve eps " << forEl << " marksize 7 7 pts 10 33\n";
  fout << "newcurve eps " << forEl << " marksize 16 16 pts 38 38\n";

  fout.close();

  // Make all of the system calls
  ss.clear();
  ss << "/home/jplank/bin/LINUX-X86_64/jgraph -P " << fileName << " > file\n";
  system(ss.str().c_str());
  ss.clear();
  ss << "ps2pdf - < file > file.pdf\n";
  system(ss.str().c_str());
  ss.clear();
  ss << "convert -density 300 - -quality 100 " << newFile << " < file.pdf\n";
  system(ss.str().c_str());

  return 0;
}
