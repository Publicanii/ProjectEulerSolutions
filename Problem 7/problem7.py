print('''By listing the first six prime numbers: 2, 3, 5, 7, 11, 13, and we can see that the 6th prime is 13.

What is the 10001st prime number?''')

def is_prime(n):
    if n < 2:
        return False
    for j in range(2, int(n**0.5) + 1):
        if n % j == 0:
            return False
    return True

j = 0
i = 1

while j < 10001:
    i += 1
    if is_prime(i):
        j += 1

print("The answer is :", i)
