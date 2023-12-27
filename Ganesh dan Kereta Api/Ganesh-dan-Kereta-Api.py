N = int (input ())

A = list (map (int, input ().split ()))

for i in range (N - 1, -1, -1):
    print (A [i], end = "")
    if i > 0: print (",", end ="")