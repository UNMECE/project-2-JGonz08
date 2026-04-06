//Julie Gonzales 
//04-03-2026
// student.cpp is a implementation file for student class and has the programming for the functions 

#include "Student.h"
#include <iostream>

Student::Student() {
    first_name = "None";
    last_name = "None";
    gpa = 0.0;
    grad_year = 0;
    grad_semester = "None";
    enrolled_year = 0;
    enrolled_semester = "None";
    level = "undergrad";
}

Student::~Student() {}

void Student::setName(const std::string &first, const std::string &last) {
    first_name = first;
    last_name = last;
}

void Student::setGPA(double g) { gpa = g; }
void Student::setGradYear(int y) { grad_year = y; }
void Student::setGradSemester(const std::string &s) { grad_semester = s; }
void Student::setEnrolledYear(int y) { enrolled_year = y; }
void Student::setEnrolledSemester(const std::string &s) { enrolled_semester = s; }
void Student::setLevel(const std::string &lvl) { level = lvl; }

std::string Student::getName() const { return first_name + " " + last_name; }
double Student::getGPA() const { return gpa; }
int Student::getGradYear() const { return grad_year; }
std::string Student::getGradSemester() const { return grad_semester; }
int Student::getEnrolledYear() const { return enrolled_year; }
std::string Student::getEnrolledSemester() const { return enrolled_semester; }
std::string Student::getLevel() const { return level; }

void Student::writeToFile(std::ostream &out) const {
    out << "Name: " << getName() << "\n";
    out << "GPA: " << gpa << "\n";
    out << "Graduation: " << grad_semester << " " << grad_year << "\n";
    out << "Enrolled: " << enrolled_semester << " " << enrolled_year << "\n";
    out << "Level: " << level << "\n";
}
