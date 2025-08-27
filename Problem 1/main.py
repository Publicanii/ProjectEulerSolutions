print('''If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9 . 
 The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.''')


a = 0
b = 0
c = 0
d = 0

while a < 1000:
    b = a + b
    a += 3

a = 0

while a < 1000:
    c = a + c
    a += 5

a = 0

while a < 1000:
    d = a + d
    a += 15

print("The answer is : ", b + c - d)