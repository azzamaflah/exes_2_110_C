#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int zamm[27];
    int n;

int element;
cout << "Masukan angka yang ingin dicari: ";
cin >> element;


//algoritma search
int lowerbound = 0;
int upperbound = n - 1;
while (lowerbound <= upperbound) {
    int mid = (lowerbound + upperbound) / 2;

    if (zamm[mid] == element) {
        cout << "Found" << endl;
        return 0;
    }
    else if (element < zamm[mid]) {
        upperbound = mid - 1;
    }
    else {
        lowerbound = mid + 1;
    }
}
cout << "Not Found" << endl;

return 0;









