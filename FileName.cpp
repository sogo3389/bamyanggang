#include <stdio.h>

int main()
{
 
    int y, m, d;
    //alsdhbcjkahb

    printf("�⵵�� ���� ���� �Է��� �ּ���.");
    scanf_s("%d %d %d",&y ,&m ,&d);

    switch(m) {
    case 2:
        if(y%400==0 || y%4==0 && y%100!=0)
            printf("%d�� %d���� %d�� ���ҽ��ϴ�.",y,m,29-d);
        else
            printf("%d�� %d���� %d�� ���ҽ��ϴ�.", y, m, 28 - d);
        break;
    case 4: case 6: case 9: case 11:
        printf("%d�� %d���� %d�� ���ҽ��ϴ�.",y,m,30-d);
        break;
    case 1: case 3: case 7: case 8: case 10: case 12:
        printf("%d�� %d���� %d�� ���ҽ��ϴ�.",y,m,31-d);
        break;
    default:
        printf("�Է¿���");
    }

    return 0;
}