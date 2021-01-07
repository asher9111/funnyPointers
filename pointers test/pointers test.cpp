

#include <iostream>
#include <windows.h>
#include "human.h"
#include "killer.h"
#include "respawner.h"


int main()
{
    std::cout << "init human\n";


    human *Ptr1 = new human;
    Ptr1->yell();

    Killer* K = new Killer;
    Respawner* R = new Respawner;



    std::cout << "cycle starts \n";

    while (1)
    {
        K->kill(Ptr1);

        R->spawn(Ptr1);

        std::cout << "after resp \n";
        Ptr1->yell();

        system("PAUSE");
    }



}

