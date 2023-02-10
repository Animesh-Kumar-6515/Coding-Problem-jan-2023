for _ in range(int(input())):
    n=int(input())
    s=input()
    five=s.count("5")
    zero=s.count("0")
    if(five+zero >=1):
        print("YES")
    else:
        print("NO")