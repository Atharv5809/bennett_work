def power(number,count):
    if count==1:
        return number
    
    return number*power(number,count-1)

count =int (input("Enter the power to be calculated: "))
number =int (input("Enter the number: "))
answer=power(number,count)
print("Answer= ",answer)
