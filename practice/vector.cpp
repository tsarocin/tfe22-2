#include <fmt/chrono.h>
#include <fmt/format.h>

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>name;

    name.assign(9,1);     //number of value 9, 1 is the value
    cout<<"The contents are: ";
    for(int a=0; a<name.size(); a++ ){
        cout<<name[a]<< " ";
        cout<<endl;
    }

    name.push_back(2);          // fügt an die letzte Stelle eine 2 hinzu
    int number=name.size();
    cout<<"last element : "<<name[number-1]<<endl; 

    name.pop_back();
    cout<<"now the contents are: ";
    for(int a=0; a<name.size(); a++){
        cout<<name[a]<<" ";
        cout<<endl;
    }

    name.insert(name.begin(), 7);       //hinzufügen an der Stelle 1. Stelle die Zahl 7
    cout<<"First element is :  "<<name[0]<<endl;
name.clear();
cout<<"Now the size is : "<<name.size();
}