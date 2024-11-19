def bs(A, key):
    left = 0
    right = len(A) - 1
    while left <= right:
        mid = (left + right) // 2
        if A[mid] == key:
            return mid 
        elif A[mid] < key:
            left = mid + 1  
        else:
            right = mid - 1
    return -1   
A = [10, 20, 25, 30, 35, 40, 50, 59, 63, 70]
key = 59
result = bs(A, key)
print("Element found at index:", result) 