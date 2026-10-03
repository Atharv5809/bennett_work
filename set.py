s=set()
terms= int (input("Enter the number of inputs: "))

for i in range(1,terms+1,1):
    s.add(int (input(f"Enter the {i} number: ")))

print("Set with original values: ",s)

d={1:"One"}
d["Two"]=2
s.add(2)

print(s,d,sep=" ")