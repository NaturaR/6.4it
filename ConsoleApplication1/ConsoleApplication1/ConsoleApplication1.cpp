#include <iostream>
#include <iomanip>

using namespace std;

void readArray(double* arr, int n) {
    cout << "int elem array: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << setw(4) << "elem: " << i + 1 << ": ";
        cin >> arr[i];
    }
}
void prontArray(double* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << setw(4) << arr[i] << " ";
    }
    cout << endl;
}
double sumOfNegativeElements(const double* arr, int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

double productBetweenMinMax(const double* arr, int n) {
    double min_element = arr[0];
    double max_element = arr[0];
    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] < min_element) {
            min_element = arr[i];
            min_index = i;
        }

        if (arr[i] > max_element) {
            max_element = arr[i];
            max_index = i;
        }
    }

    double product = 1;

    for (int i = min(min_index, max_index) + 1; i < max(min_index, max_index); ++i) {
        product *= arr[i];
    }

    return product;
}

void sortEvenElements(double* arr, int n) {
    for (int i = 0; i < n; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (arr[i] > arr[j]) {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "lenght array: ", cin >> n;
    double* arr = new double[n];

    readArray(arr, n);
    sortEvenElements(arr, n);

    cout << setw(4) << "Sum: " << sumOfNegativeElements(arr, n) << endl;
    cout << setw(4) << "Dob: " << productBetweenMinMax(arr, n) << endl;

    cout << "New array:" << endl;
    prontArray(arr, n);
    cout << endl;


    return 0;
}