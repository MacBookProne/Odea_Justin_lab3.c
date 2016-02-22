#include <stdio.h>
#include <math.h>
#include <stdbool.h>

enum Menu_t{ //enums are easy now that i understand them.
    Sine, Cosine, Tangent, QUIT
};

const float PI = 3.14159; // constant that has PI   also a float so it has decimals
const int  loop_limit = 90; // loop limit of 90





int main() { // main method

    bool done = false; //boolean comapring true and false
    while (!done) {
        printf("Please choose an option: (0) Sine (1) Cosine (2) Tangent (3) QUIT\n"); //print statement to choose opt
        printf("Enter your choice > "); //enter your choice printf
        unsigned input;
        scanf("%u", &input);   //gives all the postive #'s to 4 billion
        switch (input) {
            case Sine: // case 1
                for(int i =0; i <= loop_limit; i=i + 15){
                    printf("\tsin(%d) = %4f\n", i , sin(PI*i/180.0f));
                }
                break; //breaks here
            case Cosine: //case 2
                for(int i =0; i <= loop_limit; i=i + 15) {
                    printf("\tcos(%d) = %4f\n", i, cos(PI * i / 180.0f)); //this took some serious brain power
                }
                break; //breaks here
            case Tangent:
                for(int i =0; i <= loop_limit; i=i + 15) {
                    if(i==90)
                        printf("\ttan(90) is UNDEFINED\n");  //90 is undefined because it is huge
                    else
                        printf("\ttan(%d) = %4f\n", i, tan(PI * i / 180.0f)); //tan is computed
                }
                break; //breaks again
            case QUIT:
                done = true;
                printf("You chose QUIT. Thank you, come again!\n"); //print that you have quit
                break; //breaks again
            default:
                printf("%d is an invalid option. Please try again.\n", input);  //print is invlaid
        }
    }

        return 0;
    }

