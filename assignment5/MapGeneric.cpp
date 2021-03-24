#include "MapGeneric.h"

vector<int> MapGeneric::map(vector<int> a){
	static int iterator = a.size()-1;
    if(iterator==0){
      iterator=a.size()-1;	
      vector<int> b;
      b.push_back(f(a[0]));
      return b;
    }
    else{
      int temp = iterator;
      iterator--;
      vector<int> b = map(a);
      b.push_back(f(a[temp]));
      return b;
    }
  }


