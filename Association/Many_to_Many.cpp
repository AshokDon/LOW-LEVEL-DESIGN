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
//Example 3: Many_to_Many

class Course{
    public:
    string title;
    vector<Student*>students;
    Course(string title):title(title){}
};
class Student{
    public:
    string name;
    vector<Course*>courses;
    Student(string name) : name(name){}
};

int main(){
   Student std1("Ashok");
   Student std2("kiran");
   Student std3("Ram");
   Course c1("CP");
   Course c2("ML");
   std1.courses.push_back(&c1);
   std2.courses.push_back(&c2);

    
}
