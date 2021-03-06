/*
 * @Book: C语言程序设计_现代方法 第二版
 * @Brief: Prints a date in legal form
 * @Date:  2022.06.28
 * @Author: user1687569
 * @Copyright (C) 2022 user1687569
 */

#include <stdio.h>

int main()
{
    int month, day, year;

    printf("Enter date(mm/dd/yy): ");
    scanf("%d / %d / %d", &month, &day, &year);

    printf("Dated this %d", day);
    switch (day)
    {
    case 1:
    case 21:
    case 31:
        printf("st");
        break;
    case 2:
    case 22:
        printf("nd");
        break;
    case 3:
    case 23:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }

    printf(" day of ");

    switch (month)
    {
    case 1: printf("January"); break;
    case 2: printf("February"); break;
    case 3: printf("March"); break;
    case 4: printf("April"); break;
    case 5: printf("May"); break;
    case 6: printf("June"); break;
    case 7: printf("July"); break;
    case 8: printf("August"); break;
    case 9: printf("September"); break;
    case 10: printf("October"); break;
    case 11: printf("November"); break;
    case 12: printf("December"); break;
    default: break;
    }

    printf(", 20%.2d.\n", year);
    return 0;
}
