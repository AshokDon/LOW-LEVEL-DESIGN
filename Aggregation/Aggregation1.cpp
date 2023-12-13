
//q: Aggregation relationship in low level design
/*
Aggregation is a type of association where one class represents a whole 
and another class represents a part. The part class can exist 
independently of the whole class. Here are examples of aggregation 
in C++:
it follows has a relation ship
*/
//Example 1:Computer and Components:

#include<bits/stdc++.h>
using namespace std;

class Component{
    public:
    string name;
    Component(string name) : name(name){}

};
class Computer{
    public:
    string brand;
    vector<Component*>components;
    Computer(string brand): brand(brand){}
    void addComponent(Component *x){
        components.push_back(x);

    }
};
//Example 2 : Library and Books:
class Book{
    public:
    string title;
    Book(string title) : title(title){}

};
class Library{
    public:
    string name;
    vector<Book*>books;
    Library(string name):name(name){}
    void addBook(Book *B){
        books.push_back(B);
    }
};

int main(){
    //Example 1
    Component C1("CPU");
    Component C2("RAM");
    Component C3("Storage");
    //Aggregation relationship
    Computer desktop("HP");
    desktop.addComponent(&C1);
    desktop.addComponent(&C2);
    desktop.addComponent(&C3);

    //Example 2:
    Book B1("CP");
    Book B2("Design Patterns");
    Book B3("CPP");
    Library L1("City Centeral Library");
    L1.addBook(&B1);


    return 0;

}

