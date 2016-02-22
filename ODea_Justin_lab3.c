#include <stdio.h>
#include <math.h>
#include <stdbool.h>

# define PI 3.14159
# define loop_limit 90

//created by Justin M O'Dea
// Feb 20, 2016


bool done = false;
unsigned input;

enum menu_t {
    Sine, Cosine, Tangent, QUIT
};

void list(void) // Prints menu
{
    printf("Please choose an option: (0) Sine (1) Cosine (2) Tangent (3) QUIT\n");
    printf("Enter your choice: ");

} // end menu method

int tally() // tallies sin, cos, tan, and terminates after three is typed.
{
    while (!done) {
        scanf("%u", &input);
        switch (input) {
            case Sine:

                for (int i = 0; i <= loop_limit; i = i + 15) {
                    printf("\tsin(%d) = %2f\n", i, sin(PI * i / 180.0f)); // calculates sin
                }
                list();
                break;
            case Cosine:

                for (int i = 0; i <= loop_limit; i = i + 15) {
                    printf("\tcos(%d) = %2f\n", i, cos(PI * i / 180.0f)); // calculates cos
                }
                list();
                break;
            case Tangent:

                for (int i = 0; i <= loop_limit; i = i + 15) {
                    if (i == 90)
                        printf("\ttan(90) is UNDEFINED\n");
                    else
                        printf("\ttan(%d) = %2f\n", i,
                               tan(PI * i / 180.0f)); // calculates tan
                }
                list();
                break;
            case QUIT:
                done = true;
                printf("You chose QUIT. Thank you, come again!\n"); // quits and terminates
                break;
            default:
                printf("%d is an invalid option. Please try again.\n",
                       input); // invalid option method

        } // end switch
    } // end while
} // end calculate method


int main()  // main method
{
    list(); // Prints main menu.
    while (!done)
    {
        tally(input); // Calculates and prints sin, cos, tan, and quit.
    } // end while

    return 0;
} // end main
