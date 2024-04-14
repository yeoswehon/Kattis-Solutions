#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string string_conversion(int number) {
    int remainder = number % 26;
    if (remainder == 0){
        return string(1,'a');
    }
    char character = 'a'+ remainder;
    return string(1, character);
}

int main() {
    long N;
    int t;
    cin >> N >> t;
    vector<int> array(N);
    long long sum = 0;
    long long sum_even_integers = 0;

    for (int i = 0; i < N; i++) {
        cin >> array[i];
        sum += array[i];
        if (array[i] % 2 == 0) {
            sum_even_integers += array[i];
        }
    }

    if (t == 1) {
        cout << 7;
    } else if (t == 2) {
        if (array[0] > array[1]) {
            cout << "Bigger";
        } else if (array[0] == array[1]) {
            cout << "Equal";
        } else {
            cout << "Smaller";
        }
    } else if (t == 3) {
        sort(array.begin(), array.begin()+3); //Finding the median must sort first
        cout << array[1];
    } else if (t == 4) {
        cout << sum;
    } else if (t == 5) {
        cout << sum_even_integers;
    } else if (t == 6) {
        for (int i = 0; i < N; i++) {
            cout << string_conversion(array[i]);
        }
    } else if (t == 7) {
        long long i = 0;
        vector<bool> check(N, false);
        while (true) {
            if (i < 0 || i >= N) {
                cout << "Out";
                break;
            } else if (i == N - 1) {
                cout << "Done";
                break;
            } else if (check[i]) {
                cout << "Cyclic";
                break;
            }
            check[i] = true;
            i = array[i];
        }
    }

    return 0;
}
