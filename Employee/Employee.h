#pragma once

#include<string>
#include<iostream>

//����Employee��:�����µ���������
class Employee
{
private:				// ���ʿ��ƹؼ��֣�˽�г�Ա˵����
	std::string 	emplName;		// ְԱ����
	int 	emplAge;		// ְԱ����
	char 	emplGender;		// ְԱ�Ա�
	float 	emplBaseSalary;	// ְԱ��������

public://������Ա˵����
	Employee(std::string name, int age, char sex, float baseSalary);	//���캯�����������ĺ���������ͬ��
	void printEmployee(void);		// ��ӡְԱ��Ա����
};