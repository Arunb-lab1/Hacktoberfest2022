def merge(ar1, ar2, m, n):
 
    for i in range(n-1, -1, -1):
     
        last = ar1[m-1]
        j=m-2
        while(j >= 0 and ar1[j] > ar2[i]):
            ar1[j+1] = ar1[j]
            j-=1
  
        if (last > ar2[i]):
         
            ar1[j+1] = ar2[i]
            ar2[i] = last
  

 
ar1 = list(map(int, input("array1: \n").split()))
print("array1: ", ar1)
ar2 = list(map(int, input("array2: \n").split()))
print("array2: ", ar2)


m = len(ar1)
n = len(ar2)
 
merge(ar1, ar2, m, n)
  
print("After Merging \narray1:", end="")
for i in range(m):
    print(ar1[i] , " ", end="")
 
print("\narray2: ", end="")
for i in range(n):
    print(ar2[i] , " ", end="")
 