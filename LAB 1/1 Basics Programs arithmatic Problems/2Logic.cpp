// this program will explain the logical operations using pointers.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *pa = &a, *pb= &b;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    if(*pa<*pb){
        cout<<"num1 is less than num2."<<endl;
    }
    else if(*pa>*pb){
        cout<<"num1 is greater than num2."<<endl;
    }
    else {
        cout<<"num1 is equal num2."<<endl;
    }
   
}