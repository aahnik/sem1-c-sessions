#include <stdio.h>

int main(){
    int m;

    printf("Enter marks: ");
    scanf("%d", &m);

    if ((m > 90 ) && (m <=100)){
        printf("excellent");

    }
    else if ((m > 80 ) && (m <=90)){
        printf("a");
    }
    else if ((m > 70 ) && (m <=80)){
        printf("b");
    }
    else if ((m > 60 ) && (m <=70)){
        printf("c");
    }
    else if ((m > 40 ) && (m <=50)){
        printf("d");
    }
    else if ((m > 30 ) && (m <=40)){
        printf("d");
    }
}