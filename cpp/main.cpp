#include <iostream>
#include <stdio.h>
#include <vector>
#include "selectionSort.h"

int main(){
	SelectionSort ss; 
	std::vector<int> vect = {12,22,6,40};

	ss.sort(vect);
	
	std::cout << "Hello, World!" << std::endl;

	return 0;

}
