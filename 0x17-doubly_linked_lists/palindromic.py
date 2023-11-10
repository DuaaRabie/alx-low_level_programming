#!/usr/bin/python3
pal = []
for a in range(100, 1000):
    for b in range(100, 1000):
        tostr = str(a * b)
        if tostr == tostr[::-1]:
            pal.append(a * b)
max_value = max(pal)
print(max_value)
