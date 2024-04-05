#include <stdio.h>

int main()
{
 
    int y, m, d;
    

    printf("년도와 월과 일을 입력해 주세요.");
    scanf_s("%d %d %d",&y ,&m ,&d);

    switch(m) {
    case 2:
        if(y%400==0 || y%4==0 && y%100!=0)
            printf("%d년 %d월은 %d일 남았습니다.",y,m,29-d);
        else
            printf("%d년 %d월은 %d일 남았습니다.", y, m, 28 - d);
        break;
    case 4: case 6: case 9: case 11:
        printf("%d년 %d월은 %d일 남았습니다.",y,m,30-d);
        break;
    case 1: case 3: case 7: case 8: case 10: case 12:
        printf("%d년 %d월은 %d일 남았습니다.",y,m,31-d);
        break;
    default:
        printf("입력오류");
    }

    return 0;
}