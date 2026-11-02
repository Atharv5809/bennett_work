"""
Write a python function to remove a given word from a list and strip it 
at the same time.

"""

def rem(l,word):
    n=[]
    print()
    print(l,"\n")
    l.remove(word)
    for items in l:       
        n.append(items.strip(word))
    return n

l=["Atharv", "Akshat", "Anil", "Nisha", "A"]
print(rem(l,"A"),"\n")