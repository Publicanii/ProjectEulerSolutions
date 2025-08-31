print('''The sum of the squares of the first ten natural numbers is, 385,
The square of the sum of the first ten natural numbers is, 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.''')

while True:
    sum_of_sq = 0
    sq_of_sum = 0
    a = int(input("Enter the number : "))
    for i in range(a + 1):
        sum_of_sq = i**2 + sum_of_sq
        sq_of_sum = i + sq_of_sum
        i += 1
    print(f"The sum of squares : {sum_of_sq}")
    print(f"The square of sum : {sq_of_sum ** 2}")
    print(f"The difference : {sq_of_sum ** 2 - sum_of_sq}")