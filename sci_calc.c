#include <stdlib.h>
#include <stdio.h>

float quadtratic();

int main()
{  
     int choice;

   printf("Select an option: ");
   scanf("%d", &choice); 

   switch(choice) {
      case 1 :
         quadratic();
         break;
      case 2 :

      case 3 :
         printf("Option 2\n" );
         break;
      case 4 :
         printf("Option 4\n" );
         break;
      case 5 :
         printf("Option 5\n" );
         break;
      default :
         printf("Invalid input\n" ); 

    return 0;
   }

}

float quadratic() {
   
   float answer;
   float a;
   float b;
   float c;

   printf("Enter coefficient a: ");
   scanf("%f", &a);
   printf("\nEnter coefficient b: ");
   scanf("%f", &b);
   printf("\nEnter coefficient c: ");
   scanf("%f", &c);

   return answer;

}

