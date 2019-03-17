#include "HuffmanCompress.h"
#include "Lz77Compress.hpp"

#include <iostream>
using namespace std;
int main()
{

#if 0
	HuffmanCompress fc;
	fc.Compress("13.png");
	fc.UnCompress("1.hip");
#else
	Lz77Compress lc;
	lc.Compress("3.png");
	lc.UnCompress("3.lzp");
#endif
	return 0;
}

