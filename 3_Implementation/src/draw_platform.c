#include"headers.h"
char* draw_platform(int numLives)
{

    char *platform[]={

                     "      ===\n",

                     "        |\n"
                     "        |\n"
                     "        |\n"
                     "       ===\n",

                     "   =====|\n"
                     "        |\n"
                     "        |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "        |\n"
                     "        |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     "        |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     "  |     |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     "  |-    |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     " -|-    |\n"
                     "        |\n"
                     "       ===\n",

                     "  |=====|\n"
                     "  O     |\n"
                     " -|-    |\n"
                     "  |     |\n"
                     "       ===\n",

                     "   |=====|\n"
                     "   O     |\n"
                     "  -|-    |\n"
                     "  //     |\n"
                     "       ===\n"

    };

    switch(numLives)
    {
    case 9:
        return( platform[0]);
        break;
    case 8:
        return(platform[1]);
        break;
    case 7:
        return(platform[2]);
        break;
    case 6:
        return(platform[3]);
        break;
    case 5:
        return(platform[4]);
        break;
    case 4:
        return(platform[5]);
        break;
    case 3:
        return(platform[6]);
        break;
    case 2:
        return(platform[7]);
        break;
    case 1:
        return(platform[8]);
        break;
    case 0:
        return(platform[9]);
        break;
    }
}