/*

InPatitent class... derived class representing an in-patient
who visits a hospital

*/

#ifndef INPATIENT_H
#define INPATIENT_H
#include "Patient.h"
#include <string>
using namespace std;

class InPatient: public Patient{
 public:
  //constructor takes name, inDate and outDate
  InPatient(std::string name, int in_date, int out_date);

  virtual int get_cost();
 protected:
  int in_date;
  int out_date;
};

#endif // INPATIENT_H
