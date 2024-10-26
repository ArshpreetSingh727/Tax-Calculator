#include <stdio.h>

int main()
{
    int itemtyp,price,qty;
    float taxper,finalamt;
    printf("Item_type   Item\n");
    printf("1.          Ball pen\n");
    printf("2.          pencil\n");
    printf("3.          Notebook\n");
    printf("Enter item type(1/2/3):  \n");
    scanf("%d",&itemtyp);
    printf("Enter qty:  \n");
    scanf("%d",&qty);    
    
    if(itemtyp == 1){
        taxper=0.10;
        price=20;
        finalamt=qty*price*(1+ taxper);
        printf("Tax per item: %.2f%%\n",taxper*100);
        printf("Price of item:  %d\n",price);
        printf("Final bill is: Rs%.2f\n",finalamt);    
               
    }
    else if(itemtyp == 2){
        taxper=0.13;
        price=35;
        finalamt=qty*price*(1+ taxper);
        printf("Tax per item: %.2f%%\n",taxper*100);
        printf("Price of item:  %d\n",price);
        printf("Final bill is: Rs%.2f\n",finalamt); 

    }
    else if(itemtyp == 3){
        taxper=0.17;
        price=100;
        finalamt=qty*price*(1+ taxper);
        printf("Tax per item: %.2f%%\n",taxper*100);
        printf("Price of item:  %d\n",price);
        printf("Final bill is: Rs%.2f\n",finalamt); 

    }
    else{
        printf("Invalid input !! \n");        
    }
        
    return 0;
}   