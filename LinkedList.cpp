#include <iostream>
using namespace std;


struct Person{
    string name;
    int age;

    //constructor
    Person(string n, int a){
        name = n;
        age = a;
    } 

    //Member Function
    void display(){
        cout<< "Name: " <<name << endl;
        cout<< "Age: " << age << endl;
    }
};








int main()
{
    Person p1 ("Sohan",22);
    p1.display();
    Person *ptrOfP1 = &p1;
    int x = 20;
    int *ptr = &x;
    cout<< ptr<<endl;
    cout<<ptrOfP1<<endl;
    delete ptr;
    delete ptrOfP1;
    return 0;
}
