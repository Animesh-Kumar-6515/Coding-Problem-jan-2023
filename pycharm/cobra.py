t=int(input())
for i in range(t):
    #n=int(input())
    # numbers = list(map(int, input().split()))
    numbers=[1,2,3,2,1]
    #l=len(numbers)
    ran=0
    ran1=0
    # if(l%2==0):
    #     print("no")
    #     break
    # else:
    #     if (numbers[0] == 1):
    #         mid=(l//2)+1
    #         for j in range(0,mid):
    #             if((numbers[j]+1)==numbers[j+1]):
    #                 for k in range(mid, l):
    #                     if((numbers[k]-1)==numbers[k-1]):
    #                         continue
    #                     else:
    #                         print("no")
    #                         break
    #                     # if(k==l-1):
    #                     #     print("yes")
    #             else:
    #                 print("no")
    #                 break
    #     else:
    #         print("no")
    #         break
    #     if(k==l and j==mid):
    #         print("yes")
    #
    # else:
    if (numbers[0] == 1):
        #mid=(l//2)+1
        for j in range(0, 2):
            if ((numbers[j] + 1) == numbers[j + 1]):
                ran=ran+1
            else:
                print("no")
        for k in range(2,4):
            if ((numbers[k] - 1) == numbers[k - 1]):
                ran1=ran1+1
            else:
                print("no")
        if(ran==2 and ran1==2):
            print("yes")