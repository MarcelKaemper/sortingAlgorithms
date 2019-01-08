#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include "selectionSort.h"

int main(){
	SelectionSort ss; 
	std::vector<int> vect;
	vect.push_back(1);
	vect.push_back(5);
	vect.push_back(3);

	ss.sort(vect);
	
	std::cout << "Hello, World!" << std::endl;

	return 0;

}
