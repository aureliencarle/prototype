
// fichier : my_class.cpp
#include "my_class.h"
#include <cmath>

// Constructeur par défaut
MyClass::MyClass() : value(0) {}

// Constructeur avec un argument
MyClass::MyClass(int v) : value(v) {}

// Méthode pour calculer la somme des carrés jusqu'à un certain nombre
double MyClass::sum_of_squares(int n)
{
    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += std::pow(i, 2);
    }
    return sum;
}

// Méthode pour obtenir la valeur de l'attribut `value`
int MyClass::get_value() const
{
    return value;
}

void MyClass::run_loop(int N) const
{
    for (size_t n = 0; n != N; ++n)
    {
        double x = std::sqrt((2.2 * 4) / 0.2) + std::sqrt(3.3 / 3. + 1);
    }
}

// Méthode pour traiter le dictionnaire et retourner la somme des valeurs
int MyClass::process_dict(const std::unordered_map<std::string, int> &data)
{
    int sum = 0;
    for (const auto &pair : data)
    {
        sum += pair.second;
    }
    return sum;
}