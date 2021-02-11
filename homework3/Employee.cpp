//
//Name: Chloe Tu
//Collaborators: N/A
//I pledge that I have neither given nor received unauthorized assistance on this assignment.
//

#include "Employee.h"

Employee::Employee(){}

Employee::Employee(std::string _id): id(_id){}

std::string Employee::get_id() const {
    return id;
}

Employee::~Employee(){}
