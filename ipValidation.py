def is_valid_IP(string):
    print(string)
    test = string.split('.')
    if len(test) == 4:
        for checker in range(0, len(test)):
            if len(test[checker]) > 1:
                if test[checker][0] == '0':
                    return False
            tester = test[checker].isnumeric()
            if tester == False:
                return False
            else:
                if int(test[checker]) < 0 or int(test[checker]) > 255:
                    return False
        return True
    else:
        return False
