#ifndef _string_demo_h_
#define _string_demo_h_
#pragma once

class string_demo
{
public:
	string_demo(void);
	~string_demo(void);
public:
	//初始化
	static void initialize();

	//与C字符串转换
	static void ToCString();

	//赋值与更改
	static void strUpdate();

	//提取
	static void strSubString();

	//比较
	static void strCompare();

	//查找
	static void strSearch();

	//输入输出
	static void strInputOutput();

};

#endif