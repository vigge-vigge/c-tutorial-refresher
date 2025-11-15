#include <stdio.h>
#include <stdbool.h>


// Variables
// int main() {

//     int age = 25;
//     int year = 2025;
//     float CGPA = 5.0;
//     int secAge = age +5;
//     float price = 30.09;
//     double pi = 3.141592653589793;


//     printf("You are %d years old.\n", age);
//     printf("The year is %d.\n", year);
//     printf("Your CGPA for 2025 is %.2f\n", CGPA);
//     printf("In the next 5 years, I will be %d years old.\n", secAge);
//     printf("The Price of a watch is £%.2f\n", price);
//     printf("The value of pi is %.15lf\n", pi);


//     return 0;
// }

// int main ()
// {
//     char grade = 'A';
//     char grade2 = 'F';
//     char symbol = '+';
//     char currency = '$';

//     printf("The grade of Victor is %c\n", grade);
//     printf("The second kid's grade is %c\n", grade2);
//     printf("The symbol you picked is %c\n", symbol);
//     printf("The currency you picked is %c\n", currency);

//     return (0);
// }

// int main ()
// {
//     char name [] = "Victor";
//     char food [] = "Pasta";
//     char email [] = "victorakande847@gmail.com";

//     printf("Hello, %s\n", name);
//     printf("Your favorite food is %s\n", food);
//     printf("Your email is %s", email);

//     return (0);
// }

// int main ()
// {
//     bool isOnline = false;
//     bool isStudent = true;
//     bool forSale = false;
    
//     // printf("%d\n", isOnline);
//     if(isOnline)
//     {
//         printf("Victor is Online\n");
//     }
//     else
//     {
//         printf("Victor is offline\n");
//     }


//     if (isStudent)
//     {
//         printf("You are a student\n");
//     }
//     else
//     {
//         printf("You are not a student in this school\n");
//     }


//     if (forSale)
//     {
//         printf("This item is for sale.\n");
//     }
//     else
//     {
//         printf("This item is not for sale.\n");
//     }

//     return (0);
// }

// Format Specifiers


// int main ()
// {
//     int age = 23;
//     float price = 18.99;
//     double pi = 3.14159;
//     char currency = '$';
//     char name[] = "Victor";
//     int num1 = 1;
//     int num2 = 10;
//     int num3 = 100;

//     printf("%d\n", age);
//     printf("%f\n", price);
//     printf("%lf\n", pi);
//     printf("%c\n", currency);
//     printf("%s\n", name);
//     printf("%03d\n", num1);
//     printf("%03d\n", num2);
//     printf("%03d\n", num3);

//     return (0);
// }

// int main ()
// {
//     float price1 = 19.99;
//     float price2 = 1.50;
//     float price3 = -100.00;

//     printf("%.2f\n", price1);
//     printf("%.2f\n", price2);
//     printf("%.2f\n", price3);

//     return (0);
// }


// Arethmetic operators
// int main ()
// {
//     int x = 10;
//     int y = 3;
//     int z = 0;
    // int x = 2;
    // float y = 3;
    // float z = 0;

    // z = x + y;
    // z = x - y;
    // z = x * y;
    // z = x / y;
    // z = x % y;
    // z = x % 3;

    // x++;
    // x--;

    // x = x + 2;
//     x += 2;
//     printf("%d", x);
//     // printf("%f", z);

//     return (0);
// }

int main (void)
{
    int age;
    float gpa;
    char grade;
    char name[30] = "";

    age = 0;
    gpa = 0.0f;
    grade = '\0';

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return (0);
}