// QuickSort.h
#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

// A class that inherits publically from Sort class
class QuickSort : public Sort{
public:
	// This function assigns the pivot of the array
	// and places the pivot element in the correct
	// position in the sorted array and puts the 
	// the smaller and larger elements when compared 
	// to the pivot to the left and right 
	// of the pivot respectively and swaps elements
	// to sort in the rigth order
	int split(int arr[], int lower,int upper);
	// Virtual function extended from class Sort that does
	// quick sort recursively by calling split function
	// inside it
	virtual void sort(int arr[],int lower,int upper);
};
#endif // QUICKSORT_H