//Write a program to demonstrate the swapping the fields of two structures using pointers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    int car_price;
    char car_name[50];
};
void swap_fields(struct car *john,struct car *om)
{
    char temp[50];
    strcpy(temp, john->car_name);
    strcpy(john->car_name, om->car_name);
    strcpy(om->car_name, temp);

    int var = john->car_price;
    john->car_price = om->car_price;
    om->car_price = var;


}
int main()
{
    struct car john,om;
    john.car_price=1000;
    strcpy(john.car_name, "Toyota");
    om.car_price = 5000;
    strcpy(om.car_name, "Volkswagen");
    printf("john car price :%d\n",john.car_price);
    printf("john car name :%s\n",john.car_name);
    printf("om car price :%d\n",om.car_price);
    printf("om car name:%s",om.car_name);
    swap_fields(&john,&om);
    printf("after swapping\n");
    printf("john car price :%d\n",john.car_price);
    printf("john car name :%s\n",john.car_name);
    printf("om car price :%d\n",om.car_price);
    printf("om car name:%s",om.car_name);
    
}
