#include <iostream>
#include <vector>

using namespace std;

string canMakeNonDecreasing(vector<int>& arr) {
    int n = arr.size();
    int diff = 0;

    for (int i = 1; i < n; i++) {
      
        if (arr[i] - arr[i-1] < 0) {
            if (diff == 0) {
                return "NO";
            }
            //diff = 1;
        } else {
            diff += d;
            if (diff > 1) {
                return "NO";
            }
        }
    }

    return "YES";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << canMakeNonDecreasing(arr) << endl;
    }

    return 0;
}


