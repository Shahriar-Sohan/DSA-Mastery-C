array = [82, 2, 77, 30, 88, 54, 69, 72, 80, 23, 34, 40]

def mergeSort(arr):

    if len(arr) <= 1:
        return arr
    
    mid = len(arr) // 2
    leftHalfArr = arr[:mid]
    rightHalfArr = arr[mid:]

    leftHalf = mergeSort(leftHalfArr)
    rightHalf = mergeSort(rightHalfArr)

    return merge(leftHalf, rightHalf)


def merge(left, right):
    sortedArr = []
    i = j = 0

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            sortedArr.append(left[i])
            i += 1
        else:
            sortedArr.append(right[j])
            j += 1

    sortedArr.extend(left[i:])
    sortedArr.extend(right[j:])

    return sortedArr

print("Original array:", array)
sortedArr = mergeSort(array)
print("Sorted array:", sortedArr)