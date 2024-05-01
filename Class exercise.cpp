#include<iostream>
using namespace std ;
#include<string>;
int main(){

int p=1;

while ( p==1){

cout<<"Menu"<<endl;
cout<<"1.Add"<<endl;
cout<<"2.Subtraction"<<endl;
cout<<"3.Multiply"<<endl;
cout<<"4.Divide"<<endl;
cout<<"5.Modulus"<<endl;

int x;
cout<<"Enter your choice(1-5):"<<endl;
cin>>x;


int a;
cout<<"Enter integer number 1: "<<endl;
cin>>a;

int b;
cout<<"Enter integer number 2: "<<endl;
cin>>b;

if(x==1){
int sum = a + b ;
cout<<"Result: "<<sum<<endl;
}

else if(x==2){
                int Sub=a-b;
cout<<"Result: "<<Sub<<endl;
}

else if(x==3){
                int multi=a*b;
cout<<"Result: "<<multi<<endl;

}

else if(x==4){
                int Div=a/b;
cout<<"The second integer is zero, divide by zero."<<endl;



}

else if(x==5){
        int mod=a%b;
cout<<"Result: "<<mod<<endl;

}


cout<<"Continue? Press 1 for Yes | 2 for No"<<endl;
cin>>p;
cout<<endl;
}

return 0;

}


