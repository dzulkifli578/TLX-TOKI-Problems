def match (pattern, word):
    # menemukan posisi karakter '*' dalam "pattern"
    posisi = pattern.find ('*')
    # mengekstrak awalan (prefix) dan akhiran (suffix) dari "pattern" berdasarkan posisi '*'
    prefix = pattern [:posisi]
    suffix = pattern [posisi + 1:]

    # memeriksa apakah panjang "kata" kurang dari panjang gabungan awalan dan akhiran
    # jika iya, kembalikan false
    if len (word) < len (prefix) + len (suffix):
        return False
    
    # membandingkan awalan "kata" dengan awalan "pattern" yang diekstrak
    # jika tidak sama, kembalikan false
    if not word.startswith (prefix):
        return False
    
    # membandingkan akhiran "kata" dengan akhiran "pattern" yang diekstrak
    # jika tidak sama, kembalikan false
    if not word.endswith (suffix):
        return False
    
    # jika semua pemeriksaan berhasil, kembalikan true
    return True

# membaca pola dari input
pattern = input ()
# menentukan jumlah kata
N = int (input ())
# membaca kata-kata ke dalam array "words"
words = [input () for _ in range (N)]

# iterasi pencocokan kata-kata dan mencetak sesuai dengan pola
for kata in words:
    if match (pattern, kata):
        print (kata)