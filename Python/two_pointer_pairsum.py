numbers=[1,8,9,3,6,17]
numbers.sort()
target=11
st=0                    #only for sorted array
end=len(numbers)-1
while st<=end:
    num=numbers[st]+numbers[end]
    if num==target:
        print(f"Pair found: {numbers[st]} + {numbers[end]} = {target}")
        break
    elif num>target:
        end-=1
    else:
        st+=1
