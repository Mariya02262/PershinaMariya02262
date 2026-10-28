### 1 задание

```
n = int(input())

k = (n + 24) // 25

min_class = n // k

print(k, min_class)
```


### 2 задание

```
t = int(input())

for _ in range(t):
    n = int(input())
    p, q = map(int, input().split())
    
    result = "0."
    
    for i in range(n):
        p = p * 2
        
        if p >= q:
            result += "1"
            p -= q
        else:
            result += "0"
            
    print(result)
```


### 3 задание

```
t = int(input())
results = []

for _ in range(t):
    parts = list(map(int, input().split()))
    a, b, c, d, e, f, g, h = parts
    
    num1 = a * d + c * b
    den1 = b * d
    
    num2 = e * h + g * f
    den2 = f * h
    
    left = num1 * den2
    right = num2 * den1
    
    if left > right:
        results.append("1")
    elif left < right:
        results.append("-1")
    else:
        results.append("0")

print(" ".join(results))
```


### 4 задание

```
n = int(input())
numbers = list(map(int, input().split()))

result = ""

for x in numbers:
    x_bin = bin(x)[2:]
    y = len(x_bin)
    y_bin = bin(y)[2:]
    z = len(y_bin)
    
    code = "0" * (z - 1) + y_bin + x_bin[1:]
    result += code

print(result)
```


### 5 задание

```
s = input().strip()
ans = []

i = 0
while i < len(s):
    k = 0
    while s[i] == '0':
        k += 1
        i += 1
        
    z = k + 1
    
    y_str = s[i:i+z]
    y = int(y_str, 2)
    
    i += z
    
    x_str = '1' + s[i:i + y - 1]
    x = int(x_str, 2)
    
    i += (y - 1)
    
    ans.append(str(x))

print(len(ans))
print(" ".join(ans))
```
