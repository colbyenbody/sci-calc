#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void quadratic();

int main()
{
   int choice;

   printf("1: Quadratic Formula\n");
   printf("2: Coming Soon!\n");
   printf("3: Coming Soon!\n");
   printf("4: Coming Soon!\n");
   printf("5: Coming Soon!\n");

   printf("Select an option: ");
   scanf("%d", &choice);

   switch (choice)
   {
   case 1:
      quadratic();
      break;
   case 2:
      printf("Option 2\n");
      break;
   case 3:
      printf("Option 3\n");
      break;
   case 4:
      printf("Option 4\n");
      break;
   case 5:
      printf("Option 5\n");
      break;
   default:
      printf("Invalid input\n");

      return 0;
   }
}

void quadratic()
{

   double a, b, c, discriminant, root1, root2, realNum, imaginaryNum;
   printf("Enter coefficients a, b and c: ");
   scanf("%lf %lf %lf", &a, &b, &c);

   discriminant = (b * b) - (4 * a * c);

   // two distinct real roots/solutions
   if (discriminant > 0)
   {
      root1 = (-b + sqrt(discriminant)) / (2 * a);
      root2 = (-b - sqrt(discriminant)) / (2 * a);
      printf("root1 = %.5lf and root2 = %.5lf", root1, root2);
   }

   // one repeated real solution
   else if (discriminant == 0)
   {
      root1 = root2 = -b / (2 * a);
      printf("root1 = root2 = %.5lf;", root1);
   }

   // two distinct complex solutions
   else
   {
      realNum = -b / (2 * a);
      imaginaryNum = sqrt(-discriminant) / (2 * a);
      printf("root1 = %.5lf+%.5lfi and root2 = %.5f-%.5fi", realNum, imaginaryNum, realNum, imaginaryNum);
   }
}