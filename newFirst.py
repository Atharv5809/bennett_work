rows=int (input("Enter the number of rows:"))
for i in range(1,rows+1,1):
    print(i*"* ",(2*rows-2*i)*"  ",i*"* ",sep="",end="\n")