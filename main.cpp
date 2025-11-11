
#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
 Person::Person() {
    int id = 0;
   }
 Person::Person(string name, int id) {
    this->name = name;
    this->id = id;
}
 void Person::display() {
     cout << "Name: " << name  << endl << "ID: " << id << endl;
}








// ==================== Student Class Implementation ====================
 Student::Student() {
     int yearLevel = 1;
 }
 Student::Student(string major, int yearLevel) {
     this->major = major;
     this->yearLevel = yearLevel;
 }
 void Student::display() {
     cout << "Major: " << major << endl << "yearLevel: " << yearLevel << endl;
 }






// ==================== Instructor Class Implementation ====================

 Instructor::Instructor() {
     int experienceYears = 0;
 }
 Instructor::Instructor(string department, int experienceYears)  {
     this->department = department;
     this->experienceYears = experienceYears;
 }
 void Instructor::display() {
     cout << "Department: " << department << endl << "experienceYears: " << experienceYears << endl;
 }





// ==================== Course Class Implementation ====================

 Course::Course() {
     int experienceYears = 0;
 }
 Course::Course(string courseCode, string courseName, int maxStudents, Student* students, int currentStudents) {
     this->courseCode = courseCode;
     this->courseName = courseName;
     this->maxStudents = maxStudents;
     this->students = new Student();
     this->currentStudents = currentStudents;
 }
 void Course::addStudent(const Student& s) {
     if (currentStudents < maxStudents) {
         for (int i = 0; i < currentStudents; i++) {
             students[i + 1] = students[i];
         }
     }
     students[0] = s;

 }
 void Course::displayCourseInfo() {
     cout << "courseCode: " << courseCode << endl << "courseName: " << courseName << endl << "maxStudents: " << maxStudents << endl << "CurrentStudents: " << currentStudents << endl;

     for (int i = 0; i < currentStudents; i++) {
         cout << students[i]<< endl;
     }


 }

 ~Student() {
     delete students;
 }







// ==================== Main Function ====================
int main() {
    Student S1("Cs", 4);
    Instructor I1("Physics", 5);
    Course C1("CSEN101", "Programming", 100, students, 50);
    C1.addStudent(S1);

    return 0;
}
