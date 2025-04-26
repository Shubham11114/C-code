def cal_sum(n):
    if n == 0 :
        return 0
    print (n)
    return cal_sum(n-1)+n

result = cal_sum(5)
print(result)

 