#include<iostream>
#include<vector>
using namespace std;

/* General instructions: Please modify this file and submit the modified one
 via websubmission
 
 Please note, you must use recursion in answering this  question.
 */

/* Task 2: Implement the following recursive function for calculating the i-th positive odd number.
 */
int Odd(int i){
  // put your code defining the i-th odd number here.
  static int number = -1;
  if(i!=0){
    number += 2;
    return Odd(i-1);
  }
  else {
    int answer = number;
    number = -1;
    return answer;
  }
}

// You are not supposed to change the main function
int main() {
    // Below are the y test cases. If you pass x cases, then your mark is x/y.
    cout << Odd(1)<< endl; //
    cout << Odd(2)<< endl; //
    cout << Odd(150)<< endl; //

}

