//
//Name: Chloe Tu
//Collaborators: N/A
//I pledge that I have neither given nor received unauthorized assistance on this assignment.
//

#ifndef TeachingAssistant_h
#define TeachingAssistant_h

#include <stdio.h>
#include <string>
#include "Student.h"
#include "Employee.h"

class TeachingAssistant: public Student, public Employee {
private:
    std::string s_id;
    std::string e_id;
public:
    TeachingAssistant(std::string, std::string);
    std::string get_id() const;
    std::string student_id() const;
    ~TeachingAssistant();
};

#endif /* TeachingAssistant_h */
