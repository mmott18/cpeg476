from Crypto.Util.number import *

p = getStrongPrime(512)
a = getRandomRange(2, p-2) 
while(GCD(a, p-1) != 1):
    a = getRandomRange(2, p-2)
    print GCD(a,p-1)
print "a is: ", a, "\n"
print "p is: ", p, "\n"
#loop until you get a GCD of 1 with p-1

base = 2
A = pow(base, a, p)
print p, base, A
