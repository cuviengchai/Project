import sys
_, command, string = sys.argv
ans = ""
count = 0
for i in string:
    if (i == 'x'):
        ans+=command[count]
        count+=1
    else:
        ans+='-'
print(ans)
