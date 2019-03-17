#include "stdafx.h"
#include "string_demo.h"

using namespace std;

string_demo::string_demo(void)
{
}

string_demo::~string_demo(void)
{
}

void string_demo::initialize()
{
	std::string s1 = "tytest"; 
	string s2(s1);   //深拷贝
	string s3 = s2;  //深拷贝
	string s4("tytest");
	string s5(5,'a');
	string s6 = string(5,'c'); //深拷贝
	string s7(s1,3);   //s1的第三个字符开始到末尾
	string s8(s1,2,2); //s1的第二个字符开始长度为2的字符串
	s1.~string();  //析构
	return;
}

void string_demo::ToCString()
{
	string str("abcd转换");
	const char* sz = str.c_str(); //返回一个以‘\0’结尾的字符数组
	const char* sz2 = str.data(); //以字符数组的形式返回字符串内容，但并不添加’\0’
	
	int nLength = str.length();
	char* sz3 = new char[nLength+1];
	sz3[nLength] = '\0';
	str.copy(sz3,nLength);		 //深拷贝，数组末尾不添加‘\0’
	str = "efgh";				 //c_str 和 data的值会改变
	return;
}

void string_demo::strUpdate()
{
	
	//赋值 =、assign
	string str = "abcd赋值";
	string str1 = str;
	string str2;
	str2.assign(str);
	str2.assign("assign",4);
	str2.assign(str,3,string::npos);
	str2.assign(str,3,2); 
	str2.assign(5,'c');

	//清空 clear、erase
	str = "";
	str1.clear();
	str2.erase();

	str1 = "12";
	str2 = "34abc";
	//末尾添加 +、ppend、push_back
	str1 += str2;
	str1  += 'a';  //添加一个字符
	str1.append(str2);
	str1.append(str2,1,3);
	str1.append(str2,2,string::npos);
	str1.append(5,'c');
	str1.push_back('d');  //该函数只能添加单个字符

	//中间位置插入 insert
	str1 = "12345";
	str2 = "abcd";
	str1.insert(0,"my");
	str1.insert(str1.length(),"end");
	str1.insert(1,str2);
	str1.insert((string::size_type)0,1,'j'); //插入单个字符
	
	//替换
	str1 = "123abc";
	str1.replace(1,2,"replace");
	
	//删除
	str1 = "123abc";
	str1.erase(1);
	str1 = "123abc";
	str1.erase(1,2);
	
	//ty_todo 替换字符串中所有指定字符
	return;
}

void string_demo::strSubString()
{
	string str = "abc123";
	
	//元素提取
	char a = str[2];
	char b = str.at(3);

	//子字符串提取
	string strSub1 = str.substr();
	string strSub2 = str.substr(1);
	string strSub3 = str.substr(2,3);
	
	return;
}

void string_demo::strCompare()
{
	string str = "abc123";
	string str1 = "abc321";

	bool bIsEqual = (str == str1);
	int nRet = str.compare(str);
	nRet = str.compare(str1);
	nRet = str.compare(0,3,str1,0,3);
	nRet = str.compare(0,3,"ab1",2);

	return;
}

void string_demo::strSearch()
{
	string str = "abc123233";
	string strSub = "bc";

	int nIndex = str.find("bc");
	nIndex = str.find("no");
	nIndex = str.find("3",0,2);   //从"ab"中搜索
	nIndex = str.rfind("33");
	nIndex = str.find_first_of("23");
	nIndex = str.find_first_not_of("abc");
	nIndex = str.find_last_of("23");
	nIndex = str.find_last_not_of("3");

	return;
}