#include<iostream>
using namespace std;
class Calculator{
    public:
     int x ,y;
    int ch;
    void ask(){
         cout<<"enter the values:"<<endl;
    cout<<"enter the first value"<<endl;
    cin>>x;
    cout<<"enter the second value"<<endl;
    cin>>y;
    cout<<"enter the operation you want to perform"<<endl;
    cout<<"1  for addition"<<endl;
    cout<<"2  for subtraction"<<endl;
    cout<<"3  for multiplication"<<endl;
    cout<<"4  for division"<<endl;
    cout<<"enter the operation "<<endl;
    cin>>ch;
    }
    void display(){
    switch(ch){
        case 1 :
        cout<<"the sum of the given numbers is:"<<x+y<<endl;
        break;
        case 2 : 
        cout<<"the differnece of the given numbers is:"<<x-y<<endl;
        break;
        case 3 :
        cout<<"the multiplication of the given number is :"<<x*y<<endl;
        break;
        case 4 :
        cout<<"the division of the given number is :"<<x/y<<endl;
        break;
        default :
        cout<<"error 404"<<endl;
        break;
    }
    }
   
};
int main(){
      Calculator c1;
    char s;
    do{
    c1.ask();
    c1.display();
    cout<<"do you want to continue calculation: [y/n]? ";
    cin>>s;
    }while(s!='n');
    return 0;
}