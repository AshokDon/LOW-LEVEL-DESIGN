/*Let us discuss about the realtion ships between the classes in Low level design
1. Association
2. */
#include<bits/stdc++.h>
using namespace std;

//Association Relation ship
/*
In low-level design, an association represents a relationship between two or more
classes. There are different types of associations, such as one-to-one, 
one-to-many, and many-to-many. Below are examples of each type with simple 
CPP code.


*/
//Example 2: One-to-Many

class Employee{
    public:
    string name;
    Employee(string name):name(name){}
};
class Department{
    public:
    string name;
    vector<Employee*>employees;
    Department(string name): name(name){}

};

int main(){
    Employee emp1("Ashok");
    Employee emp2("Rajesh");
    Department dept("Engineering");
    dept.employees.push_back(&emp1);
    dept.employees.push_back(&emp2);
    
}
