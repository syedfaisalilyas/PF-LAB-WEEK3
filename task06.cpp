#include <iostream>
using namespace std;
main(){
string name;
int matric;
int inter;
int ecat;
float ECAT1,Matric1,Inter1,total1;
float ECAT2,Matric2,Inter2,total2,aggregate;

cout<<"Enter Your Name:";
cin>> name;
cout<<"Enter Your Matric Marks:";
cin>> matric;
cout<<"Enter Your Inter Marks:";
cin>> inter;
cout<<"Enter Your ECAT Marks:";
cin>> ecat;

ECAT1 = (50*ecat/100);
Matric1 = (10*matric/100);
Inter1 = (40*inter/100);
total1 = ECAT1+Matric1+Inter1; 

ECAT2 = (50*400/100);
Matric2 = (10*1100/100);
Inter2 = (40*550/100);
total2 = ECAT2+Matric2+Inter2;

aggregate = total1/total2*100;
cout << "The aggregate of " << name << "is" << aggregate;




}