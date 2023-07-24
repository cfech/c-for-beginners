#include <stdio.h>

int main() {
    double width = 10;
    double height = 10;

    printf("Please enter a width\n");

    scanf("%lf", &width);

    printf("Please enter a height \n");
    scanf("%lf", &height);

    double perimeter = (height + width) *2;
    double area = width * height;

    printf("The perimeter of the rectangle is %.2lf \n", perimeter);
    printf("The area of the rectangle is %.2lf \n", area);

    return 0;
}
