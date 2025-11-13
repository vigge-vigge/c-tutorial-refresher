#include <stdio.h>
#include <stdbool.h>

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

int main ()
{
    bool isOnline = false;
    bool isStudent = true;
    
    // printf("%d\n", isOnline);
    if(isOnline)
    {
        printf("Victor is Online\n");
    }
    else
    {
        printf("Victor is offline\n");
    }

    if (isStudent)
    {
        printf("You are a student\n");
    }
    else
    {
        printf("You are not a student\n");
    }

    return (0);
}