#include <iostream>
#include <string.h>
#include <tchar.h>
using namespace std;

//class Person 
//{
//private:
//	char name[20];
//	char sex;
//	int age;
//public:
//	void SetDate(char n[], char s, int a) //�����ڶ����Ա����
//	{
//		strcpy(name, n);
//		sex = s;
//		age = a;
//	}
//	void GetName(char* n)
//	{
//		strcpy(n, name);
//	}
//	char Getsex()
//	{
//		return sex;
//	}
//	int Getage()
//	{
//		return age;
//	}
//};
//���ⶨ���Ա����
class Person
{
	char Name[20]; //����
	char Sex[20]; //�Ա�
	int Age; //����
public:
	void SetData(char[], char[], int);
	char* GetName();
	char* GetSex();
	int  GetAge(); //������˵������
};
void Person::SetData(char n[], char s[], int a)
{
	strcpy(Name, n);
	strcpy(Sex, s);
	Age = a;
}
char * Person::GetName()
{
	return Name;
}
char * Person::GetSex()
{
	return Sex;
}
int Person::GetAge()
{
	return Age;
}
void main()
{
	Person a, * pa;
	//ͨ��������ʳ�Ա
	a.SetData("CAI", "F", "20");
	cout << " Name : " << a.GetName() << endl;
	cout << " Sex: " << a.GetSex() << endl;
	cout << " Age: " << a.GetAge() << endl;
}