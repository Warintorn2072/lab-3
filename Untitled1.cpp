#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if (score >= 75) {
        printf("A");
    } else if (score >= 68) {
        printf("B");
    } else if (score >= 60) {
        printf("C");
    } else if (score >= 50) {
        printf("D");
    } else if (score < 50){
        printf("F");
    } else {
		printf ("error score");
	}

    return 0;
}

