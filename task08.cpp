#include <iostream>
using namespace std;
main(){
float bits;
double result1;
double result2;
double result3; 

cout<<"Enter bits:";
cin >>bits;
result1 = bits/8;
result2 = result1/1024;
result3 = result2/1024;

cout<< bits <<" bits is equal to  "<<result1<<" bytes"<<endl;
cout<< bits <<" bits is equal to  "<<result2<<" kilo bytes"<<endl;
cout<< bits <<" bits is equal to  "<<result3<<" mega bytes";


}
