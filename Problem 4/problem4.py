print('''A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99

Find the largest palindrome made from the product of two 3-digit numbers.''')

max = 0

for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        a = i * j
        a_s = str(a)
        if a_s == a_s[::-1] and a > max:
            max = a

print(max)

