// Julie Gonzales 
// 04-05-2026
// main function implentaion for program

#include <iostream>
#include <vector>
#include <fstream>

#include "Art_Student.h"
#include "Physics_Student.h"

int main() {
    std::vector<Art_Student*> art_students;
    std::vector<Physics_Student*> physics_students;

    // Create 5 Art Students
    for (int i = 0; i < 5; i++) {
        Art_Student* a = new Art_Student();
        a->setName("ArtFirst" + std::to_string(i), "ArtLast" + std::to_string(i));
        a->setGPA(3.5 + 0.1 * i);
        a->setEmphasis("Art Studio");
        art_students.push_back(a);
    }

    // Create 5 Physics Students
    for (int i = 0; i < 5; i++) {
        Physics_Student* p = new Physics_Student();
        p->setName("PhysFirst" + std::to_string(i), "PhysLast" + std::to_string(i));
        p->setGPA(3.2 + 0.1 * i);
        p->setConcentration("Biophysics");
        physics_students.push_back(p);
    }

    std::ofstream outfile("student_info.dat");

    for (auto s : art_students)
        s->writeToFile(outfile);

    for (auto s : physics_students)
        s->writeToFile(outfile);

    outfile.close();

    // Cleanup
    for (auto s : art_students) delete s;
    for (auto s : physics_students) delete s;

    return 0;
}
