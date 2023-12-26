N = int (input ())
prima = True

if 1 < N < 7:
    for i in range (2, int (N ** 0.5) + 1):
        if N % i == 0:
            prima = False
            break
    print ("YES" if prima else "NO")
else:
    print ("NO")