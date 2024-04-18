# myfile=open("story.txt","r")
# e=myfile.read()
# print(len(e))
# c=0
# # write a python program to count the white space or occurence in the program
# for i in e:
#    if(i==" "):
#       c=c+1
# print(c)
# write a pyhton file to record were record of a student consist of roll no., name and %
f=open("story.txt","w")
n=int(input("no. of stdents:"))
for i in range (n):
    name=input("enter the name:")
    rollNo=input("enter the roll no:")
    percentage=input("%:")
    sec=rollNo + '\t '+name +'\t' + percentage
    f.write(sec)
f.close() 
print("\n Data saved")
