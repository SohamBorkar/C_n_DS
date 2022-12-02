
#include<stdio.h>
float area(float radius,float pie);
float diameter(float radius);
float circamphrance(float radius,float pie);
int main()
{
    float input,pie=(float)22/7;
    char a;
    printf("\nPress what you know, 'r' for radius & 'd' for diameter: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'r':
        printf("Enter the radius: ");
        scanf("%f",&input);
        printf("\nDiameter of a circle is: %.2f units\n",diameter(input));
        printf("Circamphrance of a circle is: %.2f units\n",circamphrance(input,pie));
        printf("Area of a circle is: %.2f units\n",area(input,pie));
        break;
    case 'd':
        printf("Enter the diameter: ");
        scanf("%f",&input);
        input=input/2;
        printf("\nRedius of a circle is: %.2f units\n",input);
        printf("Circamphrance of a circle is: %.2f units\n",circamphrance(input,pie));
        printf("Area of a circle is: %.2f units\n",area(input,pie));
        break;
    default:
        printf("\nplease enter the valid value.\n");
        break;
    }
    return 0;
}


float area(float radius,float pie){
    return pie*(radius*radius);
}
float diameter(float radius){
    return (radius*2);
}
float circamphrance(float radius,float pie){
    return 2*pie*radius;

}

