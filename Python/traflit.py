light=input("colour of light:")
if(light=="red"):
    print("stop")
elif(light=="yellow"):
    print("be ready")
elif(light=="green"):
    print("go")
else:
    print("light is broken")

marks=int(input("your marks:"))
if(marks>=90):
    print("grade A")
elif(marks>=85 and marks<90):
    print("grade B")
elif(marks>=80 and marks<85):
    print("grade C")
else:
    print("grade D")
print("A")if marks>=90 else print("B") #ternary statement