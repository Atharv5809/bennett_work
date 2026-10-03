import numpy as n

print ("Enter the array elements:")
arr=n.array([],dtype=int)
for i in range(0,5,1):
    element= int(input())
    arr= n.append(arr,element)
print (arr,"\n")

arr=n.insert(arr,2,[8,7,6],axis=None)
print (arr,"\n")

arr2=n.array([[1,2],[3,4]])
print (arr2,"\n")

arr2=n.insert(arr2,1,[5,6],axis=0)
print (arr2,"\n")

arr2=n.insert(arr2,0,[0,9,1],axis=1)
print (arr2,"\n")

arr2=n.insert(arr2,3,[7,8],axis=None)
print (arr2,"\n")

arr3= n.concatenate((arr,arr2))
print (arr3,"\n")

ar1=n.array([1,2])
ar2=n.array([3,4])
ar3=n.concatenate((ar1,ar2),axis=0)
print (ar3,"\n")