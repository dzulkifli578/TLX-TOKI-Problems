P, Q = map (int, input ().split ())

hasil = (P * P) + (Q * Q) + 1
print (hasil if hasil % 4 == 0 else -1)