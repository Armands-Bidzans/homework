#include <iostream>
using namespace std;

template <class T>
void swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

void swapEvenOdd(int* arr, int size) {
    for (int i = 0; i < size - 1; i += 2) {
        if ((arr[i] % 10 != 0 && arr[i] != 0) && (arr[i + 1] % 10 != 0 && arr[i + 1] != 0)) {
            swap(&arr[i], &arr[i + 1]);
        }
        else {
            cout << "Not swapping: " << arr[i] << " and " << arr[i + 1] << endl;
        }
    }
}

int main() {
    const int size = 10;
    int arr[size];

    cout << "Array" << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }

    cout << endl;

    swapEvenOdd(arr, size);

    cout << "Swapped Array" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// числа которые оканчиваются на 0 и если само число 0 то менять местами не надо