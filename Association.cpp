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

class Persion{
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
    Persion persion("Ashok");
    Address address("kakinada","Andhra");
    persion.address = &address;
    persion.Display();
}