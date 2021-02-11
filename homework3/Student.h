//
//Name: Chloe Tu
//Collaborators: N/A
//I pledge that I have neither given nor received unauthorized assistance on this assignment.
//

#ifndef Student_h
#define Student_h

#include <stdio.h>
#include <string>

class Student{
private:
    std::string id;
public:
    Student();
    Student(std::string);
    std::string get_id() const;
    virtual ~Student();
};

#endif /* Student_h */
