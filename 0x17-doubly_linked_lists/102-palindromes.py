#!/usr/bin/env python3
def is_palindrome(n):
    n_str = str(n)
    for i in range(len(n_str)//2):
        if n_str[i] != n_str[-(i + 1)]:
            return False
    return True

max = 0
for n1 in range(999, -1, -1):
    for n2 in range(999, -1, -1):
        product = n1 * n2
        if is_palindrome(product) and product > max:
            max = product
print(max, end="")
