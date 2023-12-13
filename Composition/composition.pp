#include<bits/stdc++.h>
using namespace std;
//Composition Relationship in Low-level Design
/*
Composition is a stronger form of association where the parts are created
and managed by the whole. If the whole is destroyed, all its parts are 
typically destroyed as well. Here are examples of composition in C++:
*/

//Example 1:Car and Engine:
class Engine{
    public:
    string name;
    Engine(string name): name(name){}
    void start(){
        cout<<"Engine started"<<endl;
    }

};
class Car{
    public:
    
    Engine Eng;// Composition Relationship
    Car(string name): Eng(name){}
    void start(){
        Eng.start();
        cout<<"Car started"<<endl;
    }


};

//Example 2: House and Room
class Room{
    public:
    string name;
    Room(string name) : name(name){}

};
class House{
    public:
    vector<Room>rooms;
    void addRoom(string roomName){
        rooms.push_back(roomName);
    }
    void Display_Rooms(){
        for(auto &it : rooms){
            cout<<"--"<<it.name<<" ";
        }
    }
};

int main(){
    //Example 1
    // Car MyCar("V8");
    // MyCar.start();

    //Example 2
    House MyHouse;
    MyHouse.addRoom("Living Room");
    MyHouse.addRoom("Bed Room");
    MyHouse.addRoom("kitchen");
    MyHouse.Display_Rooms();




}
