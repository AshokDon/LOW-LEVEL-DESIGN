/*Let us discuss about the relationship between the classes in Low level design
1. association
2. */
#include<bits/stdc++.h>
using namespace std;

//Aggregation Relationship
/*
Aggregation is a type of association where one class represents a larger 
concept, and is composed of other classes. The key difference between 
aggregation and composition is that aggregation represents a "has-a" relationship 
that is more loosely coupled, while composition represents a stronger "whole-part" 
relationship. Here are examples of aggregation in C++:
*/
//Example: Aggregation

class Engine{
    public:
    string type;
    Engine(string type) : type(type){}

};
class Car{
    public:
    string model;
    Engine *engine;// Aggregation Relationship
    Car(string model, Engine* engine) : model(model),engine(engine){}

};

int main(){
   Engine eng("V8");
   Car c1("Sport car",&eng);
   
    
}
