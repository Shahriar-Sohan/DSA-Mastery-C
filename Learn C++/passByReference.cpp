#include <iostream>
using namespace std;



class Result{
public:

    int sum(int &x, int &y){
        return x+y;
    }
};





int main(){
    int a = 10;
    int b = 20;

    Result result;
    int *ptrA = &a;
    int *ptrB = &b;

   int sumResult = result.sum(a, b);
   
   a = 33;
   b = 44;
    // Display the sum and the updated values of a and b
    cout << "Sum: " << &sumResult << endl;
    cout << "a: " << &a << ", b: " << &b << endl;


    return 0;
}

