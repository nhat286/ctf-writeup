#include<stdio.h>

int main() {
    FILE *f = fopen("rainbow.txt", "r");
    FILE *g = fopen ("ext_rainbow.txt", "w");
    
    int ch = fgetc(f);
    while (ch != EOF) {
        if (ch == '#') {
            for (int i = 0; i < 6; ++i) {
                ch = fgetc(f);
                fputc(ch, g);
            }
            fputc(' ', g);
        }
        ch = fgetc(f);
    }
    
    fclose(f);
    fclose(g);
    return 0;
}
