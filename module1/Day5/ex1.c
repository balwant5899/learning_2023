//Use structures to find the volume and the total surface area of the box.
#include<stdio.h>
struct Box
{
    double length;
    double width;
    double height;

};
double calculatesurfacearea(struct Box *b1)
{
    double surfacearea=2*(b1->length*b1->height+b1->length*b1->width+b1->width*b1->height);
    return surfacearea;
}
double find_volume(struct Box b1)
{
    return b1.length*b1.height*b1.width;
    
}
int main()
{
    struct Box b1;
    b1.length=4.0;
    b1.width=5.0;
    b1.height=6.0;
    double volume= find_volume(b1);
    double surface_area=calculatesurfacearea(&b1);
    printf("volume is %.2f\n",volume);
    printf("surfacearea is%.2f ",surface_area);

}
