// Julie Gonzales 
// 04-03-2026
// student.h is a headerfile to define the string 

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
protected:
    std::string first_name;
    std::string last_name;
    double gpa;
    int grad_year;
    std::string grad_semester;
    int enrolled_year;
    std::string enrolled_semester;
    std::string level; // undergrad or grad

public:
    Student();
    virtual ~Student();

    // Setters
    void setName(const std::string &first, const std::string &last);
    void setGPA(double g);
    void setGradYear(int y);
    void setGradSemester(const std::string &s);
    void setEnrolledYear(int y);
    void setEnrolledSemester(const std::string &s);
    void setLevel(const std::string &lvl);

    // Getters
    std::string getName() const;
    double getGPA() const;
    int getGradYear() const;
    std::string getGradSemester() const;
    int getEnrolledYear() const;
    std::string getEnrolledSemester() const;
    std::string getLevel() const;

    virtual void writeToFile(std::ostream &out) const;
};

#endif
