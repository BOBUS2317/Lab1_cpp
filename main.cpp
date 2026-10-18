#include <climits>
#include <iostream>

using namespace std;

// Ошибка 1 (ASan): выход за границы массива
void f1() {
    int* a = new int[3]{5, 4, 3};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += a[i];
    }
    cout << "Sum: " << sum << endl;
    delete[] a;
}

// Ошибка 2 (ASan): двойное освобождение памяти
void f2() {
    int* a = new int(5);
    cout << "A: " << *a << endl;
    delete a;
}

// Ошибка 3 (UBSan): переполнение int
void f3() {
    long long x = INT_MAX;
    x = x + 1;
    cout << "X: " << x << endl;
}

// Ошибка 4 (LSan): утечка памяти
void f4() {
    int* a = new int[10];
    a[0] = 1;
    cout << "A: " << a[0] << endl;
}

int main() {
    f1();
    f2();
    f3();
    f4();
    return 0;
}