/* Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.*/
#include <stdio.h>
int main()
{
   int shape_code;
   float  base, length, breadth, height, area, radius;
   printf("1->square\n");
   printf(" 2 -> Rectangle\n");
   printf(" 3 -> Triangle\n");
   printf(" 4 -> Circle\n");
   printf("Enter the Figure code: ");
   scanf("%d", &shape_code);
   switch(shape_code)
   {
      case 1:
         printf("Enter the Side: ");
         scanf("%f", &length);
         area = length * length;
         printf("Area of the Square=%.2f\n", area);
         break;
      case 2:
         printf("Enter Length and Breadth:\n");
         scanf("%f %f", &length,&breadth);
         area = breadth * length;
         printf("Area of the Rectangle = %.2f\n", area);
         break;
      case 3:
         printf("Enter the Base and Height:\n");
         scanf("%f %f", &base, &height);
         area = 0.5 * base * height;
         printf("Area of the Triangle = %.2f\n", area);
         break;
      case 4:
         printf("Enter the Radius: ");
         scanf("%f", &radius);
         area = 3.142 * radius * radius;
         printf("Area of the Circle = %.2f\n", area);
         break;
      default:
         printf("Error in Shape code\n");
         break;
   }
   return 0;
}
