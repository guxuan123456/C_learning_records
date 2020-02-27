#pragma once 
// 头文件：coordin.h -- structure templates and function prototypes
//structure templates
//相当于把原来源文件上的哪些定义结构的东西什么的都搬到头文件中，只定义并不写具体实现方式

#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
	double distance;		//距离
	double angle;		//角度
};

struct rect
{
	double x;
	double y;
};

//定义函数

polar rect_to_polar(rect xypos);
void show_polar(polar dpos);


#endif // !COORDIN_H_

