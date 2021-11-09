def sleep_in(weekday, vacation):
    if (not weekday) or vacation:
        return True
    else:
        return False


def monkey_trouble(a_smile, b_smile):
    return (a_smile == b_smile)


def sum_double(a, b):
    if a == b:
        return 2*(a+b)
    else:
        return a+b


def diff21(n):
    total = n - 21
    total = abs(total)
    if n > 21:
        return 2 * total
    else:
        return total


def parrot_trouble(talking, hour):
    if (hour > 20 or hour < 7) and talking:
        return True
    else:
        return False


def makes10(a, b):
    if a == 10 or b == 10:
        return True
    if (a + b) == 10:
        return True
    else:
        return False


#!Wrong
def near_hundred(n):
    absdiff = abs(n-100)
    while absdiff >= 100:
        absdiff = abs(absdiff-100)

    if (absdiff <= 10):
        return True
    else:
        return False


print(near_hundred(295))
