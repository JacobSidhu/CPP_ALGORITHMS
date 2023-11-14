#Value to Find
KEY_VALUE = 57
#defining linear_Search Algorithms
def linear_Search(arr,key):
    #Iterating in the list
    for i in range(len(arr)):
        if arr[i]==key: return i #if found returning Index
    return -1# If not found returning Null value

#-------Main--------
#List of random numbers
list_array = [1,46,57,4,35,6,3,6,7,44,6]

result = linear_Search(list_array,KEY_VALUE)

if result < 0:
    print (f"{KEY_VALUE} is Not Found in List")
else:
    print(f"{KEY_VALUE} found at index {result} in List")