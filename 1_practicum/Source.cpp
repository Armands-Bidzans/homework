#include <iostream>
using namespace std;

template <class T>
void swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

void mergeArrays(const int* arrayA, const int sizeA, const int* arrayB, const int sizeB, int* arrayC) {
    for (int indexA = 0, indexB = 0, indexC = 0; indexA < sizeA || indexB < sizeB;) {
        if (indexA < sizeA && (indexB >= sizeB || *(arrayA + indexA) <= *(arrayB + indexB))) {
            *(arrayC + indexC) = *(arrayA + indexA);
            indexA++;
        }
        else {
            *(arrayC + indexC) = *(arrayB + indexB);
            indexB++;
        }
        indexC++;
    }
}

int main() {
    const int arrayA[] = { 1, 3, 5, 7 };
    const int arrayB[] = { 2, 4, 6, 8 };
    const int sizeA = 4;
    const int sizeB = 4;
    int arrayC[sizeA + sizeB];

    mergeArrays(arrayA, sizeA, arrayB, sizeB, arrayC);

    cout << "Array A: ";
    for (int i = 0; i < sizeA; i++) {
        cout << arrayA[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < sizeB; i++) {
        cout << arrayB[i] << " ";
    }
    cout << endl;

    cout << "Merged array C: ";
    for (int i = 0; i < sizeA + sizeB; i++) {
        cout << arrayC[i] << " ";
    }
    cout << endl;


    return 0;
}

