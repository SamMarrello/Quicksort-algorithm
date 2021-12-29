#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//quicksort algorithm example

int partition(vector<int> &data, int left, int right) {
    int pivot_index = left + (left - right) / 2;
    int pivot_value = data[pivot_index];
    int i = left, j = right;
    int temp;

    while (i <= j) {
        while (data [i] < pivot_value) {
            i++;
        }
        while (data [j] > pivot_value) {
            j--;
        }
        if (i <= j) {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}

void quicksort (vector<int> &data, int left, int right) {
    if (left < right) {
        int pivot_index = partition(data, left, right);
        quicksort(data, left, pivot_index - 1);
        quicksort(data, pivot_index, right);
    }
}

int main() {
    vector<int> data;
    srand(time(NULL));

    for (int i = 0; i < rand() % 256; i++) {
        data.push_back(rand() % 10000);
    }

}
