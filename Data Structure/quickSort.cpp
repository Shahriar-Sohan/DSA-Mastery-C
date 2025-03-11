#include <iostream>
#include <vector>

using namespace std;



int partition(vector<int>&array, int low, int high){
    int pivot = array[high];
    int i = low - 1;

    for(int j = low; j < high;j++){
        if(array[j] <= pivot){
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return (i + 1);
}



void quickSort(vector<int>&array, int low, int high){
    if(low < high){
        int pivot = partition(array, low, high);
        quickSort(array, low, pivot - 1);
        quickSort(array, pivot + 1, high);
    }
    
}


int main(){
    vector<int> array = {82, 2, 77, 30, 88, 54, 69, 72, 80, 23, 34, 40};
    
    quickSort(array,0,(array.size()-1));

    for(int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}