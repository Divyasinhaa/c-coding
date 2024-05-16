import numpy as np
arr = np.array([1, 2, 3, 4, 5])
print(arr)
print(type(arr)) #type of array

#array from 0 to 20 with 2 steps in between
arr1=np.arange(0,20,2)
print("the output after 2 steps is")
print(arr1,"\n")

#array with dimentions 2 x 4 having 0's
arr2=np.zeros((2,4))
print("array with dimensions 2 x 4 having 0 is")
print(arr2,"\n")

#multiplying the elements of array with 5
arr3=np.array([1,2,3,4,5])
print("multiplying the elements of array with 5")
print("original array",arr3)
print("after multiplication",arr3*5)

#matrix multiplication

a=np.array([[1,2,3],[2,3,1],[1,2,3]])
b=np.array([[1,2,3],[2,3,1],[0,0,1]])
print("\n","matrix multiplication")
print("the multiplication of a and b is:","\n",np.matmul(a,b))



