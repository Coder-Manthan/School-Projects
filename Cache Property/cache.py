from functools import cache
import time

@cache
def recursive_function(n):
    if n == 1 or n == 2:
        return 1
    else:
        return recursive_function(n - 1) + recursive_function(n - 2)

start = time.time()
print(recursive_function(35))
end = time.time()

print(end - start)