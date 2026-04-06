// Julie Gonzales 
// 04-05-2026
// physics student function inplemenation 

#include "Physics_Student.h"
#include <iostream>

Physics_Student::Physics_Student() : Student() {
    concentration = "Biophysics";
}

Physics_Student::~Physics_Student() {}

void Physics_Student::setConcentration(const std::string &c) {
    concentration = c;
}

std::string Physics_Student::getConcentration() const {
    return concentration;
}

void Physics_Student::writeToFile(std::ostream &out) const {
    Student::writeToFile(out);
    out << "Physics Concentration: " << concentration << "\n\n";
}
