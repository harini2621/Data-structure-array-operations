#include<stdio.h>
#define MAX 50
int arr[MAX],num,pos,loop,element;
void insert()
{
printf("Enter the position:");
scanf("%d",&pos);
if(pos<1 || pos>num+1)
{
    printf("Invalid insertion");
}
else{
    printf("Enter the element to be inserted:");
    scanf("%d",&element);
    for(int i=num;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    num++;
    printf("Array after insertion is:");
    for(int i=0;i<num;i++)
        {
        printf("%d ",arr[i]);
    }
}
}
void deletion()
{
printf("Enter the position:");
scanf("%d",&pos);
if(pos<1 || pos>num+1)
{
    printf("Invalid position");
}
else{
    for(int i=pos-1;i<num-1;i++)
    {
        arr[i]=arr[i+1];
    }
    num--;
    printf("Array after deletion is:");
    for(int i=0;i<num;i++)
        {
        printf("%d ",arr[i]);
    }
}
}
void display()
{
for(int i=0;i<num;i++)
{
printf("%d ",arr[i]);
}
}
void search()
{
int key_element;
printf("Enter the key element:");
scanf("%d",&key_element);
for(int i=0;i<num;i++)
{
if(arr[i]==key_element){
printf("Element found");
break;
}
}
}
int main()
{
int choice;
printf("Enter the number of elements to be used:");
scanf("%d",&num);
printf("Enter the elments:");
for(loop=0;loop<num;loop++)
{
scanf("%d",&arr[loop]);
}
do
{
printf("-------------MENU------------\n");
printf("1.Insert\n");
printf("2.Deletion\n");
printf("3.Search\n");
printf("4.Display\n");
printf("5.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();break;
case 2:deletion();break;
case 3:search();break;
case 4:display();break;
case 5:printf("Exiting the program");break;
default:printf("invalid choice");
}
}
while(choice !=5);
return 0;
}
