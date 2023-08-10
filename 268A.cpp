#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int arr[n][2];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    int sample, res = 0;

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < 2; j++) {
            sample = arr[i][j];

            if (j == 0) {
                for (int k = i+1; k < n; k++) {
                   
                        if (arr[k][1] == sample) {
                            res++;
                        } else {
                            continue;
                        }
                    
                }
            } else {
                for (int k = i+1; k < n; k++) {
                  
                        if (arr[k][0] == sample) {
                            res++;
                        } else {
                            continue;
                        }
                    
                }
            }
        }
    }

    cout << res << endl;
}
