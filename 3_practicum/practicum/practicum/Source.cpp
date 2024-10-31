#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    const int sizeA = 4;
    const int sizeB = 4;
    int arrayA[] = { 1, 3, 5, 7 };
    int arrayB[] = { 2, 4, 6, 8 };
    int arrayC[sizeA + sizeB];
    int index = 0; // Индекс для отслеживания текущего положения в arrayC

    cout << "Elements in arrayA but not in arrayB: ";
    for (int i = 0; i < sizeA; ++i) {
        bool found = false;
        for (int j = 0; j < sizeB; ++j) {
            if (arrayA[i] == arrayB[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << arrayA[i];
            if (i < sizeA - 1) cout << ", ";
        }
    }
    cout << "." << endl;

    cout << "Elements in arrayB but not in arrayA: ";
    for (int i = 0; i < sizeB; ++i) {
        bool found = false;
        for (int j = 0; j < sizeA; ++j) {
            if (arrayB[i] == arrayA[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << arrayB[i];
            if (i < sizeB - 1) cout << ", ";
        }
    }
    cout << "." << endl;

    cout << "Array A: ";
    for (int i = 0; i < sizeA; ++i) {
        cout << arrayA[i];
        if (i < sizeA - 1) cout << ", ";
    }
    cout << "." << endl;

    cout << "Array B: ";
    for (int i = 0; i < sizeB; ++i) {
        cout << arrayB[i];
        if (i < sizeB - 1) cout << ", ";
    }
    cout << "." << endl;

    for (int i = 0; i < sizeA; ++i) {
        arrayC[index++] = arrayA[i];
    }
    for (int i = 0; i < sizeB; ++i) {
        arrayC[index++] = arrayB[i];
    }

    cout << "Final array C: ";
    for (int i = 0; i < index; ++i) {
        cout << arrayC[i];
        if (i < index - 1) cout << ", ";
    }
    cout << "." << endl;

    return 0;
}