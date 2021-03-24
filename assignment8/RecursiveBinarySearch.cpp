#include "RecursiveBinarySearch.h"

int RecursiveBinarySearch::search(int array[], int begin, int end, int num){

   if (end >= begin)
   {
        int middle = begin + (end - begin)/2;
 
        if (array[middle] == num)  
            return 1;// this returned value will print true in main
        if (array[middle] > num) 
            return search(array, begin, middle-1, num);
        return search(array, middle+1, end, num);
   }
   return 0;// this returned value will print false in main
}
 