#include "Source/Carray.h"
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    Simple_Array_C Carray_c;

    Init_Carray(&Carray_c);
    {
        char p[] = "ABCDEFGHJKLMN";
        for (char i : p) {
            Add_Carray(&Carray_c, i);
            printf("P = %c \r\n", i);
        }

        printf("Carray_c->Data = %s", Carray_c.Data);
    }
    Printf_Carray(&Carray_c);

    Destroy_Carray(&Carray_c);

    return 0;
}
