#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    while (scanf("%d", &t) == 1) {
        for (int i = 0; i < t; i++) {
            int n;
            scanf("%d", &n);

            int height = 1;
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0)
                    height *= 2;
                else
                    height++;
            }

            printf("%d\n", height);
        }
    }
    return 0;
}
