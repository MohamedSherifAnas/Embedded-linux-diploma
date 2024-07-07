f=open("test.txt",'r')
lst=f.read()
print(len(lst.split()))
f.close()
