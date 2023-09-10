// this programs explains the pointers to a function.

#include<iostream>
using namespace std;

void add(int a,int b){
    cout<<"Sum: "<<a+b<<endl;
}
void sub(int a,int b){
    cout<<"Sub: "<<a-b<<endl;
}

int main(){
    char op;
    void (*ptrFunction)(int,int);
    int a=6,b=2;
    ptrFunction=add;
    ptrFunction(a,b);
    
    ptrFunction=sub;
    ptrFunction(a,b);

}
