#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stId, const char stName[]) {
  studentId=stId;
  strcpy(name,stName);
}

// Display StudentId and Name
void Student::display() {
  cout << "student ID number: " <<studentId <<endl;
  cout << "Student Name: " << name << endl;
}
Y