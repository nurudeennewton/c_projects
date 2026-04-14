#include<stdio.h>
#include<math.h>
int main(){
    double radius;
    const double PI = 3.14251;
    double area;
    double volume ;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    printf("The area of the circle is %.3lf\n", area);

    volume = 4/3 * PI * pow(radius, 3);
    printf("The volume of the sphere of radius %.3lf is %.4lf", radius, volume);

    return 0;
}