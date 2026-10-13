### 1 задание

```
n = int(input())

ushat = n // 15 * 15
ostalis = n % 15

print(ushat, ostalis)
```


### 2 задание

```
s = input()

mid = len(s) // 2

left = int(s[:mid])
right = int(s[mid:])

print(left + right)
```


### 3 задание

```
n = int(input())

litr = n / 3

print(f"{litr:.3f}")
```


### 4 задание

```
price = float(input())
rub = int(price)
kop = round((price - rub) * 100)
print(rub, "rub", kop, "kop")
```


### 5 задание

```
n, m, c, k = map(int, input().split())

vsego_listov = n * m

nuzhno_dokupit = vsego_listov - k

if nuzhno_dokupit <= 0:
    print(0)
else:
    pachek = (nuzhno_dokupit + 199) // 200
    print(pachek * c)
```


### 6 задание

```
n, m, k = map(int, input().split())

vsego_konfet = n * m

korobok = (vsego_konfet + k - 1) // k

print(korobok)
```


### 7 задание

```
import math

n, t = input().split()
n = int(n)
t = float(t)

udarov = n * 60 / t

print(math.ceil(udarov))
```

### 8 задание

```
import math

x, y = input().split()
x = float(x)
y = float(y)

left = math.ceil(x)
right = math.floor(y)

print(max(0, right - left + 1))
```

### 9 задание

```
s = input()

total = 0

for ch in s:
    if ch.isdigit():
        total = total + int(ch)

print(total)
```

### 10 задание

```
s = input()

result = ""

for ch in reversed(s):
    if ch == '(':
        result = result + ')'
    else:
        result = result + '('

print(result)
```


### 11 задание

```
words = input().split()

result = []

for word in words:
    result.append(word[::-1])

print(" ".join(result))
```

### 12 задание

```
nums = input().split()

result = []

for x in nums:
    x = int(x)
    d = 2
    while x % d != 0:
        d = d + 1
    result.append(str(d))

print(" ".join(result))
```


### 13 задание

```
n = int(input())

total = 0

for d in range(1, n):
    if n % d == 0:
        total = total + d

print(total)
```


### 14 задача

```
n = int(input())

masha = 0
dasha = 0

for i in range(n):
    x = int(input())
    if x % 3 == 0:
        masha = masha + 2
    else:
        dasha = dasha + 1

print(masha, ":", dasha, sep="")
```


### 15 задача

```
n = int(input())

total = 0

for i in range(n):
    a, b = map(int, input().split())
    if a > b:
        total = total + (a - b)

print(total)
```
