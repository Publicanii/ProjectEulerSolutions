max = 0

for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        a = i * j
        a_s = str(a)
        if a_s == a_s[::-1] and a > max:
            max = a

print(max)

