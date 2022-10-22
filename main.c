#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x1, x2, delta, f;
    unsigned int  i=0, N, P;
    printf("p=");
    scanf("%d",&P);
    switch(P){
    case 1:{

    printf("Enter x1:");
    scanf("%lf",&x1);

    printf("\nEnter x2:");
    scanf("%lf",&x2);

    printf("\nEnter N:");
    scanf("%d",&N);

    delta = (x2-x1)/N;

    system("cls");

    printf("****************************************************************\n*  N *\t\tX\t\t  *\t\tF(x)\t       *\n****************************************************************\n");

    while(i<N){
        f = (pow(x1+50,5)) * (sin((x1-5)/60)) - (pow(x1-15,3)) - (3 * pow(x1,2)-20);
        i++;
        printf("+--------------------------------------------------------------+\n|%4d|%28.2lf|%28.2lf|\n+--------------------------------------------------------------+\n", i, x1, f );
        x1 = x1 + delta;

        if(i==8){
            printf("press any key to continue\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
            getch();
        }
    }
    break;
}
     case 2:{
     printf("Enter x1:");
    scanf("%lf",&x1);

    printf("\nEnter x2:");
    scanf("%lf",&x2);

    printf("\nEnter delta:");
    scanf("%lf",&delta);

    N = (x2-x1)/delta;

    system("cls");

    printf("****************************************************************\n*  N *\t\tX\t\t  *\t\tF(x)\t       *\n****************************************************************\n");

    while(i<N){
        f = (pow(x1+50,5)) * (sin((x1-5)/60)) - (pow(x1-15,3)) - (3 * pow(x1,2)-20);
        i++;
        printf("+--------------------------------------------------------------+\n|%4d|%28.2lf|%28.2lf|\n+--------------------------------------------------------------+\n", i, x1, f );
        x1 = x1 + delta;

        if(i==8){
            printf("press any key to continue\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
            getch();
        }
    }
    break;
}
    default: printf("false"); break;
}
    return 0;
}
