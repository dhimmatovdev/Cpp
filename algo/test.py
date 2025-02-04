from math import *

x, y = map(float, input().split())

f2 = ((1 / (x + (2 / (x + (5 / (x**3)))))) + exp(x**2 + 3*x) / atan(x + y) + (abs(5 + x) ** 2)) - (cos(y**2 + (x**2 / 2)) ** 2)

print(f"{f2:.2f}")  # Natijani 2 ta o‘nlik kasr aniq chiqarish uchun
