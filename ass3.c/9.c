//The grades in a certain class are determine by coursebook and a written examination both componets of the assessment carry a maximum of 50 points.
#include<stdio.h>
int main()
{
int cw,we,t;
printf("enter the cw,we");
scanf("%d %d",&cw,&we);
if(cw>=20 && we>=20 && t>=45);
{
printf("pass\n");
}
else if(we>=20)
{
printf("pass\n");
}
else if(t>=45)
{
t=45;
printf("pass\n");
}
else if(t<=44)
{
printf("coursebook pass\n");
}
else
{
printf("fail\n");
}
return 0;
}


/*#include <stdio.h>

int main() {
    int cw, we, t;
    printf("Enter the coursebook score and the written examination score: ");
    scanf("%d %d", &cw, &we);
    if (cw < 0 || cw > 50 || we < 0 || we > 50) {
        printf("Invalid input! Scores should be between 0 and 50.\n")
        return 1; // Exit with an error code
    }

    t = cw + we; // Total score is the sum of coursebook and written examination scores

    if (cw >= 20 && we >= 20 && t >= 45) {
        printf("Pass\n");
    } else if (we >= 20) {
        printf("Pass\n");
    } else if (t >= 45) {
        t = 45; // Cap total score at 45
        printf("Pass\n");
    } else if (t <= 44) {
        printf("Coursebook pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}*

