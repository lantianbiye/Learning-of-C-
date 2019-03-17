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
	string s2(s1);   //���
	string s3 = s2;  //���
	string s4("tytest");
	string s5(5,'a');
	string s6 = string(5,'c'); //���
	string s7(s1,3);   //s1�ĵ������ַ���ʼ��ĩβ
	string s8(s1,2,2); //s1�ĵڶ����ַ���ʼ����Ϊ2���ַ���
	s1.~string();  //����
	return;
}

void string_demo::ToCString()
{
	string str("abcdת��");
	const char* sz = str.c_str(); //����һ���ԡ�\0����β���ַ�����
	const char* sz2 = str.data(); //���ַ��������ʽ�����ַ������ݣ���������ӡ�\0��
	
	int nLength = str.length();
	char* sz3 = new char[nLength+1];
	sz3[nLength] = '\0';
	str.copy(sz3,nLength);		 //���������ĩβ����ӡ�\0��
	str = "efgh";				 //c_str �� data��ֵ��ı�
	return;
}

void string_demo::strUpdate()
{
	
	//��ֵ =��assign
	string str = "abcd��ֵ";
	string str1 = str;
	string str2;
	str2.assign(str);
	str2.assign("assign",4);
	str2.assign(str,3,string::npos);
	str2.assign(str,3,2); 
	str2.assign(5,'c');

	//��� clear��erase
	str = "";
	str1.clear();
	str2.erase();

	str1 = "12";
	str2 = "34abc";
	//ĩβ��� +��ppend��push_back
	str1 += str2;
	str1  += 'a';  //���һ���ַ�
	str1.append(str2);
	str1.append(str2,1,3);
	str1.append(str2,2,string::npos);
	str1.append(5,'c');
	str1.push_back('d');  //�ú���ֻ����ӵ����ַ�

	//�м�λ�ò��� insert
	str1 = "12345";
	str2 = "abcd";
	str1.insert(0,"my");
	str1.insert(str1.length(),"end");
	str1.insert(1,str2);
	str1.insert((string::size_type)0,1,'j'); //���뵥���ַ�
	
	//�滻
	str1 = "123abc";
	str1.replace(1,2,"replace");
	
	//ɾ��
	str1 = "123abc";
	str1.erase(1);
	str1 = "123abc";
	str1.erase(1,2);
	
	//ty_todo �滻�ַ���������ָ���ַ�
	return;
}

void string_demo::strSubString()
{
	string str = "abc123";
	
	//Ԫ����ȡ
	char a = str[2];
	char b = str.at(3);

	//���ַ�����ȡ
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
	nIndex = str.find("3",0,2);   //��"ab"������
	nIndex = str.rfind("33");
	nIndex = str.find_first_of("23");
	nIndex = str.find_first_not_of("abc");
	nIndex = str.find_last_of("23");
	nIndex = str.find_last_not_of("3");

	return;
}