// homework  15.02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void shiftEl(int array[][3], string direction, int step, int arraySize, int stringSize) {

    if (direction == "left") {
        for (int k = 0; k < step; k++) {
            for (int i = 0; i < arraySize; i++) {
                for (int j = 1; j < stringSize; j++) {
                    swap(array[i][j - 1], array[i][j]);
                }
            }
        }
    }
    else if (direction == "right") {
        for (int k = 0; k < step; k++) {
            for (int i = 0; i < arraySize; i++) {
                for (int j = stringSize - 2; j >= 0; j--) {
                    swap(array[i][j], array[i][j + 1]);
                }
            }
        }
    }

    else if (direction == "up") {
        for (int k = 0; k < step; k++) {
            for (int i = 1; i < arraySize; i++) {
                for (int j = 0; j < stringSize; j++) {
                    swap(array[i][j], array[i - 1][j]);
                }
            }
        }
    }

    else if (direction == "down") {
        for (int k = 0; k < step; k++) {
            for (int i = arraySize - 2; i >= 0; i--) {
                for (int j = 0; j < stringSize; j++) {
                    swap(array[i + 1][j], array[i][j]);
                }
            }
        }
    }


    else {
        cout << "Unknown direction.";
        return;
    }
}

int main()
{
    const int arraySize = 3;
    const int stringSize = 3;

    int array[arraySize][stringSize]{ {1,2,3}, {4,5,6}, {7,8,9} };


    string direct;
    cin >> direct;

    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < stringSize; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    shiftEl(array, direct, 2, arraySize, stringSize);

    cout << endl;
    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < stringSize; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
