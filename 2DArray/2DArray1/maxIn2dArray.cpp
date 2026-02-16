#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int maximum = INT_MIN;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > maximum)
                maximum = arr[i][j];
        }
    }

    cout << "Maximum: " << maximum << endl;

    return 0;
}