// Julie Gonzales 
// 04-05-2026
// art student function definiton 
#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include "Student.h"

class Art_Student : public Student {
private:
    std::string art_emphasis;

public:
    Art_Student();
    ~Art_Student();

    void setEmphasis(const std::string &e);
    std::string getEmphasis() const;

    void writeToFile(std::ostream &out) const override;
};

#endif
