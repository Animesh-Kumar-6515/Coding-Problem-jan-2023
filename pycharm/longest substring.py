st=input("Enter any string : ")
max = 0

for i in range(0,len(st)+1):

    for j in range(0,i+1):
        flag = 0
        temp=st[j:i+1]
        temp=sorted(temp)

        for k in range(len(temp)-1):
            if(temp[k]!=temp[k+1]):
                flag=flag+1
            if(flag==len(temp) and flag>=max):
                max=len(temp)
print(max)
