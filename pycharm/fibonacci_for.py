nterms = int(input("Enter the number of terms :  "))
n1, n2 = 0, 1
count = 0
if nterms <= 0:
   print("Enter a positive number : ")
elif nterms == 1:
   print("Fibonacci sequence upto",nterms,":")
   print(n1)
else:
   print("Fibonacci sequence:")
   for i in range(nterms):
      print(n1,end="  ")
      nth = n1 + n2
      n1 = n2
      n2 = nth
