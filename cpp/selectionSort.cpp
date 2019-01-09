#include "selectionSort.h"
#include <iostream>

SelectionSort::SelectionSort(){

}

std::vector<int> SelectionSort::sort(std::vector<int> arr){
	std::cout << "selectionSort class function sort!\n";
	std::cout << "[";
	for(int i = 0; i<arr.size();i++){
		std::cout << arr.at(i);
		if(i!=arr.size()-1){
			std::cout << ",";			
		}
	}
	std::cout << "]" << std::endl;
	return arr;
}
