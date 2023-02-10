# There are n children in a class. Each child has a favorite color. The favorite color of the i-th child is
# fi. As a gift for their promotion to the next class, you plan to give each child k candies as a gift. So,
# you bring n*k candies to the class and plan to distribute them.
# Each candy has a single, non-distinct color, i.e., there may be more than one candy with the same color.
# When a child receives j candies of his/her favorite color, the happiness level of a child becomes hj.
# Any other color of candy adds no happiness to the child.
# As a good and unbiased teacher, you want to make the entire class as happy as possible.
# The happiness of the whole class is defined as the sum of happiness of each child. Given the n, k, f, and h,
# find the highest possible happiness level of the class.
n=int(input("Enter the number of children in the class"))
k=int(input("Enter the number of candies to be given to each children"))
f=int(input("Enter the color code of the childern"))
h=int(input("Enter the happiness level of children"))
sum=0
for i in range(1,n+1):
    fi=f*i
    for c in range(1,k+1):
        j=int(input("Enter the candy given to"))
        if j==fi:
            sum=sum+(h*j)

print(sum)