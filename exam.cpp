
#include <stdio.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

const int N = 5001;

int n;
int a[N];

int main() {
    scanf("%d", &n);

    if (n == 2) {
        printf("1\n1");
        return 0;
    }
    if (n == 3) {
        printf("2\n1 3");
        return 0;
    }

    int cur = n & 1 ? n : n - 1;
    for(int i = 0; i < n; i++) {
        if (cur < 0) {
            cur = n & 1 ? n - 1 : n;
        }
        a[i] = cur;
        cur -= 2;   
    }

    printf("%d\n", n);
    forn(i, n) 
        printf("%d ", a[i]);

    return 0;
}
