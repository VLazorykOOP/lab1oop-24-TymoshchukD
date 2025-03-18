 // ArrayFile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

void modifyArray(std::vector<int>& A) {
    int N = A.size();
    int mid = N / 2; // Знаходимо середину масиву

    // Множимо першу половину на 2
    for (int i = 0; i < mid; i++) {
        A[i] *= 2;
    }

    // Множимо другу половину на 3
    for (int i = mid; i < N; i++) {
        A[i] *= 3;
    }
}

int main() {
    // Приклад масиву
    std::vector<int> A = { 1, 2, 3, 4, 5, 6 };

    // Викликаємо функцію для зміни масиву
    modifyArray(A);

    // Виводимо результат
    for (int num : A) {
        std::cout << num << " ";
    }

    return 0;
}


