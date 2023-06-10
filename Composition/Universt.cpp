#include "University.h"
#include "Classroom.h"
#include <iostream>

using namespace std;

// default constructor
// - already has parametric values set to Class objects in case overloaded constructor isn't called
// - Classroom objects are created automatically when University objects are created
University::University() {
	room[0] = new Classroom(101);
	room[1] = new Classroom(102);
}

// overloaded constructor which assigns parametric values to CLassroom objects
University::University(int no1, int no2) {
	room[0] = new Classroom(no1);
	room[1] = new Classroom(no2);
}

void University::displayClassrooms() {
	for (int i = 0; i < 2; i++) {
		room[i]->display();
	}
}

// destructor
University::~University() {
	cout << "Deleting University" << endl;

  // deleting the Classroom objects when deleting University object
	for (int i = 0; i < 2; i++) {
		delete room[i];
	}
}
