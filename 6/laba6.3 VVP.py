print('Введите три числа:')
a, b, c = float(input()), float(input()), float(input())
print('a =', a, 'b =', b, 'c =', c)
x = a
a = b
y = b
b = c
c = x
print('Поменяем их местами: a =', a, 'b =', b, 'c =', c)