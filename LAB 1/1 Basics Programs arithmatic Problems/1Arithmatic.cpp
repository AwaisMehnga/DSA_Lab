// this program explains the arithmatic operation on pointers.
#include<iostream>
using namespace std;
int main(){
    int n1=3,n2=2,sum,sub,mul,dev,mod;
    sum=sub=mul=dev=mod=0;

    int *pn1 = &n1,
        *pn2 = &n2, 
        *psum = &sum, 
        *psub = &sub, 
        *pmul = &mul, 
        *pdev = &dev, 
        *pmod = &mod;
    
    *psum = *pn1 + *pn2;
    *psub = *pn1 - *pn2;
    *pmul = *pn1 * (*pn2);
    *pdev = *pn1 / *pn2;
    *pmod = *pn1 % *pn2;
    cout<<"Sum: value at Pointer: "<< *psum<<"\tValue at variable "<<sum<<endl;
    cout<<"Sub: value at Pointer: "<< *psub<<"\tValue at variable "<<sub<<endl;
    cout<<"Mul: value at Pointer: "<< *pmul<<"\tValue at variable "<<mul<<endl;
    cout<<"Div: value at Pointer: "<< *pdev<<"\tValue at variable "<<dev<<endl;
    cout<<"Mod: value at Pointer: "<< *pmod<<"\tValue at variable "<<mod<<endl;

}
