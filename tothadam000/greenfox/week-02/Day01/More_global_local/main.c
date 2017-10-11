#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tom, Mark and Jerry went to the supermarket
//help them decide what can they buy out of their money

int tom_money = 2000;
int mark_money = 3500;
int jerry_money = 1200;

int all_money()
{
    int tmj_money = tom_money + mark_money + jerry_money;
    return tmj_money;
}
void can_they_buy_a_new_tv()
{
    int tv_price = 6950;
    if (tv_price < all_money()){
        printf ("You can buy the TV, and you still have %d Ft. \n", tv_price - all_money());
    }else {
        printf("You need %d money to buy the tv. \n", tv_price - all_money());
        }
        return;

    //if they can, the program should write out that how much
    //money they have after they bought the tv
    //if they can't tell, how much money they need to buy it
}

void can_they_make_a_cake()
{
    int milk = 200;
    int chocolate = 340;
    int flour = 75;
    int egg = 345;
    int sugar = 160;
    int salt = 90;
    int oven_shape = 330;
    int cream = 220;
    int cake_price = milk + chocolate + flour + egg + sugar + salt + oven_shape + cream;
    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally

    if (all_money() > cake_price){
        int shared_bill = cake_price / 3;
        printf("the bill/person: %d \n", shared_bill);
    }
    return;

}

void can_they_make_ham_and_eggs()
{
    int milk = 200;
    int egg = 345;
    int salt = 90;
    int ham = 450;
    int onion = 60;
    int spice = 25;
    int ham_and_eggs_price = milk + egg + salt + ham + onion + spice;
    //if they can buy all these stuff calculate how much
    //each of them should pay to share the bill equally
    if (all_money() > ham_and_eggs_price){
        int shared_bill = ham_and_eggs_price / 3;
        printf("the bill/person: %d \n", shared_bill);
    }
    return;

}

//is there any local or global variables we did not use well?
//are we using functions correctly?

int main()
{
     can_they_buy_a_new_tv();
     can_they_make_a_cake();
     can_they_make_ham_and_eggs();

	return 0;

}
