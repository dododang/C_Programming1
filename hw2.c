#include <stdio.h>

int main(void)
{
    float ONE_MILE = 1.609;

    float km, mile;
    printf("ų�ι��͸� �Է��ϼ���: ");
    scanf_s("%f", &km);

    mile = km / ONE_MILE;

    printf("%.1f km is equal to %.1f miles.\n", km, mile);

    return 0;
}
