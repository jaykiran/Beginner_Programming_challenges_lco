#bubble sort

arr = [66,57,54,53,64,52,59]
n=len(arr)

for i in range(n):
	for j in range(0, n-i-1):
		if(arr[j]>arr[j+1]):
			arr[j], arr[j+1] = arr[j+1], arr[j]
			
print(arr[0])