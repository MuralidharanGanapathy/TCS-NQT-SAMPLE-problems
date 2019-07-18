input_string = list(input())
stack = []
top = -1
#push 1st element by default
stack.append(input_string[0])
top += 1
for i in range(1,len(input_string)):
    if stack[top] == input_string[i]:
        continue
    else:
        stack.append(input_string[i])
        top += 1
print("".join(stack))
