n = int(raw_input())
l = list(map(int, raw_input().split()))
l1 = []
for i in range(0,n-1):
    val = (l[i] - l[i + 1])*-1
    if val not in l1:
        l1.append(val)
    if len(l1) == 2:
        break

mini = min(l1)
org_series = list(range(l[0],l[n-1],mini))
print(list(set(org_series) - set(l))[0])
