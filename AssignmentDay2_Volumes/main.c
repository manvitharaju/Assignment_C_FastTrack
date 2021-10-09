#include <stdio.h>
#include <stdlib.h>



int cube(int edge);
int cuboid(int length,int breadth,int height);
float cyclinder(float r,float h);
float sphere(float radius);
float cone(float r,float h);

int main()
{
    int ch,edge;//cube
    int length,breadth,height;//cuboid
    float r,h;//cyclinder//cone
    float radius;//sphere
    do{
        printf("\n Enter your choice:");
        printf("\n  1.Volume of cube ");
        printf("\n  2.Volume of cuboid ");
        printf("\n  3.Volume of cyclinder ");
        printf("\n  4.Volume of Sphere ");
        printf("\n  5.Volume of cone ");
        printf("\n 6.Exit \n");
        scanf("%d",&ch);
        if(ch==6)
        {
            break;
        }
        switch(ch)
        {
            case 1: printf("\n enter the edge length of cube: ");
                    scanf("%d",&edge);
                    printf("\n The volume of cube is:%d ",cube(edge));
                    break;
            case 2: printf("\n enter the length,breadth,height of cuboid: ");
                    scanf("%d%d%d",&length,&breadth,&height);
                    printf("\n The volume of cuboid is:%d ",cuboid(length,breadth,height));
                    break;
            case 3: printf("\n enter the radius,height of cyclinder: ");
                    scanf("%f%f",&r,&h);
                    printf("\n The volume of cyclinder is:%f ",cyclinder(r,h));
                    break;
            case 4: printf("\n enter the radius of sphere: ");
                    scanf("%f",&radius);
                    printf("\n The volume of sphere is:%d ",sphere(radius));
                    break;
            case 5: printf("\n enter the radius,height of cone: ");
                    scanf("%f%f",&r,&h);
                    printf("\n The volume of coneis:%f ",cone(r,h));
                    break;
            case 6:
                    break;

            default:printf("\n Wrong choice!");
        }
    }while(ch!=6);
    return 0;
}



int cube(int edge){
    return (edge*edge*edge);
}

int cuboid(int length,int breadth,int height){
    return (length*breadth*height);
}

float cyclinder(float r,float h){
    return (3.14*r*r*h);
}

float sphere(float radius){
    return ((4*3.14*radius*radius*radius)/3);
}

float cone(float r,float h){
    return ((3.14*r*r*h)/3);
}
