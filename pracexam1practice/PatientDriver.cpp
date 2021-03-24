#include<iostream>
#include "InPatient.h"
#include "OutPatient.h"
#include "Patient.h"

int main(){
  // driver program...
  
  // set up entities 
  OutPatient a = OutPatient("Anne");
  OutPatient b = OutPatient("Bob");
  InPatient c = InPatient("Chris",20,30);
  Patient* d = new InPatient("Deb",10,15);
  Patient* e = new OutPatient("Ed");

  // print out initial details
  std::cout << a.get_name() << " " << a.get_cost() << std::endl;
  std::cout << b.get_name() << " " << b.get_cost() << std::endl;
  std::cout << c.get_name() << " " << c.get_cost() << std::endl;
  std::cout << d->get_name() << " " << d->get_cost() << std::endl;
  std::cout << e->get_name() << " " << e->get_cost() << std::endl;
  std::cout << "--------" << std::endl;
  

  // modify some out patients
  a.visit();
  a.visit();
  a.visit();
  b.visit();
  b.visit();
  ((OutPatient *)e)->visit();

  // print thse ones.
  
  std::cout << a.get_name() << " " << a.get_cost() << std::endl;
  std::cout << b.get_name() << " " << b.get_cost() << std::endl;
  std::cout << e->get_name() << " " << e->get_cost() << std::endl;
  std::cout << "--------" << std::endl;

  // assign patients

  delete((InPatient*)d); // clean up
  d=e; // alias d and e to same person
  a=b; // copy contents from b to a. 

  // print out the details of the last patient.
  
  std::cout << a.get_name() << " " << a.get_cost() << std::endl;
  std::cout << b.get_name() << " " << b.get_cost() << std::endl;
  std::cout << d->get_name() << " " << d->get_cost() << std::endl;
  std::cout << e->get_name() << " " << e->get_cost() << std::endl;
  std::cout << "--------" << std::endl;

  delete((OutPatient *)e); // cleanup
 
}
  
