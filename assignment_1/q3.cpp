#include <iostream>

using namespace std; 

int main() {

const int acc = 32; 
int t; 
int distance; 

cout << "Enter a time in seconds: "<< endl; 

cin>> t; 

distance = (acc/2) * (t*t);

cout<< ""<< t << "will fall in" << distance << "feet"; 

return 0; 
}

