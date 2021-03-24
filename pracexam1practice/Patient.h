/* 
  Patient class.
  Base class for a patient in a health system.
*/


#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient{
 public:
  // constructor takes, name of patient
  Patient(std::string name);

  // getter methods
  virtual std::string get_name();
  virtual int get_cost()=0;

 protected:
  // field variables
  std::string name;
};

#endif // PATIENT_H
