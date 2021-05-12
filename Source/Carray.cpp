//
// Created by TXSGY on 2021/5/12.
//
#include "Carray.h"
#include "assert.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

void Init_Carray(Simple_Array_C *Carray) {
    Carray->Size = 0;
    Carray->Max_Size = 10;//预先分配最大尺寸为10

    Carray->Data = (char *) malloc(Carray->Max_Size * sizeof(char));

    memset(Carray->Data, 0, Carray->Max_Size);
}
void Destroy_Carray(Simple_Array_C *Carray) {
    assert(Carray);
    free(Carray->Data);
}
void Add_Carray(Simple_Array_C *Carray, const char In_Data) {
    if (Carray->Size >= Carray->Max_Size) {
        Carray->Max_Size += 10;
        // Carray->Data = (char *) realloc(Carray->Data, Carray->Max_Size * sizeof(char));
        char *Test = (char *) malloc(Carray->Max_Size * sizeof(char));
        memcpy_s(Test, 10, Carray->Data, 10);
        free(Carray->Data);
        Carray->Data = Test;
    }

    Carray->Data[Carray->Size] = In_Data;
    Carray->Size++;
}
void Printf_Carray(Simple_Array_C *Carray) {

    assert(Carray);

    printf("Size = %d , Max_Size = %d , Data = %s \r\n",Carray->Size,Carray->Max_Size,Carray->Data);
}
