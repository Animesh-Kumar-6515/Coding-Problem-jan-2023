from prettytable import PrettyTable
cont,pro=map(int,input().split())
arr_cont=[]
for i in range(cont):
    n,s=map(input().split())
    s=int(s)
    for j in range(s):
        sk, lev = map(input().split())

        arr_cont=arr_cont.prettytable(sk,lev)
        lev = int(lev)
//project
for i in range(pro):
    pro_name,d,score,bb,num_role=map(input().split())
    score=int(score)
    d=int(d)
    bb=int(bb)
    num_role=int(num_role)
    for j in range(s):
        for k in range(s):
            if()
