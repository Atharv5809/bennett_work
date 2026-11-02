def goodDay(name, ending = "Thank you"):
    print(f"Good day, {name}\n{ending}")
    return "Bubye"

wish = goodDay("Atharv")
print(wish)
wish = goodDay("Akshat", "Thanks")
print(wish)


"""
The above code prints "Good day, Atharv" when not using the last print statemet. When using it,
the output also contains "Bubye" at the end.

"""