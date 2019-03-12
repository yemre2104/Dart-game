#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
char func1()
{

    int segment = rand() % 3 + 1;
    char c1 = 'S';
    char c2 = 'D';
    char c3 = 'T';
    char str[4];
    str[0] = c1;
    str[1] = c2;
    str[2] = c3;
    if (segment == 1)
    {
        char cp = str[0];

        return cp;
    }
    else if (segment==2)
    {   char cp = str[1];
        return cp;
    }
    else if(segment==3)
    {
        char cp = str[2];
        return cp;
    }

}

int func2()
{

    int point = rand() % 22 + 1;
    return point;
}

int main()
{
    srand(time(NULL));
    int result = 301;
    printf("Points: %d\n",result);
    while(0<result)
    {
        int point0 = func2();
        char segment0 = func1();
        printf("Throw: %d  %c\n",point0,segment0);
        if (segment0 == 'S') {
            result = result - point0;
            printf("Points: %d\n",result);
            while (0<result) {
                int point = func2();
                char segment = func1();
                if (point < 20) {
                    if (segment == 'S') {
                        result = result - (point * 1);
                    } else if (segment == 'D') {
                        result = result - (point * 2);
                    } else if (segment == 'T') {
                        result = result - (point * 3);
                    }
                    if(0<=result){printf("Throw: %d  %c\n", point, segment);}

                }
                if (point == 21) {
                    result = result - 25;
                    if(0<=result){printf("Throw: O\n");}
                }
                if (point == 22) {
                    result = result - 50;
                    if(0<=result){printf("Throw: I\n");}
                }
                if (0<result){
                    printf("Points: %d\n", result);
                }
                if(result<0)
                {
                    if(point < 20) {
                        printf("Throw: %d  %c\n", point, segment);
                        if (segment == 'S') {
                            result = result + (point * 1);
                        } else if (segment == 'D') {
                            result = result + (point * 2);
                        } else if (segment == 'T') {
                            result = result + (point * 3);
                        }


                    }
                    if (point == 21) {
                        printf("Throw: O\n");
                        result = result + 25;

                    }
                    if (point == 22) {
                        printf("Throw: I\n");
                        result = result + 50;

                    }
                    printf("Points: %d\n",result);

                    if (result==0)
                    {

                        break;

                    }
                }
            }
        }
    }

    printf("Points: 0\n");



}


