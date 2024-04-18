# f=open('story.txt',"r")
# for i in f :
#     print(i)

# # f1=open("c:\\Users\\hp\\Pictures\\Meme\\DSA C++\\COLLEGE\\file.py")
# # print(f1)
# # # thez
# str=f.read()
# print(str)
# print(f.readline())
# #  to find the size of file in bytes.
f=open("stroy.txt","r")
for i in range(3):
    name=input("Enter name to store:")
    f.write(name)
    f.write('\n')
   