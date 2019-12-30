"""
- https://www.cnblogs.com/yjiyjige/p/3263858.html
"""


def kmp_search(txt, pat):
    """

    :param txt:
    :param pat:
    :return:
    """
    pass


def get_failure_array(pattern):
    """
    Calculates the new index we should go to if we fail a comparison
    :param pattern:
    :return:
    """
    failure = [0]
    i = 0
    j = 1
    while j < len(pattern):
        if pattern[i] == pattern[j]:
            i += 1
        elif i > 0:
            i = failure[i - 1]
            continue
        j += 1
        failure.append(i)
    return failure


if __name__ == '__main__':
    pass
