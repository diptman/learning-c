#include <stdio.h>

int main () {
float l , b , r , rec_area , rec_perimeter , cir_area , cir_perimeter;
printf(" === Enter the details to calculate the arear and perimeter of Rectangle ==== \n") ; 
printf("Enter the length of rectangle ::");
scanf("%f", &l);
printf("Enter the breadth of rectangle ::");
scanf("%f", &b);
// Calculations for rectangle
rec_area =l*b ; 
printf("Area of rectangle :: %f\n", rec_area) ; 
rec_perimeter = 2*(l+b);
printf("Perimeter of rectangle :: %f\n", rec_perimeter);
// Calculation for circle
printf(" === Enter the details to calculate the arear and perimeter of Circle ====\n") ;
printf("Enter the radius of circle ::");
scanf("%f", &r);
cir_area = 3.14f*r*r ; 
cir_perimeter = 2*3.14f*r ; 
printf("area of circle :: %f \n" , cir_area);
printf("Perimeter of circle ::%f \n", cir_perimeter); 
return 0;
}