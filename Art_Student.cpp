// Julie Gonzales
// 04-05-2026
// art student function inplemenation 

#include "Art_Student.h"
#include <iostream>

Art_Student::Art_Student() : Student() {
    art_emphasis = "Art Studio";
}

Art_Student::~Art_Student() {}

void Art_Student::setEmphasis(const std::string &e) {
    art_emphasis = e;
}

std::string Art_Student::getEmphasis() const {
    return art_emphasis;
}

void Art_Student::writeToFile(std::ostream &out) const {
    Student::writeToFile(out);
    out << "Art Emphasis: " << art_emphasis << "\n\n";
}


