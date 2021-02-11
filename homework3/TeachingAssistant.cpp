//
//Name: Chloe Tu
//Collaborators: N/A
//I pledge that I have neither given nor received unauthorized assistance on this assignment.
//

#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(std::string _s_id, std::string _e_id): Student(_s_id), Employee(_e_id){}

std::string TeachingAssistant::get_id() const
{
    return Employee::get_id();
}

std::string TeachingAssistant::student_id() const
{
    return Student::get_id();
}
TeachingAssistant::~TeachingAssistant(){}
