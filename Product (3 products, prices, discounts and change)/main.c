//If orders reach 20, discount will be 10%
//if orders reach 10, then discount will be 5%
    //Enter your pen type
    // enter your pen order
    // enter your amount
    //summary
    // total cost
    //discount
    //discounted price
    //change :
#include <stdio.h>
int main() {
    float orders,amount,cost, disc=0, disprice=0, change;
    int type;
    float firstPen=15.00,secPen=22.50,pen3= 13.00;

//prints the available products and their respective prices.
        printf("Ballpens ni iban!\n");
        printf("[1] Flex @ Php %.2f\n", firstPen);
        printf("[2] Gen3 @ Php %.2f\n", secPen);
        printf("[3] Titus @ Php %.2f\n", pen3);

//user inputs the type (integer)
        printf("Enter Pen type: ");
            scanf("%d", &type);

//determines if the pen type is appropriate or not.
// if not user inputs again.
    if (type < 4 && type > 0) {
        printf("Enter pen orders: ");
        scanf("%f", &orders);
        printf("Enter your amount(money): ");
        scanf("%f", &amount);
    } else {
        printf("Invalid pen type.");
        return 0;
    }

    //switch case to determine which pen type is chosen.
    switch (type){
        case 1:
                cost=firstPen * orders;
                break;
        case 2:
                cost = secPen * orders;
                break;
        case 3:
                cost=pen3*orders;
                break;
//If pen type is invalid, the user type will input agian
//If orders reach 20, discount will be 10%
//if orders reach 10, then discount will be 5%
    }
    if (orders >= 20){
        disc = cost * 0.1;
    } else if (orders >= 10){
        disc = cost * 0.05;
}
    printf("\nTOTAL SUMMARY");
    printf("\n-------------------------------\n");

    printf("Total Cost: %.2f\n", cost);
    printf("Discount: %.2f\n", disc);
//solves for the change
    change = amount - cost;

//performs this task if there is a discounted price.
    if (disc  > 0){
        disprice = cost - disc;
        change = amount - disprice;
        printf("Discounted Price: %.2f\n", disprice);
    }
//determines if the change is positive or negative.
    if (change >= 0) {
        printf("Change: Php %.2f\n", change);
    } else if (change < 0) {
        printf("Change: Php %.2f\n", change);
}
return 0;
}
