#include"stdio.h"
#inlcude"string.h"
#inlcude"conio.h"

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




