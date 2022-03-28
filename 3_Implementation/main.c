#include"stdio.h"
#include"string.h"
#include"conio.h"

struct order{
    int order_number;
    int number_of_plant;
    int cost;
}p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;
int order ()
{
    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_plant = n;
    p[order_count].cost = 0;
    p[order_count].number_of_plant = 0;
    level:
    printf("How many items you want to order? ");
    scanf("%d", &n);
    getchar ();
    while (n--){
        printf("\nEnter chosen item code\n");
        scanf("%d", &in);
        getchar();
        switch(in){
    case 11 : {
        printf("Enter the Herbs: 1.Basil  2.Dill 3.Mint 4.Rosemary 5.Cilantro\n");
        int i;
        scanf("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
        if (i==1) p[order_count].cost += (130*qu);
        else if (i==2) p[order_count].cost += (275*qu);
        else if (i==3) p[order_count].cost += (175*qu);
        else if (i==4) p[order_count].cost += (375*qu);
        else p[order_count].cost += (180*qu);
        break;
    }
    case 12 :{
        printf("Enter the Shrubs: 1.Croton  2.Lemon 3.Tulsi 4.Heena mehndi 5.China rose\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
            if (i==1) p[order_count].cost += (750*qu);
        else if (i==2) p[order_count].cost += (975*qu);
        else if (i==3) p[order_count].cost += (375*qu);
        else if (i==4) p[order_count].cost += (675*qu);
        else  p[order_count].cost += (150*qu);
        break;
    }
    case 13 :{
        printf("Enter the Trees: 1. Mango  2.Neem  3.Banyan 4.Palm 5.Coconut\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
        if (i==1) p[order_count].cost += (185*qu);
        else if (i==2) p[order_count].cost += (175*qu);
        else if (i==3) p[order_count].cost += (155*qu);
        else if (i==4) p[order_count].cost += (275*qu);
        else  p[order_count].cost += (190*qu);
        break;
    }
    case 14 :{
        printf("Enter the Climbers: 1.Sweet gourd 2.Aparajita 3.Flame Plant 4.Money plant 5.Star Jasmine\n");
        int i;
        scanf("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
        if (i==1) p[order_count].cost += (270*qu);
        else if (i==2) p[order_count].cost += (620*qu);
        else if (i==3) p[order_count].cost += (280*qu);
        else if (i==4) p[order_count].cost += (140*qu);
        else  p[order_count].cost += (230*qu);
        break;
    }
    case 15 :{
        printf("Enter the Creepers: 1.Watermelon 2.Pumpkin 3.Cucumber 4.Musk melon 5.Bottle ground \n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
        if (i==1) p[order_count].cost += (130*qu);
        else if (i==2) p[order_count].cost += (235*qu);
        else if (i==3) p[order_count].cost += (175*qu);
        else if (i==4) p[order_count].cost += (555*qu);
        else p[order_count].cost+=(230*qu);
        break;
    }
    case 16 :{
        printf("Enter the Water plants: 1.Water Hyacinth 2.Lotus 3.Trapa 4.Water Lilly 5.Hydrilla\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
        if (i==1) p[order_count].cost += (120*qu);
        else if (i==2) p[order_count].cost += (295*qu);
        else if (i==3) p[order_count].cost += (285*qu);
        else if (i==4) p[order_count].cost += (165*qu);
        else p[order_count].cost += (240*qu);
        break;
    }
    case 17 : {
        printf("Enter the Wild plants: 1.Datura 2.Nagfani 3.Madar 4.Satyanashi 5.Marua \n");
         int i;
        scanf("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
        if (i==1) p[order_count].cost += (220*qu);
        else if (i==2) p[order_count].cost += (375*qu);
        else if (i==3) p[order_count].cost += (175*qu);
        else if (i==4) p[order_count].cost += (205*qu);
        else p[order_count].cost += (240*qu);
        break;
    }
    case 18 : {
        printf("Enter  the Seeds: 1.Sunflower  2.Rice 3.Peas 4.Bean 5.Corn\n");
        int i;
        scanf("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
        if (i==1) p[order_count].cost += (120*qu);
        else if (i==2) p[order_count].cost += (195*qu);
        else if (i==3) p[order_count].cost += (110*qu);
        else if (i==4) p[order_count].cost += (390*qu);
        else p[order_count].cost += (265*qu);
        break;
    }
    case 19 : {
        printf("Enter the Organic Fertilizers: 1.Kelp 2.Cow dung manure 3.Alfalfa meal 4.Limestone 5.Chicken manure \n");
        int i;
        scanf("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
        if (i==1) p[order_count].cost += (720*qu);
        else if (i==2) p[order_count].cost += (675*qu);
        else if (i==3) p[order_count].cost += (495*qu);
        else if (i==4) p[order_count].cost += (595*qu);
        else p[order_count].cost += (970*qu);
        break;
    }
    case 20 :{
        printf("Enter the Inorganic Fertilizers: 1.Ammonium nitrate 2.Potassium sulfate 3.Superphosphate 4.Lime 5.Rock\n");
        int i;
        scanf("%d", &i);
        getchar();
        printf("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_plant +=qu;
        if (i==1) p[order_count].cost += (520*qu);
        else if (i==2) p[order_count].cost += (575*qu);
        else if (i==3) p[order_count].cost += (875*qu);
        else if (i==4) p[order_count].cost += (975*qu);
        else p[order_count].cost += (350*qu);
        break;
    }
    default : {
        printf("Invalid selection try again\n");
        n++;
    }
        }
    }
    char temp;
    printf("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf("\nNumber of Plants ordered %d\n", p[order_count].number_of_plant);
    printf("\nThank you for your order. Your bill is %d.\nPlease wait \n\n", p[order_count].cost);
    order_count ++;
}
int receive ()
{
    if (order_count==0){
        printf("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf("All order served\n");
        return;
    }
    printf("Your order is ready\n");
    served_count++;
}
int display ()
{
    printf("Total order taken: %d\n", (order_count));
    printf("Total number of order served %d\n", served_count);
    printf("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf("Current  orders: %d\n\n", p[served_count].order_number);
}
void items ()
{
    printf("....................................................MENU..........................................................\n");
    printf("Item Code   Types                   Plants/seeds/Fertilizers                                     Price\n");
    printf("[11]        Herbs                 Basil/Dill/Mint/Rosemary/Cilantro                              130/275/175/375/180\n");
    printf("[12]        Srubs                 Croton/Lemon/Tulsi/Heena mehndi/China rose                     750/975/375/675/150\n");
    printf("[13]        Trees                 Mango/Neem/Banyan/Palm/Coconut                                 185/175/155/275/190\n");
    printf("[14]        Climbers              Sweet gourd/Aparajita/Flame Plant/Money plant/Star Jasmine     270/620/280/140/230\n");
    printf("[15]        Creepers              Watermelon/Pumpkin/Cucumber/Musk melon/Bottle ground           130/235/175/555/230\n");
    printf("[16]        Water Plant           Water Hyacinth/Lotus/Trapa/Water Lilly/Hydrilla                120/295/285/165/240\n");
    printf("[17]        Wild Plant            Datura/Nagfani/Madar/Satyanashi/Marua                          220/375/175/205/240\n");
    printf("[18]        Seeds                 Sunflower/Rice/Peas/Bean/Corn                                  120/195/110/390/265\n");
    printf("[19]        Organic Fertilizers   Kelp/Cow dung manure/Alfalfa meal/Limestone/Chicken manure     720/675/495/595/970\n");
    printf("[20]        Inorganic Fertilizers Ammonium nitrate/Potassium sulfate/Superphosphate/Lime/Rock    520/575/875/975/350\n");
}
int main ()
{
    printf("\t\t     Welcome To Natural Garden\n");
    while (1){
        printf("1. Order\n2. Serve\n3. Display \n4. Exit \n");
        int in;
        scanf("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                printf("Thank you! Save Trees Save life ");
                return 0;
            }
        }
    }
}

