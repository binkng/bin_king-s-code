//#include<iostream>
//using namespace std;
////类：抽象的概念 有一些规定属性（如：学生类：有姓名，年龄。。。。等等属性）
////对象：是类的具体实例（如：小明，25.。。）
//class Student
//{
//public://访问修饰符
//	const char* name;
//	int age;
//public://访问修饰符
//	void show();// 也可以在类里面声明 在类外实现
//	/*{
//		cout << name << " " << age << endl;
//	}*/
//};
//
//void Student::show()//在show()前面需加上Student:: 表明show()属于该作用域 
////如果没加 该函数定义的则是一个全局函数
//{
//	cout << name << " " << age << endl;
//}
//int main()
//{
//	//Student stu = { "xiaogu",24 };//也可以这样初始化 但是不建议
//	Student stu;// 在栈区创建的对象
//	stu.age = 25;// 依次对其赋值即可
//	stu.name = "小谷";
//	stu.show();
//
//	Student* stu2 = new Student;//在堆区创建一个对象
//	stu2->age = 22;
//	stu2->name="xiaobing";
//	stu2->show();//必须加上括号才表示调用函数
//
//	return 0;
//}