import binascii

m="Periodically (or when hashing time has sped up too much) increment "r", and rehash all passwords in the database to match."

print m

hexstr = binascii.hexlify(m)

print hexstr

integer_m = int(hexstr, 16)

print integer_m

back2hex = hex(integer_m)

print back2hex

withoutPrefix = back2hex[2:]

print withoutPrefix

plaintext = binascii.unhexlify(withoutPrefix)

print plaintext
