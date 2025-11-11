#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
class Student {
private: 
	int yearLevel;
	std:: string major;
public: 
	Student();
	Student(std::string major, int yearLevel);
	void display();
   };













#endif
