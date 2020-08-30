a = [int(x) for x in input().split()]
a = sorted(a)
res = 0
dis10 = a[1] - a[0]
dis21 = a[2] - a[1]
 
if dis21 == dis10:
    res = a[2] + dis21
if dis21 > dis10:
    res = a[1] + dis10
if dis21 < dis10:
    res = a[0] + dis21
 
print(res)
 
