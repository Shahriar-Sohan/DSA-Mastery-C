#include <iostream>
#include <vector>
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
    vector<int> numbers ;
    numbers.push_back(10);
    numbers.push_back(20);
    Person p1 ("Sohan",22);
    p1.display();
    Person *ptrOfP1 = &p1;
    int x = 20;
    int *ptr = &x;
    cout<< ptr<<endl;
    cout<<ptrOfP1<<endl;

    for(int i = 0 ; i < numbers.size();i++){
        cout<< numbers[i]<<" ";
    }
    

    return 0;
}
