#include "simc.h"
#include <iostream>

using namespace std;

int main()
{
    pfacility f1, f2, f3;
    pqueue q1, q2;
    initlist(100);
    starttrace();
    initcreate(1, 0);
    initcreate(8, 0);
    initcreate(1, 180); trans->prty = 1;

    newfac(f1, "№1");
    newfac(f2, "№2");
    newfac(f3, "№3");
    newqueue(q1, "Таврії");
    newqueue(q2, "Мерседеси");

    while(systime < 660){
        plan();
        switch (sysevent)
        {
        case 1: create(5); trans->prty = 2; break;
        case 2: inqueue(q1); break;
        case 3: seize(f1); break;// systime = 180 too 103
        case 4: outqueue(q1); break;
        case 5: delayt(7); break;
        case 6: outfac(f1); break;
        case 7: destroy(); break;

        case 8: create(60); break;
        case 9: inqueue(q2); break;
        case 10: seize(f2); break;
        case 11: outqueue(q2); break;
        case 12: delayt(10); break;
        case 13: outfac(f2); break;
        case 14: destroy(); break;
        }
    }
    printall();
    return 0;
}
