let numbers = [82, 2, 77, 30, 88, 54, 69, 72, 80, 23, 34, 40];

function partition(arr, low, high){
    const pivot = arr[high];
    let i = low - 1;

    for(let j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            [ arr[i], arr[j] ] = [ arr[j], arr[i] ];
        }
    }
    [ arr[i + 1], arr[high] ] = [ arr[high], arr[i + 1] ];
    return (i + 1);

}

function quickSort(arr, low, high){
    if (low < high){
        pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

quickSort(numbers, 0, numbers.length - 1);
console.log(numbers);