#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "func.h"


int exc1(int z_)
{
    float L=0;
    int a=0;
    int x=0;
    int c=0;
    printf("Введите x:", x);
    scanf("%d", &x);
    printf("Введите a:", a);
    scanf("%d", &a);
    printf("Введите c:", c);
    scanf("%d", &c); 
    
    L=(sqrt(exp(x)- pow(cos(x*x*pow(a,5)),4))+pow(atan(a - pow(x,5)),4))/(exp(1)*sqrt(fabs(a + x * pow(c,4))));
        
    printf("Ответ: %f\n", L);
    return L;
}



int exc2(int x)
{
    int v=0;
    int t=0;
    
    printf("Введите время: ", t);
    scanf("%d", &t);
    
    v=(3*(t*t)) - (6*t);
    
    return v;
}





int exc3(int x)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int x1 = 0;
    int x2 = 0;
    int d=0;


printf("Введите коэффициент a: ",a);
scanf("%d", &a);
printf("Введите коэффициент b: ",b);
scanf("%d", &b);
printf("Введите коэффициент c: ",c);
scanf("%d", &c);


if (a==0)
{
    printf("ERROR!");
    return 0;
}

    d=pow(b,2)-(4*a*c);

    if (d>0)
    {
        
    x1 = ((-b) + sqrt(d))/ 2*a;
    x2 = ((-b) - sqrt(d))/ 2*a;
    printf("x1 = %d, x2 = %d", x1, x2);
        
    }
    
    

    if (d==0)
{
    printf("Только один корень!\n");
    printf("Корень равен: %d\n", x1);
    return 0;
}
    
    return 0;
   
}



int exc4(int x_)
{
    int x=0;
    float z = 0;
    float s=0;
    
    
    
    printf("В какой город вы звоните?\n ");
    printf("1. В Одессу - код 048\n ");
    printf("2. В Киев - код 044\n ");
    printf("3. В Харьков - код 046\n ");
    printf("4. В Винницу - код 045\n ");
    printf("Ваш выбор?\n" , x);
    scanf("%d", &x);
    switch (x)
    {
        case 1:
            printf("Какое время?\n", z);
            scanf("%f",&z);
            s=15*z;
            printf("Цена будет составлять: %.2f грн.\n", s);
            break;
        case 2:
            printf("Какое время?\n", z);
            scanf("%f",&z);
            s=18*z;
            printf("Цена будет составлять: %.2f грн.\n", s);
            break;
        case 3:
            printf("Какое время?\n", z);
            scanf("%f",&z);
            s=13*z;
            printf("Цена будет составлять: %.2f грн.\n", s);
            break;
        case 4:
            printf("Какое время?\n", z);
            scanf("%f",&z);
            s=11*z;
            printf("Цена будет составлять: %.2f грн.\n", s);
            break;
        default:
            break;
            
    }
    
    getchar();
    return 0;
}




int exc6(x_)
{
    int x=0;
    int i=0;
    int b=0;
    int s=0;
    
    
    printf("Введите двоичное число: ", x);
    scanf("%d", &x);
    
    while (x>0)
    {
        b=x%10;
        if (b==1) s=s+pow(2,i);
        x=x/10;
        i=i+1;
    }
    
    printf("Перевод прошёл успешно!\nВаше десятичное число = %d\n", s);
    return 0;
    
}



int exc5(int x)
{
    int n;
    int s;

    for (int i = 1000; i < 10000; i++)
    {
        n = i;
        s = 0;

        for (int j = 0; j < 4; j++)
        {
            s =s+ pow(n % 10, 4);
            n =n/10;
        }

        if (s == i)
            printf("%d ", i);

    }
    return 0;
}

int exc7(int x)
    {
   
    int x=0;
    int I;
    int J;
    int* L;
    L=malloc(I*J*sizeof(int));
    
    
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    
    
    for (int i =0; i< l*k; ++i)
    {
        a[i]= -rand() % (21-10) * 3;
        
    }
    
    
    
    printf("%d", a[i] );
    
    return 0;
}
