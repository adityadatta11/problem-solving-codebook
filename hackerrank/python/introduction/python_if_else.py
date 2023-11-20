n = int(input())
w = "Weird"
nw = "Not Weird"

if n % 2 == 0:
    if n in range(2, 5 + 1):
        print(nw)
    elif n in range(6, 20 + 1):
        print(w)
    else:
        print(nw)
else:
    print(w)
