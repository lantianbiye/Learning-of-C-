#ifndef _string_demo_h_
#define _string_demo_h_
#pragma once

class string_demo
{
public:
	string_demo(void);
	~string_demo(void);
public:
	//��ʼ��
	static void initialize();

	//��C�ַ���ת��
	static void ToCString();

	//��ֵ�����
	static void strUpdate();

	//��ȡ
	static void strSubString();

	//�Ƚ�
	static void strCompare();

	//����
	static void strSearch();

	//�������
	static void strInputOutput();

};

#endif