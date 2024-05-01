#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x1;
cout<<"Enter the value of x1: "<<endl;
cin>>x1;
int x2;
cout<<"Enter the value of x2: "<<endl;
cin>>x2;
int y1;
cout<<"Enter the value of y1: "<<endl;
cin>>y1;
int y2;
cout<<"Enter the value of y2: "<<endl;
cin>>y2;
int D;
D = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
cout<<"The distance between point 1 and point 2 is "<<D<<endl;
return 0;
}
