#include<iostream>
#include<random>
#include<time.h>
using namespace std;
int main(){
    cout<<"--------NUMBER GUESSING GAME------"<<endl;
    srand(time(0));
    int number = rand()%100+1;
    int s;
    do{
        cout<<"guess the number::"<<endl;
        cin>>s;
        if(number>s){
            cout<<"TOO LOW !!"<<endl;
        }
        else{
            cout<<"TOO HIGH !!"<<endl;
        }
    }while(s!=number);
    cout<<"congratulations you got the right number the number is :"<<number<<endl;
    
    return 0;
}