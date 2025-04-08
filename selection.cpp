// Selection Sort for Full Names

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    string arr[100];
    int n;
    clock_t t1, t2;
    t1 = clock();

    cout << "HOW MANY names to enter: ";
    cin >> n;
    cin.ignore();

    cout << "ENTER THE UNSORTED NAMES (First and Last):" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]); 
    }
    
    string temp;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    cout << "AFTER SORTING:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    t2 = clock();
    cout << "Time = " << (double)(t2 - t1) / CLOCKS_PER_SEC << " seconds" << endl;

    return 0;
}
