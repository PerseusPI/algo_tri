def triInsert(a):
    for j in range(1,len(a)):
        cle = a[j]
        i = j - 1
        while i >= 0 and a[i] > cle:
            a[i+1] = a[i]
            i = i - 1
        print(i)
        a[i+1] = cle
    print(a)


a = [2,3,7,1,9]
triInsert(a)
