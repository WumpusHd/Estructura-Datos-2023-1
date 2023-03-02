
#include <stdio.h>

void division() {
    int numCasos, n, m, x, y, i;
    scanf("%d", &numCasos);

    while(numCasos != 0) {
        scanf("%d %d", &n, &m);

        for(i = 0; i < numCasos; i++) {
            scanf("%d %d", &x, &y);

            if(x == n || y == m) {
                printf("divisa\n");
            }
            else if(x > n && y > m) {
                printf("NE\n");
            }
            else if(x < n && y > m) {
                printf("NO\n");
            }
            else if(x < n && y < m) {
                printf("SO\n");
            }
            else if(x > n && y < m) {
                printf("SE\n");
            }
        }

        scanf("%d", &numCasos);
    }
}

int main() {
    division();
    return 0;
}
