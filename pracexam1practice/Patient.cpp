/* 
  Patient class implementation
  Base class for a patient in a health system.
*/

#include "Patient.h"

// put implementations of functions for Patient here...
Patient::Patient(string name){
	this->name=name;
}
string Patient::get_name(){
	return this->name;
}


