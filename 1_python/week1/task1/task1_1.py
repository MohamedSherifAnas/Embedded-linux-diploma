# this program to count number 4 in  a list

def count_4_list(nums):
    count = 0
    for i in nums:
        if i == 4:
            count=count+1

    return count


print(count_4_list([1,4,6,7,4]))
print(count_4_list([1,4,6,4,7,4]))
