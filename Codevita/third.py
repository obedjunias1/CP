s = input()
f = input()
ct = 0
i = 0
while(i<len(s)):
    if s[i] in f:
        # print(i)
        if f in s[i: i + len(f)]:
            ct += 1
            # print(s[i: i + len(f)])
            i += (len(f) - i)+1
            # print(i)
        else:
            # ind = f.index(s[i])
            if f[0] == s[i]:
                ct += (1 + (len(f) - 0 - 1))
            elif f[len(f)-1] == s[i]:
                ct += (1 + 1 + (len(f) - 1) + 1)
            else:
                ct += (1 + (len(f) - f.index(s[i]) - 1))
                ct+=(1+(f.index(s[i])-0)+1)
            i += 1
    i+=1
print(ct)