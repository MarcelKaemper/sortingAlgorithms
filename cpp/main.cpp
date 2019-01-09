#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include "selectionSort.h"

int main(){
	SelectionSort ss; 
	std::vector<int> vect = {1,2,3,4};

	ss.sort(vect);
	
	std::cout << "Hello, World!" << std::endl;

	return 0;

}
