### 1 задание
```
name1 = input()
name2 = input()

print(name1 + " and " + name2 + " was here")
```
### 2 задание
```
names1 = input().split()
names2 = input().split()

result = []
for i in range(len(names1)):
    result.append(names1[i])
    if i < len(names2):
        result.append(names2[i])

print(",".join(result))
```
### 3 задание
```
line1 = input()
line2 = input()
line3 = input()

word1, num1 = line1.split()
word2, num2 = line2.split()
word3, num3 = line3.split()

num1 = int(num1)
num2 = int(num2)
num3 = int(num3)

total = len(word1) * num1 + len(word2) * num2 + len(word3) * num3

print(total)
```
### 4 задание
```
text = input()
n = len(text) + 4  # äëèíà ñðåäíåé ñòðîêè
print("*" * n)
print("* " + text + " *")
print("*" * n)
```
### 5 задание
```
h1, m1, s1 = map(int, input().split())
h2, m2, s2 = map(int, input().split())

start = h1 * 3600 + m1 * 60 + s1
finish = h2 * 3600 + m2 * 60 + s2

print(finish - start)
```
### 6 задание
```
n = int(input())

if n == 1:
    print("pusk")
else:
    print(n - 1)
```
### 7 задание
```
a, b, c = map(int, input().split())
if a == 3 and b == 3 and c == 3:
    print("hole")
else:
    print(a + b + c)
```
### 8 задание
```
word1, word2, word3 = input().split()

if len(word1) > len(word2) and len(word1) > len(word3):
    print(word1)
elif len(word2) > len(word3):
    print(word2)
else:
    print(word3)
```
### 9 задание
```
a, b = map(int, input().split())


if a < b:
    print("<")
elif a > b:
    print(">")
else:
    print("=")
```
### 10 задание
```
A, B, C = map(int, input().split())

left = min(A, B)
right = max(A, B)

if C < left:
    print(left - C)
elif C > right:
    print(C - right)
else:
    print(0)
```
### 11 задание
```
n = int(input())

while n != 1:
   
    print(n, end=" ")
    
 
    if n % 2 == 0:
        n = n // 2
    else:
        n = n * 3 + 1

print(n)
```
### 12 задание
```
n = int(input())


power = 1

while power * 2 <= n:
    power = power * 2

print(power)
```
### 13 задание
```
position = 1

while True:
    name = input()
    
    if name == "Petr":
        print(position)
        break
    
    position += 1
```
### 14 задание
```
n, a = map(int, input().split())

count = 0
current = a

while count < n:
    if current % 2 != 0 and current % 3 != 0 and current % 5 != 0 and current % 7 != 0:
        print(current, end=" ")
        count += 1
    
    current += 1
```
### 15 задание
```
parts = input().split()

a = 0
for digit in parts[0]:
    a = a * 10 + (ord(digit) - ord('0'))

b = 0
for digit in parts[1]:
    b = b * 10 + (ord(digit) - ord('0'))

while b != 0:
    temp = a % b
    a = b
    b = temp

print(a)
```
