/* How to do simple input and output. */
/* 如何进行简单的输入输出 */
#include <stdio.h>
int main (void)
{
    int a;
    scanf("%d",&a); //扫描a，注意a是整数
    printf("What you input is %d\n",a); //输出a，注意a是整数

    float b;
    scanf("%f",&b); //扫描b，注意b是单精度浮点数
    printf("What you input is %f\n",b); //输出b，注意b是单精度浮点数

    double c;
    scanf("%lf",&c); //扫描c，注意c是双精度浮点数
    printf("What you input is %lf\n",c); //输出c，注意c是双精度浮点数

    char d;
    scanf(" %c",&d);  //扫描d，注意d是字符，%c之前要加一个空格，这是因为之前输入结果后要回车，回车会被判定为读取字符
    printf("What you input is %c\n",d); //输出d，注意d是字符
    
    return 0;
}
