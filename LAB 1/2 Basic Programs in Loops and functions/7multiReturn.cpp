// as a function can only return single value but uising pointer web can illusionate to return multiple values
#include<iostream>
using namespace std;

void returnMultiple(int a,int b,int *sum,int *mul){
    *sum = a+b;
    *mul = a*b;
}

int main(){
   int a,b,sum,mul;
   a=2;
   b=4;
   returnMultiple(a,b,&sum,&mul);
   cout<<"Sum is: "<<sum<<endl  
       <<"Multiple is: "<<mul;
}