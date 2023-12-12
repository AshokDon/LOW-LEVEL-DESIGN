/*Let us discuss about the relationship between the classes in Low level design
1. association
2. */
#include<bits/stdc++.h>
using namespace std;

//Association Relationship
/*
In low-level design, an association represents a relationship between two or more
classes. There are different types of associations, such as one-to-one, 
one-to-many, and many-to-many. Below are examples of each type with simple 
CPP code.


*/
//Example 1: One-to-One Association:
class Address{
    public:
    string city;
    string state;
    Address(string city, string state){
        this->city = city;
        this->state = state;
    }

};

class Person{
    public:
    string name;
    Address *address;
    Persion(string name) : name(name), address(nullptr){}
    void Display(){
        cout<<name<<endl;
        cout<<address->city<<" "<<address->state<<endl;
    }
};

int main(){
    Person person("Ashok");
    Address address("Kakinada", "Andhra");
    person.address = &address;
    person.Display();
}
