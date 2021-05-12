//
// Created by TXSGY on 2021/5/12.
//

#ifndef GITTEST_CARRAY_STRUCT_H
#define GITTEST_CARRAY_STRUCT_H

typedef struct Carray {
    int Size;           //当前数组真实数量
    int Max_Size;       //预先分配的最大尺寸

    char *Data;         //具体数据
} Simple_Array_C;


#endif//GITTEST_CARRAY_STRUCT_H
