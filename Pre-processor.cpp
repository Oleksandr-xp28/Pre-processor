// Pre-processor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

void display_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}

void fill_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
}

int find_min(int* array, int size) {
    int min_element = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min_element) {
            min_element = array[i];
        }
    }
    return min_element;
}

int find_max(int* array, int size) {
    int max_element = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max_element) {
            max_element = array[i];
        }
    }
    return max_element;
}

void sort_array(int* array, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void edit_array(int* _array, int index, int value) {
    _array[index] = value;
}

int main() {
    srand(time(0));
    int* _array = new int[10];

    fill_array(_array, 10);
    edit_array(_array, 2, 100);
    cout << "The array is: ";
    display_array(_array, 10);
    cout << endl;

    int min_element = find_min(_array, 10);
    cout << "Minimum: " << min_element << endl;

    int max_element = find_max(_array, 10);
    cout << "Maximum: " << max_element << endl;

    delete[] _array;
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

