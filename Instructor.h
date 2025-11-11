#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <string>
using namespace std;
class Instructor {
private: 
	string department;
	int experienceYears;
public:
	Instructor();
	Instructor(string department, int experienceYears);
	void display();
 };











#endif
