import numpy as np

arr= np.array([1,2,3,4,5,6])
print(arr)
#[1 2 3 4 5] 
print (arr[[0,3,1]]) #multiple index selection [1,4,2]
print (arr[arr>3]) 
print (arr.reshape(2,3),"\n")

filledArray= np.full((2,2),7)
print(filledArray,"\n")
# [[7 7]
#  [7 7]]

newArr= np.arange(1,14,2)
print(newArr,"\n")
#[ 1  3  5  7  9 11 13] 

iden_mat= np.eye(4)
print(iden_mat,"\n")
#[[1. 0. 0. 0.]
# [0. 1. 0. 0.]
# [0. 0. 1. 0.]
# [0. 0. 0. 1.]]

zero_arr= np.zeros(5)
print(zero_arr,"\n")
#[0. 0. 0. 0. 0.] 