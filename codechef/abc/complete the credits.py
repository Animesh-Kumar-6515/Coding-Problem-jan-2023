for _ in range(int(input())):
    x=int(input())
    if(x>65):
        print("OVERLOAD")
    elif(x<35):
        print("UNDERLOAD")
    else:
        print("NORMAL")