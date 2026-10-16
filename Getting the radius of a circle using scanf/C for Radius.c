#include<stdio.h>
main()
{
    float radius, area;
    //Asking for user input
    printf("Enter the radius of the circle: ");
    //Reading the radius input from the user
    scanf("%f", &radius);
    //calculating the area of the circle
    area = 3.14 * radius * radius;
    //Displaying the result
    printf("The area of the circle is: %f", area);
    return area;
}
