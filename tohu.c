#include <stdio.h>

int main () {

    int tohu;
    scanf("%d", &tohu);

    for(int i=0; i<tohu; i++) {

        int number;
        scanf("%d", &number);

        double answer;

    answer = 0.75 + (0.5/(number+2))-(0.5/(number+1));
    printf("%.11f\n",answer);

    }

    return 0;
}
