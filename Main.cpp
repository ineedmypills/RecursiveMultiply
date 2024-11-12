#include <iostream>
#include <Windows.h>

int recursiveMultiply(int a, int b);

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a = -6;
    int b = -3;
    int result = recursiveMultiply(a, b);
    std::cout << "Результат умножения: " << result << std::endl;

    return 0;
}

int recursiveMultiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b < 0) {
        return -recursiveMultiply(a, -b);
    }

    return a + recursiveMultiply(a, b - 1);
}
