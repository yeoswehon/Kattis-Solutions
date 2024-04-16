import statistics
import math

n , t = map(int, input().split())
number_list = list(map(int, input().split()))

if (t == 1):
    number_list = set(number_list)
    for num in number_list:
        complement = 7777 - num
        if (complement in number_list):
            print("Yes")
            break
    else:
        print("No")

elif (t == 2):
    new_length = len(set(number_list))
    if (new_length == n):
        print("Unique")
    else:
        print("Contains duplicate")

elif t == 3:
    threshold = math.ceil((n+1)/2) # (n+2-1)//2 doesn't work for divisor <= 2 where n is a positive integer. Consider the case when n is an even odd number. You won't round up.
    mode_value = statistics.mode(number_list)
    mode_frequency = number_list.count(mode_value)
    if mode_frequency >= threshold:
        print(mode_value)
    else:
        print(-1)

        
elif (t==4):
    number_list.sort()
    median_index = n // 2
    if n%2 == 0:
        print(number_list[median_index - 1]," ", number_list[median_index])
    else:
        print(number_list[median_index])
        
elif (t==5):
    print(*sorted(filter(lambda x: 100 <= x <= 999, number_list)))
