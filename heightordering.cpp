#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int a;
    cin >> a;
    while (a--){
        int b, height, step = 0;
        vector <int> student;
        cin >> b;
        for (int i=0; i<20;i++){
            cin >> height;
            student.push_back(height);
        }
        for (int current=1;current<20;current++) {
            int previous = current -1;
            int key = student[current];
            while (previous >=0 && key < student[previous]) {
                student[previous + 1] = student[previous];
                previous--;
                step++;
            }
            student[previous+1] = key;
        }
        cout << b << " " << step << endl;
    }
}
