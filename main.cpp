#include <iostream>
#include <vector>
using namespace std;

// Función para determinar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Función para ordenar utilizando Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Función principal
int main() {
    vector<int> numeros = {12, 5, 3, 7, 11, 4, 8, 13};
    vector<int> primos;

    // Filtrar los números primos
    for (int num : numeros) {
        if (esPrimo(num)) {
            primos.push_back(num);
        }
    }

    // Ordenar los números primos
    insertionSort(primos);

    // Imprimir el array ordenado de números primos
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
