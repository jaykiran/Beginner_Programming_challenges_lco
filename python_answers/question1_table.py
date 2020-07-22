
#print out whole multiplication table for a given number

a = int(input("Enter number"))
t = int(input("Test cases"))


for i in range(0,t+1):
    ans = a*i
    print('%s' + 'x'+ '%s' + '=' + '%s') % (a, i, ans)