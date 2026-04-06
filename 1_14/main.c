#include <stdio.h>

int main() {
    int c;
    int freq[256] = {0};
    
    // Count frequencies
    while ((c = getchar()) != EOF) {
        freq[c]++;
    }
    
    // Print histogram
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < freq[i]; j++)
                printf("*");
            printf("\n");
        }
    }
    
    return 0;
}
