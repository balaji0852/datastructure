count = 0
strg = "Balaji is writing a code"
v = ['a','e','o','u','i']
for i in strg:
    if i not in 'aeiouAEIOU':
        count += 1

print(count)        
