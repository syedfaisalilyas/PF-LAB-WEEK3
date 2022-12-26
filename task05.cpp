#include <iostream>
using namespace std;
main(){
float charge;
int time;
float current;

cout<<"Enter the Charge in Columbn: ";
cin >> charge;

cout<<"Enter the time in seconds: ";
cin >> time;

current = charge/time;

cout<<"The Current in Ampere is: " << current << "A";

}