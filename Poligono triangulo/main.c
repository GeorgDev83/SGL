/****
    SGL Baseline environment as extracted from XL2's Sonic Z-Treme
****/

//  Include
#include "sgl.h"

extern PDATA PD_CUADRADO;
extern PDATA PD_TRIANGULO;

//  Functions
int main(void)
{
    /*
        Main Program

        Game starts here
    */
    static ANGLE ang[XYZ];
    static FIXED pos[XYZ];

    //  Initialize Systems
    slInitSystem(TV_320x224, NULL, 1);

    ang[X] = ang[Y] = ang[Z] = DEGtoANG(0.0);
    pos[X] = toFIXED(0.0);
    pos[Y] = toFIXED(0.0);
    pos[Z] = toFIXED(220.0);

    //  Start Main Game Loop
    while (1)
    {
        //  Hello World
        slPrint("Hola Saturn!", slLocate(0, 0));
        slPrint("soy tu nuevo Dev,", slLocate(0, 1));
        slPrint("me llamo George.", slLocate(0, 2));

        // Dibujo un cuadrado verde
        slPushMatrix();
        {
            slTranslate(pos[X], pos[Y], pos[Z]);
            slRotX(ang[X]);
            slRotY(ang[Y]);
            slRotZ(ang[Z]);
            slPutPolygon(&PD_CUADRADO);
        }
        slPopMatrix();

        slSynch();
    }

    //  End Program
    return 0;
}
