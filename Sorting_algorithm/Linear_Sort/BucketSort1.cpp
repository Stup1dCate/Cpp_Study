//										BucketSort: O(n + k) -> O(n^2)
#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
void quicksort(int arr[], int low, int high) {
    if (low<high) {
        int pivot = arr[high];
        int i=low-1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        quicksort(arr, low, i);
        quicksort(arr, i + 2, high);
    }
}
void bucketSort(int arr[], int n, int num_buckets) {
    int buckets[num_buckets][n];
    int bucket_sizes[num_buckets] = {0};
    
    for (int i = 0; i < n; i++) {
        int bucketIndex = arr[i] / num_buckets;
        buckets[bucketIndex][bucket_sizes[bucketIndex]++] = arr[i];
    }

    for (int i = 0; i < num_buckets; ++i) {
        quicksort(buckets[i], 0, bucket_sizes[i] - 1);
    }
    int index = 0;
    for (int i=0; i<num_buckets; i++) {
        for (int j = 0; j < bucket_sizes[i]; j++) {
            arr[index++] = buckets[i][j];
        }
    }
}
int main() {
    srand(time(0));
    
    const int n = 10;
    int arr[n];
    int num_buckets = 10;

    cout << "Mang truoc khi sap xep: "<<endl;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; 
        cout << arr[i] << " ";
    }
    cout << endl;

    bucketSort(arr, n, num_buckets);
    cout << "Mang sau khi sap xep: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
