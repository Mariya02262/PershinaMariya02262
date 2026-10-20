count = 1

for letter in "abcdefghijklmnopqrstuvwxyz":
    for i in range(100):
        name = letter + str(i)
        globals()[name] = count
        count = count + 1

print("Vsego peremennyh:", count - 1)
print("a0 =", a0)
print("a99 =", a99)
print("z99 =", z99)