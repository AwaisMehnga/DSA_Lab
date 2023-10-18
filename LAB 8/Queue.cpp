#include<iostream>
using namespace std;
class Queue{
    private:
        static const int max=5;
        int queue[max];
        int Front,Rear;
    public:
        Queue(){
            Front=Rear=-1;
        }
        // check is empty
        bool isEmpty(int f){
            if(f==-1){
                return true;
            }
            else{
                return false;
            }
        }
        // check is full
        bool isFull(int r){
            if(r==max-1){
                return true;
            }
            else{
                return false;
            }
        }
        // Enqueue
        void Enqueue(){
            
            if(isFull(Rear)){
                cout<<"Queue is currently full!!!\n";
            }
            else{
                cout<<"Enter Value: ";
                int val;
                cin>>val;
                if(Front==-1){
                    Front=Rear=0;
                    queue[Rear]=val;
                }
                else{
                    Rear++;
                    queue[Rear]=val;
                }
            }
        }
        // Dequeue
        void Dequeue(){
            if(isEmpty(Front)){
                cout<<"Currently queue is empty!!!\n";
            }
            else{
                
                if(Front==max||Front>Rear){
                    cout<<"Queue is Empty!!!\n";
                    Queue();
                    
                }
                else{
                    Front++;
                }
            }
        }
        void Display(){
            if(Front==-1){
                cout<<"Queue is empty!!!\n";
                return;
            }
            else{
                cout<<"Your queue is: ";
                for(int i=Front;i<=Rear;i++){
                    cout<<queue[i]<<" ";
                }
            }
            cout<<endl;
        }
};

int main(){
    Queue q;
    int n;
    again:
    cout<<"Enter Operation:\n 1: Enqueue\n 2: Dequeue\n 3: Display\n 4: Exit\n";
    cin>>n;
    switch (n)
    {
    case 1:
        q.Enqueue();
        goto again;
        break;
    case 2:
        q.Dequeue();
        goto again;
        break;
    case 3:
        q.Display();
        goto again;
        break;
    case 4:
        break;
    
    default:
        cout<<"Enter correct choice!!!\n";
        goto again;
        break;
    }
}