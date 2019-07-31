ip_list = list(map(int, raw_input().split()))
odd_list = []
even_list = []
for i in range(len(ip_list)):
    if i%2 == 0:
        even_list.append(ip_list[i])
    else:
        odd_list.append(ip_list[i])
even_list = sorted(even_list)
odd_list = sorted(odd_list)[::-1]
s= ""
eve_id = 0
odd_id = 0
for i in range(len(ip_list)):
    if i%2 == 0:
        s += str(even_list[eve_id]) + " "
        eve_id += 1
    else:
        s += str(odd_list[odd_id]) + " "
        odd_id += 1
print(s)
        
    
