//
//Name: Chloe Tu
//Collaborators: N/A
//I pledge that I have neither given nor received unauthorized assistance on this assignment.
//

#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Employee.h"
#include "TeachingAssistant.h"

using std::cout;

int main(){
    Student* fred = new Student("fred");
    Employee* jane = new Employee("jane");
    cout << "id for fred " << fred->get_id() << "\n";
    cout << "id for jane " << jane->get_id() << "\n";
    TeachingAssistant* beth = new TeachingAssistant("beth_Sid", "beth_Eid");
    cout << "id for Employee beth " << beth->get_id() << "\n";
    cout << "id for Student beth " << beth->student_id() << "\n";
    std::vector<Student*> students;
    students.push_back(fred);
    students.push_back(beth);
    for (int i = 0; i < students.size(); i++) cout << "student " << students[i]->get_id() << "\n";
    std::vector<Employee*> employees;
    employees.push_back(jane);
    employees.push_back(beth);
    for (int i = 0; i < employees.size(); i++)
        cout << "employee " << employees[i]->get_id() << "\n";
    return 0;}
