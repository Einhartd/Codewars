def disemvowel(string_):

    vowels = ('a', 'e', 'i', 'o', 'u')
    for x in string_:
        if x.lower() in vowels:
            string_ = string_.replace(x, '')
    return string_
