#include "Classroom.h"
#include <iostream>

using namespace std;

// default constructor
Classroom::Classroom() {
	// empty
}

// overloaded constructor
Classroom::Classroom(int no) {
	roomNo = no;
}

void Classroom::display() {
	cout << "Classroom No : " << roomNo << endl;
}

// destructor
Classroom::~Classroom() {
	cout << "Deleting Classroom No : " << roomNo << endl;
}
