#include<Stdio.h>
#include<math.h>
#include<conio.h>
#define ERROR 0.001
#define F(x) (x)*(x)*(x) + 3 * x -5
void main(){
    int i =1;
    float x0,x1,x2;
    double f1,f2,f0,t;
    printf("Enter the value of x0:");
    scanf("%f", &x0);
    printf("Enter the value of x1:");
    scanf("%f", &x1);
    printf("\n___________________________________________________________________\n");
    printf("\n    x0\t      x1\t   x2\t    f(x0)\t    f(x1)\t   f(x2)");
    printf("\n_____________________________________________________________________\n");
    do{
        x2 = (x0+x1)/2;
        f0 = F(x0);
        f1 = F(x1);
        f2 = F(x2);
        printf("\n%f   %f   %f   %f   %f    %f",x0,x1,x2,f0,f2);
        if(f0*f2<0){
            x1 = x2;
        }
        else{
            x0 = x2;
        }
        i++;
    }while(fabs(f2)> ERROR);
     printf("\n______________________________________________________________________\n");
    printf("root = %f",x2);
    getch();
}
