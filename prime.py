import sys
import math 

print(("Enter any number for prime check:\nEnter negative integer to end the program"))

while(True):
  
  n = int(input())
  
  if (n<0):
     sys.exit()

  elif (n==0 or n==1):
      print("The given number is neither a prime nor a composite number\n")
      
  elif (n==2 or n==3):
      print("The given number is a prime number\n")
       
  elif (n%2==0):
      print("The given number is not a prime number\n")   
  
  else:
         for i in range (3,(math.isqrt(n))+1,2):
            if (n%i==0):
               print("The given number is not a prime number\n")
               break
            else:
               print("The given number is a prime number\n")