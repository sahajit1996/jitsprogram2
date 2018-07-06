num=int(input("enter the value "))
for  i in range(3,num):
    for j in range(2,num):
        if i%j==0:
            break

    if i==j:
        print(i)
