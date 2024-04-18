num = int(input("Enter a number: "))

sum = 0

# calculate the number of digits
n = 0
c = num
while c > 0:
   c = c // 10
   n = n + 1

# calculate the sum of the nth power of each digit
temp = num
while temp > 0:
   digit = temp % 10
   sum += digit ** n
   temp //= 10

# display the result
if num == sum:
   print(num, "is an Armstrong number")
else:
   print(num, "is not an Armstrong number")
