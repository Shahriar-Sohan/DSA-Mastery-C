# The problem is asking you to find the sum of all natural numbers below a given number that are multiples of 3 or 5.

# Let’s break it down with an example:
# 	•	Suppose the input number is 10.
# 	•	The natural numbers below 10 are: 1, 2, 3, 4, 5, 6, 7, 8, 9
# 	•	The numbers that are multiples of 3 or 5 in this range are: 3, 5, 6, 9
# 	•	Their sum is: 3 + 5 + 6 + 9 = 23
# 	•	So, the function should return 23.

# Additional Condition:
# 	•	If the input number is negative, return 0. (Since there are no natural numbers below a negative number.)




def solution(number):
    if number < 0:
        return 0
    
    sum = 0
    for digit in range(number):
        if digit % 3 == 0 or digit % 5 == 0:
            sum += digit
    return sum