#include <stdio.h>

void mainpage(char *veprimi, int *a, int *b) {
    printf("Vendosni veprimin qe deshironi te kryeni (+,-,*,/): ");
    scanf(" %c", veprimi); // Hapesire para %c shmang problemet me \n
    printf("Vendosni numrin e pare: ");
    scanf("%d", a);
    printf("Vendosni numrin e dyte: ");
    scanf("%d", b);
}

void shuma(int a, int b) {
    printf("Shuma e dy numrave %d + %d = %d\n", a, b, a + b);
}

void zbritja(int a, int b) {
    printf("Zbritja midis %d - %d = %d\n", a, b, a - b);
}

void shumezimi(int a, int b) {
    printf("Shumezimi i %d * %d = %d\n", a, b, a * b);
}

void pjesetimi(int a, int b) {
    if (b == 0) {
        printf("Nuk lejohet pjesetimi me zero!\n");
    } else {
        printf("Pjesetimi i %d / %d = %d\n", a, b, a / b);
    }
}

int mbyllProgramin() {
    int c;
    printf("* Jepni numrin 1 nese deshironi te mbyllni programin ose nje numer tjeter per te vazhduar: ");
    scanf("%d", &c);
    return c == 1;
}

int main() {
    int a, b;
    char veprimi;
    int mbyll = 0;

    while (!mbyll) {
        mainpage(&veprimi, &a, &b);

        switch (veprimi) {
            case '+':
                shuma(a, b);
                break;
            case '-':
                zbritja(a, b);
                break;
            case '*':
                shumezimi(a, b);
                break;
            case '/':
                pjesetimi(a, b);
                break;
            default:
                printf("Veprim i pavlefshem!\n");
        }

        mbyll = mbyllProgramin();
    }

    printf("Programi u mbyll.\n");
    return 0;
}
