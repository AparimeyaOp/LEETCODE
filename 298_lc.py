nums = [1,2,3,4]
arr = []
for i in range(len(nums)):
    pro = 1
    print("i",i)
    for j in range(len(nums)):
        print("j",j)
        if(i != j):
            pro *= nums[j]
            print("product is ",pro)
    arr.append(pro)
for i in arr:
    print(arr[i])
