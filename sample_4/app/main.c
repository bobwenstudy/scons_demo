#include <stdio.h>
#include "module1.1.h"
#include "module1.2.h"
#include "module2.1.h"
#include "module2.2.h"
#include "driver1.1.h"
#include "driver1.2.h"
 
int main(void)
{
    printf("module test:%d,%d,%d,%d\n",
        module11_test(),
        module12_test(),
        module21_test(),
        module22_test() );
    printf("driver test:%d,%d\n",driver11_test(),driver12_test());
 
    return 0;
}