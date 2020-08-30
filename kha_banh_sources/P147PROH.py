test = 0
while True:
    test += 1 
    a = input()
    b = input()
    if a == b == "END":
        break
    a = sorted(a)
    b = sorted(b)
    print("Case {}: ".format(test) , end = "")
    print("same") if a == b else print("different")
 
