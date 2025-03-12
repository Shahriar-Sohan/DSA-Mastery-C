# Your task is to make a function that can take any non-negative integer as an argument 
# and return it with its digits in descending order. 
# Essentially, rearrange the digits to create the highest possible number.

# Examples:
# Input: 42145 Output: 54421

# Input: 145263 Output: 654321

# Input: 123456789 Output: 987654321





def descending_order(num):
    numArr = []
    for digit in str(num):
        numArr.append(digit)
        
    quickSort(numArr, 0, len(numArr)-1)
    newNum = int(''.join(numArr))
    return newNum
    
    
    
def partition(arr, low, high):

    pivot = arr[high]
    i = low - 1

    for j in range(low, high):
        if pivot < arr[j]:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return (i + 1)

def quickSort(arr, low, high):
    if high > low:
        pivotIdx = partition(arr, low, high)

        quickSort(arr, low, pivotIdx-1)
        quickSort(arr, pivotIdx + 1, high)