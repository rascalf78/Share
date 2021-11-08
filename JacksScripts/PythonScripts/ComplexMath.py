import cmath

z = 3+2j
y = 1j


myPol = cmath.polar(z)

print(myPol)
print(cmath.rect(myPol[0], myPol[1]))


print(y**2)



