// this program explains the increment and decrement operators on pointers.

#include<iostream>
using namespace std;
int main(){
    int a=2;
    int *pA = &a;
    cout<<"Adress: \t"<<pA<<"\tvalue:"<<*pA<<endl
        <<"Increment in address \t"<<++pA<<endl    
        <<"Decrement in address \t"<<--pA<<endl
        <<"Increment in value \t"<<++(*pA)<<endl
        <<"Decrement in value \t"<<--(*pA)<<endl;
}