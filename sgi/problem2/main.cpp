#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long int pos;
    cout << "Enter a position number: "; cin >> pos;

    int f2_idx = 0;
    int f3_idx = 0;
    int f5_idx = 0;

    long int result[pos];
    result[0] = 1;

    for (int i = 1; i < pos; ++i) {
        long int prev = result[i - 1];

        while (result[f2_idx] * 2 <= prev) {
            ++f2_idx;
        }
        while (result[f3_idx] * 3 <= prev) {
            ++f3_idx;
        }
        while (result[f5_idx] * 5 <= prev) {
            ++f5_idx;
        }

        long int f2_num = result[f2_idx] * 2;
        long int f3_num = result[f3_idx] * 3;
        long int f5_num = result[f5_idx] * 5;
        
        result[i] = min(f2_num, min(f3_num, f5_num));
    }
    cout << "The result is: " << result[pos-1] << endl;
    return 0;
}
