#include "FilterGeneric.h"

vector<int> FilterGeneric::filter(vector<int> a){
  static int iterator = a.size()-1;
    if(iterator==0){
      iterator=a.size()-1;  
      vector<int> b;
      if(g(a[0])==true)
        b.push_back(g(a[0]));
      return b;
    }
    else{
      int temp = iterator;
      iterator--;
      vector<int> b = filter(a);
      if(g(a[temp])==true)
        b.push_back(g(a[temp]));
      return b;
    }
  }


