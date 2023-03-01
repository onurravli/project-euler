def fibo(n):
    if n == 0 or n == 1:
        return 1
    else:
        return fibo(n-1) + fibo(n-2)

sums, i = 0, 0
f = fibo(i)

while f < 4000000:
    if f % 2 == 0:
        sums += f
    i+=1
    f = fibo(i)

print(sums)