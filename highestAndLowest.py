def high_and_low(numbers):
    numbers = numbers.split(" ")
    int_list = map(int, numbers)
    numbers = list(int_list)
    numbers.sort()
    int_list = map(str, numbers)
    numbers = list(int_list)
    return numbers[len(numbers) - 1] + " " + numbers[0]


print(high_and_low("8 3 -5 42 -1 0 0 -9 4 7 4 -4"))
