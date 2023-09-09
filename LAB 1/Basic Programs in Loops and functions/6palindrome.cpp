// this program will return value of palindrome without return statement
#include<iostream>
using namespace std;

void palindrome(int num, int *Pcheck){
    int rem;
    int originalNum=num;
    int newNum=0;
    while(num!=0){
        rem= (num)%10;
        newNum = (newNum *10)+rem;
        num/=10;
    }
    // cout<<"new Number"<<newNum;
    if(originalNum==newNum){
        *Pcheck=1;
    }
}


int main(){
   int num;
   int check=0;
   cout<<"Enter the number: ";
   cin>>num;
   palindrome(num,&check);
   if(check==1){
    cout<<"The number "<<num<<" is a Palindrome.";
   }

}