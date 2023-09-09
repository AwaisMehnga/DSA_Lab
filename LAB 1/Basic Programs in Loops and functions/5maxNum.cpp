// Find the maximum number in an array
#include<iostream>
using namespace std;

// function to calculate maximum value
int max(int* arr, int size){
    int max;
    int *pMax = &max;
    *pMax= *arr;
    // using for loop for 
    for(int i=0;i<size;i++){
        int temp=*(arr+i);
        if(temp>*pMax){
            *pMax = temp;
        }
    }
    return *pMax;
}
int main(){
   int arr[] = {5, 2, 9, 1, 15, 6};
   int size = sizeof(arr)/sizeof(arr[0]);
   int maxNum = max(arr,size);
   cout<<"Maximum number is: "<<maxNum;
   
}