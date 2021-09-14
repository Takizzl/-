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
//	void SetDate(char n[], char s, int a) //类体内定义成员函数
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
//类外定义成员函数
class Person
{
	char Name[20]; //姓名
	char Sex[20]; //性别
	int Age; //年龄
public:
	void SetData(char[], char[], int);
	char* GetName();
	char* GetSex();
	int  GetAge(); //类体外说明函数
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
	//通过对象访问成员
	a.SetData("CAI", "F", "20");
	cout << " Name : " << a.GetName() << endl;
	cout << " Sex: " << a.GetSex() << endl;
	cout << " Age: " << a.GetAge() << endl;
}