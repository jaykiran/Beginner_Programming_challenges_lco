#print a double stair case pattern 

def pattern(n): 
  
    for i in range(1,n+1): 
  
        # conditional operator 
        k =i + 1 if(i % 2 != 0) else i 
  
        # for loop for printing spaces 
        for g in range(k,n): 
            if g>=k: 
                print("  ") 
  
        # according to value of k carry 
        # out further operation 
        for j in range(0,k): 
            if j == k - 1: 
                print(" * ") 
            else: 
				end = ""
				print(" * " + end) 
  
  
# Driver code 
n = 10
pattern(n) 