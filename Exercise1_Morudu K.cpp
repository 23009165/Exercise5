#include <iostream>
using namespace std;
int main(){
cout<<"Enter total cost of the merchandise"<<endl;
double TCM;
cin>>TCM;
cout<<"Enter the salary of the employees(including your own salary)"<<endl;
double S;
cin>>S;
cout<<"Enter the yearly rent"<<endl;
double R;
cin>>R;
cout<<"Enter the electricity cost"<<endl;
double COE;
cin>>COE;
double EXP = TCM+S+R+COE;
double Profit_D = TCM*0.1;
double PROFIT_N = Profit_D/0.85;
double marked_up = (PROFIT_N + EXP)/TCM;
cout<<"The merchandise should be marked up to R"<<marked_up<<" for the desired profit."<<endl;
return 0;

}
