#include "selectionSort.h"
#include <iostream>

SelectionSort::SelectionSort(){

}

std::vector<int> SelectionSort::sort(std::vector<int> unsortedArr){
	std::vector<int> input = unsortedArr;
	std::vector<int> sortedList;
	int iof = 0; //Index of smallest

	while(input.size()>0){
		std::cout << "while loop\n";
		for(int i = 0; i<input.size();i++){
			std::cout << "i:\n" << i;
			if(input.at(i)<=input.at(iof)){
				iof = i;	
			}		
		}
		sortedList.push_back(input.at(iof));
		input.erase(input.begin()+iof);
		iof = 0;

	}
	printVector(sortedList);

	return unsortedArr;
}
void SelectionSort::printVector(std::vector<int> arr){

	std::cout << "[";
	for(int i = 0; i<arr.size();i++){
		std::cout << arr.at(i);
		if(i!=arr.size()-1){
			std::cout << ",";			
		}
	}
	std::cout << "]" << std::endl;


}
