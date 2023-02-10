# WAP to convert a number i a binary format


x=25
new=1

news=0
for i in range(1,20):
    if x>1:
        y=x%2
        news=(new*10)+y
        new=news


        z=x//2
        x=z
print(news,end="")
