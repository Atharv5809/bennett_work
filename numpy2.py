import numpy as n

arr= n.array([[[[2,3],[1,2]],[[3,4],[4,5]]],[[[6,7],[7,8]],[[8,9],[9,0]]]])
print(arr,"\n")
print("Array size= ",arr.size,"\n")
print("Array length= ",len(arr),"\n")
print("Array dimensions= ",arr.ndim,"\n")
print("Array shape= ",arr.shape,"\n")
print ("The above as 1D array= ",arr.ravel(),"\n")

arr2= n.array([[1,2,3,4],[5,6,7,8]])
print(arr2,"\n")
print("Array size= ",arr2.size,"\n")
print("Array length= ",len(arr2),"\n")
print("Array dimensions= ",arr2.ndim,"\n")
print("Array shape= ",arr2.shape,"\n")
print ("The above as 1D array= ",arr2.flatten(),"\n")