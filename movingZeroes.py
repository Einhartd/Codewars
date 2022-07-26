def move_zeros(lst):
    print ("The original list is : " + str(lst))
    [lst.append(lst.pop(lst.index(0))) for _ in lst if 0 in lst]
    print ("The modified element moved list is : " + str(lst))
    return lst