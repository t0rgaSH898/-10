#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i > 1) cout << " ";
        cout << i;
    }
    cout << endl;

    return 0;
}
