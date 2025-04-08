#include <iostream>
#include <ctime> 
using namespace std;

int main() {
    string arr[100], key;
    int n, index = -1;  
    clock_t t1, t2;

    t1 = clock();

    
    cout << "How many names do you want to enter? ";
    cin >> n;
    cin.ignore(); 
    cout << "Enter " << n << " names:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);  
    }

    
    cout << "Enter the name you want to search: ";
    getline(cin, key);

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i + 1; 
            cout << key << " is found at position " << i << endl;
            break; 
        }
    }

   
    if (index == -1) {
        cout << key << " is not found in the list." << endl;
    }

   
    t2 = clock();
    cout << "Time taken: " << (double)(t2 - t1) / CLOCKS_PER_SEC << " seconds\n";

    return 0;
}
