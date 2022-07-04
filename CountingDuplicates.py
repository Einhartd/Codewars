from collections import Counter


def duplicate_count(text):
    a = list(set(text.lower()))
    ans = 0
    for index in a:
        if Counter(text.lower())[index] > 1:
            ans = ans + 1
    return ans