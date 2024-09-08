#include <stdio.h>
#include <math.h>

// Prototypes
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double distance);
double calculateArea(double distance);
double calculateWidth(double x1, double x2);
double calculateHeight(double y1, double y2);

int main(int argc, char **argv) {
    double x1, y1, x2, y2;
    
    // Ask for user input once
    printf("Enter Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Calculate distance
    double distance = calculateDistance(x1, y1, x2, y2);
    
    // Call the required functions with the calculated distance
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(x1, x2);
    calculateHeight(y1, y2);
    
    return 0;
}

double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    return distance;
}

double calculatePerimeter(double distance) {
    double perimeter = 2 * distance;
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    return perimeter;
}

double calculateArea(double distance) {
    double area = pow(distance, 2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    return area;
}

double calculateWidth(double x1, double x2) {
    double width = fabs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    return width;
}

double calculateHeight(double y1, double y2) {
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    return height;
}
