//
//Name: Chloe Tu
//Collaborators: N/A
//I pledge that I have neither given nor received unauthorized assistance on this assignment.
//

#include "Student.h"

Student::Student(){}

Student::Student(std::string _id): id(_id){}

std::string Student::get_id() const{
    return id;
}

Student::~Student(){}
