print('''What is the largest prime factor of the number 600851475143? ''')
pf = 2
A = 600851475143

while pf <= pow(A, 0.5):
    if A % pf == 0:
        print(pf)
        A = A / pf

    else:
        pf += 1

if A > 1:
    print(int(A))