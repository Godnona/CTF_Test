#nothing
secret = "GMBH|D0ef_Cb4t1d~"

d = ""
for c in secret:
    d += chr(ord(c) - 1)
print(d)