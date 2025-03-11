numbers = [82, 2, 77, 30, 88, 54, 69, 72, 80, 23, 34, 40];


def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1

    for j in range(low,high):
        if(arr[j] < pivot):
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
        
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return i+1



def quickSort(arr, low, high):
    if(low < high):
        pivot = partition(arr, low, high)
        quickSort(arr, low, pivot-1)
        quickSort(arr, pivot + 1, high)
    
    
quickSort(numbers, 0, len(numbers)-1)
print(numbers)








