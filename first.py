a= input("Enter the row number for the double star pattern:\n")
rows =int (a)
count=1
for i in range(1,rows+1,1):
    for j in range(1,rows*2,1):
        if j<=count or j>=rows*2-count:
         print("*",end=" ")
        else :
         print(" ",end=" ")

    count+=1
    print("\n")