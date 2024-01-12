def match (pattern, word):
    posisi = pattern.find ('*')
    prefix = pattern [:posisi]
    suffix = pattern [posisi + 1:]

    if len (word) < len (prefix) + len (suffix):
        return False
    if not word.startswith (prefix):
        return False
    if not word.endswith (suffix):
        return False
    return True

pattern = input ()
N = int (input ())
words = [input () for _ in range (N)]

for kata in words:
    if match (pattern, kata):
        print (kata)