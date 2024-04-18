# a = input("Enter a string")
# for i in a[::-1]:
#     print(i, end="")


# a = input("Enter a string")
# l=len(a)

# for i in range (l):
#     if(a[i]==a[l-1-i]):
#         print("palindrome")
     
num = int(input("Enter a number: "))


sum = 0

n=0
c=num
while(c>0):
   c=c%10
   n=n+1


temp = num
while temp > 0:
   digit = temp % 10
   sum += digit ** n  # change this to 4 for 4-digit numbers
   temp //= 10

# display the result
if num == sum:
   print(num,"is an Armstrong number")
else:
   print(num,"is not an Armstrong number")

# num = int(input("Enter a number: "))

# # initialize sum
# sum = 0

# # find the sum of the power of each digit
# temp = num
# while temp > 0:
#    digit = temp % 10
#    sum += digit ** 4  # change this to 4 for 4-digit numbers
#    temp //= 10

# # display the result
# if num == sum:
#    print(num,"is an Armstrong number")
# else:
#    print(num,"is not an Armstrong number")



# year = int(input("Enter a year: "))

# if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
#     print(year, "is a leap year")
# else:
#     print(year, "is not a leap year")

# # Take input in 12-hour format
# time = input("Enter time in 12-hour format (HH:MM AM/PM): ")

# # Split the input into the time and the period (AM/PM)
# time, period = time.split()

# # Split the time into hours and minutes
# hours, minutes = map(int, time.split(':'))

# # If the time is in PM and it's not 12:00 PM to 12:59 PM, add 12 to the hours
# if period == 'PM' and hours != 12:
#     hours += 12

# # If the time is in AM and it's 12:00 AM to 12:59 AM, subtract 12 from the hours
# if period == 'AM' and hours == 12:
#     hours -= 12

# # Print the time in 24-hour format
# print(f"{hours:02d}:{minutes:02d}")