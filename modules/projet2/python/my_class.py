import numpy as np


# fichier : my_class.py
class MyClass:
    def __init__(self):
        pass

    def sum_of_squares(self, n):
        sum = 0
        for i in range(n):
            sum += i**2
        return sum

    def run_loop(self, n):
        for i in range(n):
            x = np.sqrt((2.2 * 4) / 0.2) + np.sqrt(9.9 / 3 + 1)
