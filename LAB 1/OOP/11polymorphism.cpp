// basic use of pointer in oop 
#include<iostream>
using namespace std;

class Awais{
    public:
        virtual void about(){ //virtual function allows polymorphism
            cout<<"He is CS student."<<endl;
        }
};
class Data: public Awais{
    private:
        int age=20;
        float height=5.7;
    public:
        void about() override{
            cout<<"age: "<<age<<" height: "<<height<<endl;
        }
        

};

int main(){
    Awais a; //simple object
    Awais* data; //this pointer points to the base class.
    Data aboutData;
    data = &aboutData; // this give referece of Data object to main class pointer.

    a.about(); //this simple object calls the base class function
    data->about(); // this pointer object to Data class calls the about of base class to which it was referenced
}