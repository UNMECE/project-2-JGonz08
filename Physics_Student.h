// Julie  Gonzales 
// 04-05-2026
// physics student function definition 
#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H

#include "Student.h"

class Physics_Student : public Student {
private:
    std::string concentration;

public:
    Physics_Student();
    ~Physics_Student();

    void setConcentration(const std::string &c);
    std::string getConcentration() const;

    void writeToFile(std::ostream &out) const override;
};

#endif
