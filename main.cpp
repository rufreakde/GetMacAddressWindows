#include <iostream>
#include "./getwinmac.h"

int main()
{
    char *pMac = getMAC();
    std::cout << pMac << std::endl;
    system("pause");
    free(pMac);
}