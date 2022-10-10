import math


def esm(f, u, v, n):
    d = (v-u)/n

    x1 = u
    x2 = u+d
    x3 = x2+d

    while x3 <= v:
        f1 = f(x1)
        f2 = f(x2)
        f3 = f(x3)

        if f1 >= f2 <= f3:
            return x1, x3

        if x3 > v:
            return None

        else:
            x1 = x2
            x2 = x3
            x3 = x2+d

def func(x): return x**2 + 54/x

a = 0.1
b = 2.1
n = 1000

x = esm(func, a, b, n)

print("solution:{}".format(x))
