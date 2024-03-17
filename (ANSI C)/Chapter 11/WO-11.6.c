#include<stdio.h>
struct stores
{
    char name[20];
    float price;
    int quantity;
};
struct stores update(struct stores product,float p,int q)
{
    product.price+=p;
    product.quantity+=q;
    return product;
};
float mul(struct stores val)
{
    return (val.price*(float)val.quantity);
}
int main(void)
{
    float p_increment,value;
    int q_increment;
    struct stores item= {"XYZ",25.75,12};

    printf("Enter increment values: \n");
    printf("Price increment and quantity increment :\n");
    scanf("%f%d",&p_increment,&q_increment);

    item=update(item,p_increment,q_increment);

    printf("\nUpdated value of item: \n\n");
    printf("Name = %s\nPrice = %f\nQuantity = %d\n",item.name,item.price,item.quantity);

    value=mul(item);
    printf("\nValue of the item = %f\n",value);
}
