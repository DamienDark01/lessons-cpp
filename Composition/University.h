#pragma once
#include "Classroom.h"

class University
{
private:
	Classroom* room[2];

public:
	University();
	University(int no1, int no2);
	void displayClassrooms();
	~University();
};
