import time
from python.my_class import MyClass as MyClassPy
import my_module  # Le module C++ compilé


# Test de la classe Python
def test_python(x):
    obj = MyClassPy()
    start = time.time()
    obj.run_loop(x)
    end = time.time()
    print(f"Python : {end - start} secondes")
    return end - start


# Test de la classe C++
def test_cpp(x):
    obj = my_module.MyClass()
    start = time.time()
    obj.run_loop(x)
    end = time.time()
    print(f"C++ : {end - start} secondes")
    return end - start


if __name__ == "__main__":

    n = 10**2

    python = test_python(n)
    cpp = test_cpp(n)
    print(f"factor python/c++ : {python/cpp}")

    # Créer une instance de MyClass
    obj = my_module.MyClass()

    # Créer un dictionnaire Python
    data = {"a": 10, "b": 20, "c": 30}

    # Passer le dictionnaire à la méthode C++
    result = obj.process_dict(data)

    print(f"Résultat de la somme des valeurs : {result}")
