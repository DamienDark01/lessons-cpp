#include "Classroom.h"
#include "University.h"
#include <iostream>

using namespace std;

int main() {
  University *myUni;
  myUni = new University(501, 502); // overloaded constructor calling
  // if the default constructor is called, 101 and 102 are the Classrooms

  myUni->displayClassrooms();

  delete myUni; // this also deletes Clasroom objects

  return 0;
}
