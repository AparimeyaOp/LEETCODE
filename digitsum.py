def digitsum(num,summ=0):
    if(summ<10 and summ>0):
        return summ
    else:
        while(num>0):
            summ += num%10
            num = num//10
        num = summ
        return digitsum(num,summ)
N = int(input("Enter a number: "))
digitsum(N)
