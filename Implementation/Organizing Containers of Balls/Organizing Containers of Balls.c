#include <stdio.h>
#include <vector>
#include <iterator>
#include <string>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <map>
#include <iostream>
#include <set>

using namespace std;


int main() {
    
    long long q, n, c[200], k[200];
    cin >> q;
    for (int t = 0; t < q; t++) {
        memset(c, 0, sizeof(c));
        memset(k, 0, sizeof(k));
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                long long tmp;
                cin >> tmp;
                k[i] += tmp;
                c[j] += tmp;
            }
        }
        sort(c, c + n);
        sort(k, k + n);
        for (int i = 0; i < n; i++) {
            if (k[i] != c[i]) {
                cout << "Impossible" << endl;
                break;
            }
            if (i == n - 1) {
                cout << "Possible" << endl;
            }
        }
    }
    return 0;
}
