#include"headers.h"
int draw_platform(int numLives)
{


    switch(numLives)
    {
    case 9:
        return(0);
        break;
    case 8:
        return(1);
        break;
    case 7:
        return(2);
        break;
    case 6:
        return(3);
        break;
    case 5:
        return(4);
        break;
    case 4:
        return(5);
        break;
    case 3:
        return(6);
        break;
    case 2:
        return(7);
        break;
    case 1:
        return(8);
        break;
    case 0:
        return(9);
        break;
    }
}