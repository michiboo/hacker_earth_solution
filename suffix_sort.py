s = input().split()
k = int(s[1])
s = s[0]
ss = []

tmp = s

while tmp:
    ss.append(tmp)
    tmp = tmp[1:]
ss.sort()
print(ss[k-1])