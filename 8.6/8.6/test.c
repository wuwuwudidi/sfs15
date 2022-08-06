#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//复杂对象 复杂类型 
//自定义类型 结构体	枚举 联合体
////声明一个结构体变量
//struct stu
//{
//	char name[20];
//	char tale[10];
//	int age;
//}s3,s4,s5;//s2 s3 s4 s5 都是全局变量 ，s1是局部变量 s3 s4 s5 是通过上面的类型创建的全局变量
//struct stu s2;
////特殊声明  匿名结构体类型 (不建议)
//struct 
//{
//	char name[20];
//	char tale[10];
//	int age;
//}x;//就是一个变量
////数据结构 中的 链表 1 找到2 2找到3 3找到4
////结构体的自引用
//struct Node
//{
//	int data;
//	//struct Node n;//不行 太大了，结构体类型 包含自己类型的变量 做不到
//	struct Node *n;//存放下一个结点的地址  找到同类型的结构体变量
//};
//结构体类型重命名
typedef struct stu
{
	char name[20];
	char tale[10];
	int age;
}s;
//结构体的初始化

//结构体内存对齐
//vs的默认对齐数是8
//嵌套调用时要对齐到自己的最大对齐数的整数倍
//效率更高一些
//在设计结构体时 我们尽量要满足对齐又要节省时间 
//可以让占空间小的成员尽量集中在一起
//修改 默认对齐数 #pragma
#pragma pack(8)
//设置默认地址数为8
#pragma pack()
//取消设置默认地址数

offsetof();//计算结构体存放的偏移量 结构体名字，变量（struct S，name）是个宏
int main()
{//创建结构体变量
	struct stu s1 = {"张三","132555",100};
	printf("%s %s %d", s1.name, s1.tale, s1.age);
	return 0;
}