giaithua = lambda x: x*giaithua(x-1) if x > 1 else 1
while True:
    x = int(input())
    if x == 0:
        break
    print(giaithua(x)) 
