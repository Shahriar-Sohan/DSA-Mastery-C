#include <iostream>
using namespace std;



class Result{
public:

    int sum(int a, int b){
        return a+b;
    }
};





int main(){
    int a = 10;
    int b = 20;

    Result result;


   int sumResult = result.sum(a, b);

    // Display the sum and the updated values of a and b
    cout << "Sum: " << sumResult << endl;
    cout << "a: " << a << ", b: " << b << endl;


    return 0;
}

