N = int (input ())

jam = int (N / 3600)
N %= 3600
menit = int (N / 60)
N %= 60

print (jam)
print (menit)
print (N, end = "")