#include <iostream>
#include <stdio.h>
#include <vector>
#include "selectionSort.h"

int main(){
	//std::vector<int> vect = {12,22,6,40};
	std::vector <int> vect = {50, 338, 159, 64, 153, 144, 335, 325, 377, 175, 110, 281, 308, 164, 96, 89, 53, 481, 263, 258, 361, 369, 477, 440, 193, 204, 381, 495, 194, 343, 415, 234, 75, 457, 269, 407, 155, 126, 332, 372, 319, 171, 48, 150, 213, 374, 209, 469, 283, 347, 272, 83, 380, 371, 337, 44, 199, 158, 418, 324, 25, 303, 286, 488, 165, 5, 471, 400, 384, 37, 316, 167, 61, 255, 124, 225, 169, 322, 125, 56, 58, 336, 109, 313, 157, 135, 94, 484, 202, 15, 397, 489, 437, 438, 434, 6, 454, 306, 245, 8};

	SelectionSort ss; 
	ss.printVector(ss.sort(vect));

	return 0;

}
