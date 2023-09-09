//calculating power of a number using pointers.
#include<iostream>
using namespace std;
int main(){
   int num,pow,ans=1;
   int *pNum= &num,
       *pPow = &pow,
       *pAns = &ans;

    cout<<"Enter the number and the power: ";
    cin>>*pNum>>*pPow;
    
    for(int i=0;i<*pPow;i++){
        *pAns *= *pNum;
    }
    cout<<"Answer : "<<*pAns;
}