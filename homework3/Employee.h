//
//Name: Chloe Tu
//Collaborators: N/A
//I pledge that I have neither given nor received unauthorized assistance on this assignment.
//

#ifndef Employee_h
#define Employee_h

#include <stdio.h>
#include <string>

class Employee{
private:
    std::string id;
public:
    Employee();
    Employee(std::string);
    std::string get_id() const;
    virtual ~Employee();
};

#endif /* Employee_h */
