//
// Created by TXSGY on 2021/5/12.
//

#ifndef GITTEST_CARRAY_H
#define GITTEST_CARRAY_H

#include "Carray_Struct.h"

//结构体初始化
void Init_Carray(Simple_Array_C *Carray);

//结构体删除
void Destroy_Carray(Simple_Array_C *Carray);

//添加结构体内部数据char
void Add_Carray(Simple_Array_C *Carray, char In_Data);

//打印结构体数据函数
void Printf_Carray(Simple_Array_C *Carray);


#endif//GITTEST_CARRAY_H
