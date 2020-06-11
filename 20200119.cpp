////指定位置函数 p99,目的是增加执行的速度。2020，01，19
//#include<iostream>
//using namespace std;
//inline int max(int, int, int); //需要在函数声明时加入inline
//int main()
//{
//	int i = 100, j = 20, k = 30, m;
//	m = max(i, j, k);
//	cout << "max=" << m << endl;
//	return 0;
//}
//
//inline int max(int a, int b, int c)//这里的inline可加或者不加
//{
//	if (b > a) a = b;
//	if (c > a)a = c;
//	return a;
//
//}

////函数的重载p101,2020,01，19
//#include <iostream>
//using namespace std;
//int main()
//{
//	int max(int a, int b, int c);
//	int max(int a, int b);
//	int a = 8, b = -12, c = 27;
//	cout << "max(a,b,c)" << max(a, b, c) << endl;
//	cout << "max(a,b)" << max(a, b) << endl;
//	return 0;
//
//}
//
//int max(int a, int b, int c)
//{
//	if (b > a) b = a;
//	if (c > a) a = c;
//	return a;
//
//}
//
//int max(int a, int b)
//{
//	if (b > a) a = b;
//	return a;
//
//}

////静态局部变量//
//#include<iostream>
//using namespace std;
//int f(int a)
//{
//	 int b = 0;
//	static  int c = 3;
//	b = b + 1;
//	c = c + 1;
//	return a + b + c;
//
//}
//
//int main()
//{
//	int a = 2, i;
//	for (i = 0; i < 3; ++i)
//		cout << f(a) << " ";
//	cout << endl;
//	return 0;
//}

////外部变量是使用p114
//#include<iostream>
//using namespace std;
//int max(int, int);
//int main()
//{
//	extern int a, b;
//	cout << max(a, b) << endl;
//	return 0;
//}
//
//int a = 15, b = -7;
//int max(int x, int y)
//{
//	int z;
//	z = x > y ? x : y;
//	return z;
//
//}

//字符数组p137
////指针变量p157
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	int *pointer_1, *pointer_2;  //这里的*号只起到定义的作用
//	a = 100; b = 10;
//	pointer_1 = &a;//这里的作用是取地址
//	pointer_2 = &b;
//	cout << a << " " << b << endl;
//	cout << *pointer_1 << "" << *pointer_2 << endl;//这里的*号起到取值的作用
//	return 0;
//}

////利用引用进行排序p187
//#include<iostream>
//using namespace std;
//int main()
//{
//	void sort(int&, int&, int&);
//	int a, b, c;
//	cout << "请输入3个整数";
//	cin >> a >> b >> c;
//	sort(a, b, c);
//	cout << "排序后的值为：" << a << b << c << endl;
//	while (1);
//	return 0;
//
//}
//void sort(int &i, int&j, int &k)
//{
//	void change(int &, int &);
//		if (i > j) change(i, j);
//		if (i > k) change(i, k);
//		if (j > k)change(j, k);
//
//
//}
//void change(int &x, int &y)
//{
//	int temp;
//	temp = x;;
//	x = y;
//	y = temp;
//
//}
////结构体的使用 p194
//#include<iostream>
//using namespace std;
//struct Date
//{
//	int month;
//	int day;
//	int year;
//
//};
//
//struct Student
//{
//	int num;
//	char name[20];
//	char sex;
//	Date birthday;
//	float score;
//
//};
//
//Student student1;
//Student student2 = {10002,"Wang Li",'f',5,23,1992,89.5};
//int main()
//{
//	student1 = student2;
//	cout << student1.num << endl;
//	cout << student1.name << endl;
//	cout << student1.sex << endl;
//	cout << student1.birthday.day << '/' <<
//		    student1.birthday.month << '/' << student1.birthday.year << endl;
//	cout << student1.score << endl;
//	while (1);
//	return 0;
//
//}

////结构体类型的数据作为函数参数
////有三种方法1：结构体变量. 缺点：内存占用大，且在子函数中加入值改变，无法传出
////2：用指向结构体变量的指针作为函数形参。 缺点：形式复杂
////3：用结构体变量的引用作为函数形参   最好。
//#include<iostream>
//#include<string>
//using namespace std;
//struct Student
//{
//	int num;
//	string  name;
//	float score[3];
//
//};
//
//int main()
//{
//	void print(Student);//函数声明，形参结构体类型为结构体Student
//		Student stu;
//		stu.num = 12345;
//		stu.name = "Li Ning";
//		stu.score[0] = 67.5;
//		stu.score[1] = 89;
//		stu.score[2] = 78.5;
//		print(stu);
//		while (1);
//		return 0;
//}
//
//void print(Student stu)
//{
//	cout << stu.num << " " << stu.name << " " << stu.score[0] << " " << stu.score[1] << " " << stu.score[2] << endl;
//
//}

////第二种 传地址
//#include<iostream>
//#include<string>
//using namespace std;
//struct Student
//{
//	int num;
//	string  name;
//	float score[3];
//
//}stu = {12345,"Li Ning",67.5,89,78.5};
//
//int main()
//{
//	void print(Student *);
//	Student *pt = &stu;
//	print(pt);
//	while (1);
//	return 0;
//}
//
//void print(Student *p)
//{
//	cout << p->num << " " << p->name << " " << p->score[0] << " " << endl;
//
//}

////第二种 传地址
//#include<iostream>
//#include<string>
//using namespace std;
//struct Student
//{
//	int num;
//	string  name;
//	float score[3];
//
//}stu = { 12345,"Li Ning",67.5,89,78.5 };
//
//int main()
//{
//	void print(Student &);
//	//Student *pt = &stu;
//	print(stu);
//	while (1);
//	return 0;
//}
//
//void print(Student &stud)
//{
//	cout << stud.num << " " << stud.name << " " << stud.score[0] << " " << endl;
//
//}

//枚举类型数据
//所谓的枚举数据就是将变量的值一一列举出来，变量的值只能在列举出来的值的的范围内

////2020.01.29 p246 利用构造函数实现初始化
//#include <iostream>
//using namespace std;
//class Time {
//public:
//	Time()
//	{
//		hour = 0;
//		minute = 0;
//		sec = 0;
//
//	}
//
//	void set_time();
//	void show_time();
//private:
//	int hour;
//	int minute;
//	int sec;
//
//};
//
//void Time :: set_time() //不要忘记有 “Time ::”
//{
//	cout << "请输入时，分，秒" << endl;
//	cin >> hour;
//	cin >> minute;
//	cin >> sec;
//}
//void Time::show_time()
//{
//	cout << hour << ":" << minute << ":" << sec << endl;
//}
//int main()
//{
//	Time t1;
//	t1.set_time();//函数后面记得带括号
//	t1.show_time();
//	Time t2;
//	t2.show_time();
//	while (1);
//	return 0;
//}

////利用对象数组实现计算体积 p260
//#include<iostream>
//using namespace std;
//class Box
//{
//public:
//	Box(int h = 10,int w= 12,int len =15):height(h),width(w),length(len){}
//	//声明有默认参数的构造函数，用参数初始化表对数据成员进行初始化
//	int volume();
//private:
//	int height;
//	int width;
//	int length;
//
//};
//
//int Box:: volume()
//{
//	return (height*width*length);
//}
//int main()
//{
//	//在这里给出了定义对象数组初始化的方法
//	Box a[3] = {
//		Box(10,12,15),
//		Box(15,18,20),
//		Box(16,20,26)
//	};
//	cout << "a[0]体积是:" << a[0].volume() << endl;
//	cout << "a[1]体积是:" << a[1].volume() << endl;
//	cout << "a[2]体积是:" << a[2].volume() << endl;
//	while (1);
//	return 0;
//}

//#include <string.h>
//using namespace std;
//void mian()
//{
//	char string[10], str1[10];
//	int i;
//	for (i = 0; i<9; i++)
//	{
//		str1[i] = 'a';
//	}
//	str1[9] = '\0';
//	strcpy(string, str1);
//}

////小甲鱼16,17讲 继承机制中的构造器
//#include<iostream>
//#include<string>
//class Animal
//{
//
//public:
//	std::string mouth;
//	std::string name;
//
//	Animal(std::string theName);
//	void eat();
//	void sleep();
//	void drool();
//};
//class Pig : public Animal {
//public:
//	void climb();
//
//	Pig(std::string theName);
//
//
//};
//
//class Turtle : public Animal {
//public:
//	void swim();
//	Turtle(std::string theName);
//};
//
////定义基类中的函数
//
//void Animal::eat()
//{
//	std:: cout << "I'm eating!" << std::endl;
//}
//void Animal::sleep()
//{
//	std::cout << "I'm sleeping!" << std::endl;
//
//}
//void Animal::drool()
//{
//	std::cout << "我很饿，我在流口水！" << std::endl;
//}
//
////定义子类中的函数
//void Pig::climb()
//{
//	std::cout << "我会上树！" << std::endl;
//}
//
//void Turtle::swim()
//{
//	std::cout << "我会游泳！" << std::endl;
//
//}
//
////Animal的构造函数
//Animal::Animal(std::string theName)
//{
//	name = theName;
//}
//
////Pig的构造函数
//Pig::Pig(std::string theName) :Animal(theName)
//{
//}
////Turtle的构造函数
//Turtle::Turtle(std::string theName) : Animal(theName)
//{
//
//}
//
//
//int main()
//{
//	Pig pig("小猪猪");
//	Turtle turtle("小甲鱼");
//
//	std::cout << "猪的名字是:" << pig.name << std::endl;
//	std::cout << "乌龟的名字是:" << turtle.name << std::endl;
//	pig.eat();
//	turtle.eat();
//	pig.climb();
//	turtle.swim();
//
//	while (1);
//	return 0;
//}

////小甲鱼17讲析构器的使用例子
//#include<iostream>
//#include<string>
//class BaseClass
//{
//public:
//	BaseClass();
//	~BaseClass();
//	void doSomething();
//};
////子类
//class SubClass :public BaseClass
//{
//public:
//	SubClass();
//	~SubClass();
//};
//
////进行基类的函数的定义
////对基类的构造函数定义
//
//BaseClass::BaseClass()
//{
//	std::cout << "进入基类构造器\n";
//	std::cout << "我在基类中干了。。。。。\n\n";
//
//}
//BaseClass::~BaseClass()
//{
//	std::cout << "进入了析构函数\n";
//	std::cout << "我在基类析构器也干了。。。。\n\n";
// }
//
//
//void BaseClass::doSomething()
//{
//	std::cout << "gansha \n";
//}
////定义子类析构器，构造器等
//SubClass::SubClass()
//{
//	std::cout << "进入子类析构器\n";
//	std::cout << "我在子类析构器中干了...\n";
//
//}
//
//SubClass::~SubClass()
//{
//	std::cout << "进入子类析构器\n";
//	std::cout << "我在子类析构器干了\n\n";
//}
//
//int main()
//{
//	SubClass subclass;
//	subclass.doSomething();
//	std::cout << "完事，手工\n";
//	//while (1);
//
//
//	return 0;
//
//
//
//}

//// 20，即继承的公有，私有，保护
//
//#include<iostream>
//#include<string>
//class Animal
//{
//
//public:
//	std::string mouth;
//	std::string name;
//
//	Animal(std::string theName);
//	void eat();
//	void sleep();
//	void drool();
//};
//class Pig : public Animal {  //：public Animal 为继承
//public:
//	void climb();
//
//	Pig(std::string theName);
//
//
//};
//
//class Turtle : public Animal {
//public:
//	void swim();
//	Turtle(std::string theName);
//};
//
////定义基类中的函数
//
//void Animal::eat()
//{
//	std:: cout << "I'm eating!" << std::endl;
//}
//void Animal::sleep()
//{
//	std::cout << "I'm sleeping!" << std::endl;
//
//}
//void Animal::drool()
//{
//	std::cout << "我很饿，我在流口水！" << std::endl;
//}
//
////定义子类中的函数
//void Pig::climb()
//{
//	std::cout << "我会上树！" << std::endl;
//}
//
//void Turtle::swim()
//{
//	std::cout << "我会游泳！" << std::endl;
//
//}
//
////Animal的构造函数
//Animal::Animal(std::string theName)
//{
//	name = theName;
//}
//
////Pig的构造函数
//Pig::Pig(std::string theName) :Animal(theName)
//{
//}
////Turtle的构造函数
//Turtle::Turtle(std::string theName) : Animal(theName)
//{
//
//}
//
//
//int main()
//{
//	Pig pig("小猪猪");
//	Turtle turtle("小甲鱼");
//	// pig.name
//	std::cout << "猪的名字是:" << pig.name << std::endl;
//	std::cout << "乌龟的名字是:" << turtle.name << std::endl;
//	pig.eat();
//	turtle.eat();
//	pig.climb();
//	turtle.swim();
//
//	while (1);
//	return 0;
//}

////静态数据成员p 281
//#include<iostream>
//using namespace std;
//class Box
//{
//public:
//	Box(int, int);//声明构造函数
//	int volume();
//	static int height;
//	int width;
//	int length;
//
//};
//
//Box::Box(int w, int len) //定义构造函数
//{
//	width = w;
//	length = len;
//}
//
//int Box::volume()  //定义方法
//{
//	return(height*width*length);
//
//}
//
//int Box::height = 10;
//int main()
//{
//	Box a(15, 20), b(20, 30);
//	cout << a.height << endl;		//通过 对象 名称引用静态数据成员函数
//	cout << b.height << endl;		//通过 对象 名
//	cout << Box::height << endl;	//通过 类   名引用
//	cout << a.volume ()<< endl;
//	while (1);
//	return 0;
//
//}

//// p283
//#include<iostream>
//using namespace std;
//class Student
//{
//public:
//	Student(int n ,int a,float s):num(n),age(a),score(s){}
//	void total();
//	static float average();
//	// float average();
//private:
//	int num;
//	int age;
//	float score;
//	static double sum; //static可以让sum实现累加，静态变量在
//	//作用域即这个函数内有效
//	static int count; //同样的static
//};
//
//void Student::total()
//{
//	sum += score;
//	count++;
//}
//
//float Student::average()
//{
//	return(Student::sum/Student::count);//可以直接调用静态数据成员而不需要加类名
//
//}
//double  Student::sum = 0;
//int Student::count = 0;
//int main()
//{
//	Student stud[3] =
//	{
//		Student(1001,18,70),
//		Student(1002,19,78),
//		Student(1005,20,98)
//	};
//	int n;
//	cout << "请输入学生数量：";
//	cin >> n;
//	for (int i = 0; i < n; ++i)
//	{
//		stud[i].total();
//
//	}
//	cout << n << "个学生的平均分是：" << Student::average() << endl;
//	while (1);
//	return 0;
//}

//// p 287页码 友元成员函数
//#include<iostream>
//using namespace std;
//class Date;  //先声明，再引用
//class Time
//{
//public:
//	Time(int, int, int);
//	void display(Date &); //display 是成员函数，形参是date类对象的引用
//private:
//	int hour;
//	int minute;
//	int sec;
//
//};
//
//class Date
//{
//public:
//	Date(int, int, int);
//	friend void Time::display(Date &);//声明Time中的display为友元函数
//private:
//	int month;
//	int day;
//	int year;
//};
//Time::Time(int h,int m,int s) { //定义Time的构造函数
//	hour = h;
//	minute = m;
//	sec = s;
//}
//
//void Time::display(Date &d) {   // 利用引用来得到引用的地址
//
//	// month需要加 d. 因为需要需要知道对象的名字
//	cout << d.month << "/" << d.day << "/" << d.year << "/" << d.year << endl;
//	cout << hour << ":" << minute << ":" << sec << endl;
//
//}
//
//Date::Date(int m, int d, int y)
//{
//	month = m;
//	day = d;
//	year = y;
//}
//int main()
//{
//	Time t1(10, 13, 56);
//	Date d1(12, 15, 2004);
//	t1.display(d1);
//	while (1);
//	return 0;
//}

////p 292 类模板
//#include<iostream>
//using namespace std;
//template <class numtype>
//class Compare //类的模板名称为compare
//{
//public:
//	Compare(numtype a, numtype b)
//	{
//		x = a; y = b;
//	}
//	numtype max()
//	{
//		return (x > y) ? x : y;
//	}
//	numtype min()
//	{
//		return (x < y) ? x : y;
//	}
//private:
//	numtype x, y;
//};
//
//int main()
//{
//	Compare <int > cmpl(3, 7);
//	cout << cmpl.max() << "是最大数" << endl;
//	cout << cmpl.min() << "最小数是" << endl;
//	Compare <float> cmpl1(22.3, 33.2);
//	cout << cmpl1.max() <<"大"<< endl;
//	cout << cmpl1.min() << "小" << endl;
//	while (1);
//	return 0;
//}

//// p 344 保护成员
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student
//{
//public:
//protected:
//	int num;
//	string name;
//	char sex;
//};
//
//class Student1 :protected Student		//保护继承
//{
//public:
//	void get_value1();
//	void display();
//private:
//	int age;
//	string addr;
//
//};
//
//void Student1::get_value1()				// ::为作用域限定符
//{
//	cout << "请输入数据num，name，sex，age，addr：" << endl;
//	cin >> num >> name >> sex;			//保护继承得到基类的公有成员，可以直接使用
//	cin >> age >> addr;
//}
//void Student1:: display()
//{
//	cout << "num:" << num << endl;
//	cout << "name" << name << endl;
//	cout << "sex:" << sex << endl;
//	cout << "age:" << age << endl;
//	cout << "address:" << addr << endl;
//
//}
//int main()
//{
//	Student1 stud1;
//	// 这里只有子类的两个行为是公有的，可以在类外被引用
//	stud1.get_value1();
//	stud1.display();
//	while (1);
//	return 0;
//}

//// p 347简单派生类的构造函数
//#include<iostream>						//	输入输出流
//using namespace std;					// 命名空间std
//#include<string>
////定义基类
//class Student
//{
//public:									//声明为公共成员，可以在类外被引用
//	Student(int n, string nam, char s)	// 初始化，构造函数
//	{
//		num = n;
//		name = nam;
//		sex = s;
//
//	}
//	~Student(){}						// 析构函数
//protected:								// 被保护的成员
//	int num;
//	string name;
//	char sex;
//};
////声明派生类
//class Student1:public Student			//对基类进行公有继承，
//										//那么基类公有的成员仍然为公有的
//{
//public:
//	Student1(int n, string nam, char s, int a, string ad) :Student(n, nam, s)
//		// 构造函数的继承
//	{
//		age = a;
//		addr = ad;
//	}
//	void show()
//	{
//		cout << "num:" << num << endl;
//		cout << "name:" << name << endl;
//		cout << "age:" << age << endl;
//		cout << "address:" << addr << endl;
//
//	}
//	~Student1() {};
//private:
//	int age;
//	string addr;
//};
//int main()
//{
//	Student1 stud1(10010, "wang-li", 'f', 19, "115 beijng road ,shanghai");
//	Student1 stud2(10011, "zhang-fang", 'm', 21, "213 shanghai road,beijing");
//	// 这里，只有类的行为是公有的，可以在类外引用，
//	// 类的属性是私有的或者保护的，无法在类外引用
//	stud1.show();
//	stud2.show();
//	while (1);
//	return 0;
//}

//// p96 递归调用
//#include<iostream>
//using namespace std;
//int age(int);
//int main()
//{
//	cout << age(5) << endl;
//	while (1);
//	return 0;
//}
//int age(int n)
//{
//	int c;
//	if (n == 1) c = 10;
//	else
//		c = age(n - 1) + 2;
//	return c;
//}

//// p97求解n的阶乘
//#include<iostream>
//using namespace std;
//double mul(int n);
//int main()
//{
//	int n;
//	double r;
//	cout << "请输入一个整数：" << endl;
//	cin >>n;
//	r = mul( n);
//	cout << "阶乘是：" << r << endl;
//	while (1);
//	return 0;
//}
//double mul(int n)
//{
//	double mul1;
//	if (n < 0)
//		cout << "输入错误" << endl;
//	else if (n == 0 || n == 1) mul1 = 1;
//	else
//		mul1 = mul(n - 1)*n;
//	return mul1;
//
//}

////有子对象的派生类的构造函数
//#include<iostream>
//#include<string>
//using namespace std;
//class Student			//声明基类
//{
//public:
//	Student (int n ,string nam)
//	{
//		num = n;
//		name = nam;
//
//	}
//	void display()
//	{
//		cout << "num:" << num << "name" << name <<endl;
//
//	}
//protected:
//	int num;
//	string name;
//};
//class Student1:public Student
//{
//public:
//	// 注意这里的子类的构造函数，当有子对象时的初始化
//	Student1(int n, string nam, int n1, string nam1, int a, string ad)
//		:Student(n,nam),monitor(n1,nam1)
//	{
//		age = a;
//		addr = ad;
//	}
//	void show()
//	{
//		cout << "this student is:" << endl;
//		display();
//		cout << "age:" << age << endl;
//		cout << "address:"<< addr  << endl;
//
//
//	}
//	void show_monitor()
//	{
//		cout << endl << "Class monitor is:" << endl;
//		monitor.display();
//	}
//private:
//	Student monitor;			//注意：****这里的属性为一个对象
//	int age;
//	string addr;
//};
//
//int main()
//{
//	Student1 stud1(10010, "wang li", 10001, "Li_sun", 19, "115 beijng road,shanghai");
//	stud1.show();
//	stud1.show_monitor();
//	while (1);
//	return 0;
//}

////多层派生 p354
//#include<iostream>
//#include<string>
//using namespace std;
//class Student
//{
//	//声明基类
//public:
//	Student(int n, string nam)
//	{
//		num = n;
//		name = nam;
//
//	}
//	void display()
//	{
//		cout << "num:" << num << endl;
//		cout << "name:" << name << endl;
//
//	}
//protected:
//	int num;
//	string name;
//};
//
////声明公共派生类
//class Student1 :public Student
//{
//public:
//	Student1(int n, string nam,int a):Student(n,nam)
//	{
//		age = a;
//	}
//	void show()
//	{
//		display();
//		cout << "age:" << age << endl;
//	}
//
//private:
//	int age;  //这里age为private形式的
//};
//
////声明简介派生类
//class Student2 :public Student1
//{
//public:
//	Student2(int n, string nam, int a, int s) :Student1(n, nam, a)
//	{
//		score = s;
//	}
//	void show_all(){
//		show();
//		cout << "score:" << score << endl;
//	}
//private:
//	int score;
//
//};
//
//int main()
//{
//	Student2 stud(10010, "Li", 17, 89);
//	stud.show_all();
//		while (1);
//		return 0;
//}

////多重继承
//#include<iostream>
//#include<string>
//using namespace std;
////定义老师类
//class Teacher
//{
//public:
//	Teacher(string nam, int a, string t)
//	{
//		name = nam;
//		age = a;
//		title = t;
//	}
//	void display()
//	{
//		cout << "name:" << name << endl;
//		cout << "age:" << age << endl;
//		cout << "title:" << title << endl;
//	}
//protected:
//	string name;
//	int age;
//	string title;
//};
////定义学生类
//class Student
//{
//public:
//	Student(string  nam, char s, float sco)
//	{
//		//strcpy(name1, nam);
//		name = nam;
//		sex = s;
//		score = sco;
//	}
//	void display1()
//	{
//		cout << "name:"<<name << endl;
//		cout << "sex:" << sex << endl;
//		cout << "score" << score << endl;
//
//	}
//protected:
//	string name;
//	char sex;
//	float score;
//};
//class Graduate :public Teacher, public Student
//{
//public:
//	Graduate(string nam,int a,char s,string t,float sco,float w):Teacher(nam,a,t),Student(nam,s,sco)
//	{
//		wage = w;
//	}
//	void show()
//	{
//		cout << "name:" << Student::name << endl;
//		cout << "age:" << age << endl;
//		cout << "sex:" << sex << endl;
//		cout << "score:" << score << endl;
//		cout << "title:" << title << endl;
//		cout << "wages:" << wage << endl;
//	}
//private:
//	float wage;
//};
//int main()
//{
//	Graduate grad1("Wang_Li", 24, 'f', "assistant", 89.5, 1200);
//	grad1.show();
//	while (1);
//	return 0;
//}

////虚基类的应用p367
//#include<iostream>
//#include<string>
//using namespace std;
////声明公共基类
//class Person
//{
//public:
//	Person(string nam, char s, int a)
//	{
//		name = nam; sex = s; age = a;
//	}
//protected: //保护成员
//	string name;
//	char sex;
//	int age;
//};
//
////声明person的直接派生类Teacher
//class Teacher:virtual public Person //虚基类
//{
//public:
//	Teacher(string nam,char s,int a,string t) :Person(nam,s,a)
//	{
//		title = t;
//	}
//protected:
//	string title;
//
//};
////声明person的直接派生类student
//class Student :virtual public Person //虚基类
//{
//public:
//	Student(string nam, char s, int a, float sco)
//		:Person(nam, s, a), score(sco) {}
//protected:
//	float score;
//};
//class Graduate :public Teacher, public Student
//{
//public:
//	Graduate(string nam,char s,int a,string t,float sco,float w)
//		:Person(nam,s,a),Teacher(nam,s,a,t),Student(nam,s,a,sco),wage(w){}
//	//在此处，既要对虚基类的构造函数调用，也包括对其直接基类的初始化
//	void show()
//	{
//		cout << "name:" << name << endl;
//		cout << "age:" << age << endl;
//		cout << "sex:" << sex << endl;
//		cout << "score" << score << endl;
//		cout << "title" << title << endl;
//		cout << "wages" << wage << endl;
//	}
//private:
//	float wage;
//};
////主函数
//int main()
//{
//	Graduate grad1("wang_li", 'f', 24, "assistant", 89.5, 1200);
//	grad1.show();
//	while (1);
//	return 0;
//}

//// 通过函数来实现复数相加 p 298
//#include<iostream>
//using namespace std;
//class Complex
//{
//public:
//	Complex() { real = 0; imag = 0; }		//构造函数
//	Complex(double r, double i)				//构造函数，重载
//	{
//		real = r; imag = i;
//	}
//	//Complex complex_add(Complex &c2);		//声明复数相加函数
//	Complex operator +( Complex & c2);
//	void display();
//private:
//	double real;
//	double imag;
//};
////
////Complex Complex::complex_add(Complex &c2)	//这里第一个Complex是表
////											//示函数的返回类型，第二个由
////											//于是在类体外定义的函数，
////											//需要说明属于哪一个类
////{
////	Complex c;
////	c.real = real + c2.real;
////	c.imag = imag + c2.imag;
////	return c;
////}
//
//Complex Complex:: operator +(Complex &c2)
//{
//	Complex c;
//	c.real = real + c2.real;
//	c.imag = imag + c2.imag;
//	return c;
//}
//
//void Complex::display()
//{
//	cout << "(" << real << "," << imag << "i)" << endl;
//
//}
//int main()
//{
//	Complex c1(3, 4), c2(5, -10), c3;
//	//c3 = c1.complex_add(c2);
//	c3 = c1 + c2;
//	cout << "c1 = "; c1.display();
//	cout << "c2="; c2.display();
//	cout << "c1+c2="; c3.display();
//	while (1);
//	return 0;
//}

//// 典型例子12.2 p 381  date:2020.02.03
//#include<iostream>
//using namespace std;
////声明基类
//class Point
//{
//public:
//	Point(float x = 0, float y = 0);	//基类的构造函数
//	void setPoint(float, float);		//设定值函数
//	float getX()const { return x; }		//读取x坐标，getX函数为常成员函数
//	float getY()const { return y; }		//读取y坐标，getX函数为常成员函数
//	friend ostream &operator <<(ostream &, const Point &);//友元重载运算符<<
//
//protected:
//	float x, y;
//};
////定义point类的成员函数
//Point::Point(float a, float b)
//{
//	x = a; y = b;
//}
//// 设置x和y的坐标值
//void Point::setPoint(float a,float b)
//{
//	x = a; y = b;
//}
////重载运算符 << ，使之能够输出点的坐标
//ostream & operator <<(ostream &output, const Point &p)
//{
//	output << "[" << p.x << "," << p.y << "]" << endl;
//	return output;
//}
//
////声明派生类circle
//class Circle :public Point
//{
//public:
//	Circle(float x = 0, float y = 0, float r = 0);	//这里只是声明，
//													//不需要对基类的构造杉树进行说明
//	void setRadius(float);
//	float getRadius() const;
//	float area() const;
//	friend ostream &operator<<(ostream &, const Circle &);
//protected:
//	float radius;
//};
//
//Circle::Circle(float a, float b, float r) :Point(a, b), radius(r) {}
////设置半径
//void Circle::setRadius(float r)
//{
//	radius = r;
//}
////读取半径
//float Circle::getRadius() const { return radius; }
////计算圆面积
//float Circle::area() const
//{
//	return 3.14149*radius*radius;
//}
////重载运算符<<，使之能够按规定的形式输出圆的信息
//ostream &operator <<(ostream &output, const Circle &c)
//{
//	output << "Center=[" << c.x << "," << c.y << "],r=" << c.radius << ",area=" << c.area() << endl;
//	return output;
//}
//
////声明circle 的派生类cylinder
//class  Cylinder :public Circle
//{
//public:
//	Cylinder(float x = 0, float y = 0, float r = 0, float h = 0);
//	void setHeight(float);
//	float getHeight()const;
//	float area()const;//计算圆表面积
//	float volume() const;
//	friend ostream & operator <<(ostream&, const Cylinder&);//重载运算符<<
//protected:
//	float height;//保护类型
//};
//// 定义构造函数
//Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r), height(h) {}
////定义设置圆柱高的函数
//void Cylinder::setHeight(float h) { height = h; }
////定义读取圆柱高度的函数
//float Cylinder::getHeight()const { return height; }
////定义计算圆表面积的函数
//float Cylinder:: area()const		//无输入值，返回值为float类型
//{
//	return 2 * Circle::area() + 2 * 3.14159*radius*height;
//}
////定义计算圆柱的体积的函数
//float Cylinder::volume()const
//{
//	return Circle::area()*height; //这里利用Cylinder限定说明是此类型的面积
//}
////重载运算符<< 的函数
//ostream &operator<<(ostream &output, const Cylinder &cy)
//{
//	cout << "Center = [" << cy.x << "," << cy.y << "],r" << cy.radius << ",h" << cy.height
//		<< "\narea=" << cy.area() << ",volume=" << cy.volume() << endl;
//	return output;
//}
//int main()
//{
//	/*Point p(3.5, 6.4);
//	cout << "x=" << p.getX() << ",y=" << p.getY() << endl;
//	p.setPoint(8.5, 6.8);
//	cout << "p(new):" << p << endl;*/
//	//Circle c(3.5, 6.4, 5.2);//建立circle对象，并制定圆心与半径
//	//cout << "original circle:\nx=" << c.getX() << ",y=" << c.getY() << ",r=" <<
//	//c.getRadius() << ",area=" << c.area() << endl;
//	//c.setRadius(7.5);					//设置半径
//	//c.setPoint(5, 5);					//设置圆心坐标
//	//cout << "new circle:\n" << c;		//用重载运算符<<输出圆对象的信息
//	//Point &pRef = c;						//pRef是point类的引用，被c初始化
//	//cout << "pRef:" << pRef;
//	Cylinder cy1(3.5, 6.4, 5.2, 10);
//	cout << "original cylinder:\nx=" << cy1.getX() << ",y" << cy1.getY() << ",r=" <<
//		cy1.getRadius() << ",h=" << cy1.getHeight() << "\narea=" << cy1.area()
//		<< ",volume=" << cy1.volume() << endl;
//	cy1.setHeight(15);
//	cy1.setRadius(7.5);
//	cy1.setPoint(5, 5);
//	cout << "\nnew cylinder:\n" << cy1;
//	Point &pRef = cy1;
//	cout << "\npRef as a point :" << pRef;
//	Circle &cRef = cy1;
//	cout << "\n cRef ad a Circle:" << cRef;
//	while (1);
//	return 0;
//}

////例12.2 基类与派生类中有同名函数
//#include<iostream>
//#include<string>
//using namespace std;
////声明基类
//class Student
//{
//public:
//	 Student(int, string, float); //加virtual
//	 virtual void display();
//protected:
//	int num;
//	string name;
//	float score;
//};
//
////Student类成员的实现
//Student::Student(int n, string nam, float s)
//{
//	num = n;
//	name = nam;
//	score = s;
//}
//void Student::display()
//{
//	cout << "num:" << num << "\nname:" << name << "\nscore:" << score << endl;
//
//}
////声明公用派生类
//class Graduate :public Student
//{
//public:
//	Graduate(int, string, float, float);
//	void display();
//private:
//	float wage;
//};
////定义相关函数
//Graduate::Graduate(int n, string nam, float s, float w) :Student(n, nam, s)
//{
//	wage = w;
//}
//void Graduate::display()
//{
//	cout << "num:" << num << "\nname:" << name << "\nscore:" << score << "\nwage:" << wage << endl;
//
//}
//
//int main()
//{
//	Student stud1(1001, "Li", 87.5);
//	Graduate grad1(2001, "Wang", 98.5, 1200);
//	Student *pt ; //定义一个指向基类的指针变量，必须指向基类
//	pt = &stud1;
//	pt->display();
//	//Graduate *ptr = &grad1;
//	pt = &grad1;
//	//pt = &Graduate::display();
//	pt->display();
//	while (1);
//	return 0;
//}

//// 例12.2 p386 重写 2020.04.06日
//#include<iostream>
//#include<string>
//using namespace std;
//class Student {
//public:
//	//Student(int n, string nam, float s) :num(n),name(nam),score(s){}
//	Student(int n, string nam, float s);
//	virtual void display();
//protected:
//	int num;
//	string name;
//	float score;
//};
//Student::Student(int n, string nam, float s)
//{
//	num = n;
//	name = nam;
//	score = s;
//}
//void Student::display()
//{
//	cout << "num:" << num << "\nname:" << name << "\nscore" << score << "\n\n";
//}
//class Graduate :public Student
//{
//public:
//	Graduate(int, string, float, float);
//	virtual void display();
//private:
//	float wage;
//};
//Graduate::Graduate(int n, string nam, float s, float w) :Student(n, nam, s), wage(w) {}
//void Graduate::display()
//{
//	cout << "num:" << num << "\nname" << name << "\nscore" << score << "\nwage" << wage << endl;
//}
//int main()
//{
//	Student stud1(1001, "Li", 87.5);
//	Graduate grad1(2001, "Wang", 98.5, 1200);
//	Student *pt;
//		pt= &stud1;
//	pt->display();
//	pt = &grad1;
//	pt->display();
//	while (1);
//	return 0;
//}

//// 虚析构函数 p392
//#include<iostream>
//using namespace std;
//class Point
//{
//public:
//	Point() {}
//	virtual ~Point() { cout << "执行point类析构" << endl; }
//};
//class Circle :public Point
//{
//public:
//	Circle(){ }
//	~Circle() { cout << "执行circle的析构器"; }
//private:
//	int radus;
//};
//int main()
//{
//	Point *p = new Circle;
//	delete p;
//	while (1);
//	return 0;
//}

//// p394虚函数和抽象基类的应用  2020.02.04
//#include<iostream>
//using namespace std;
////声明抽象基类shape
//class Shape
//{
//public:
//	virtual float area()const { return 0.0; }		//虚函数
//	virtual float volume() const { return 0.0; }	//虚函数
//	virtual void shapeName() const = 0;				//纯虚函数
//};
//
////声明point 类
//class Point :public Shape
//{
//public:
//	Point(float = 0, float = 0);
//	void setPoint(float, float);
//	float getX()const { return x; }
//	float getY()const { return y; }
//	virtual void shapeName()const {
//		cout << "Point:";
//	}
//	friend ostream &operator <<(ostream &, const Point &);
//protected:
//	float x, y;
//};
//
////定义point 类的成员
//Point::Point(float a, float b)
//{
//	x = a; y = b;
//}
//ostream &operator <<(ostream &output, const Point &p)
//{
//	output << "[" << p.x << "," << p.y << "]";
//	return output;
//}
//void Point::setPoint(float a, float b)
//{
//	x = a;
//	y = b;
//}
//
////声明circle类
//class Circle :public Point
//{
//public:
//	Circle(float x = 0, float y = 0, float  r = 0);
//	void setRadius(float);
//	float getRadius()const;
//	virtual float area() const;
//	virtual void shapeName() const { cout << "Circle:"; }
//	friend ostream &operator <<(ostream &, const Circle &);
//protected:
//	float radius;
//
//};
//// 定义circle 类的函数
//Circle::Circle(float a, float b, float r) : Point(a, b), radius(r) {}
//void Circle::setRadius(float r) { radius = r; }
//float Circle::getRadius() const { return radius; }
//float Circle::area()const { return 3.14159*radius*radius; }
//ostream &operator <<(ostream &output,const Circle &c)
//{
//	output << "[" << c.x << "," << c.y << "],r=" << c.radius;
//	return output;
//}
////声明cylinder类
//class Cylinder :public Circle
//{
//public:
//	Cylinder(float x = 0, float y = 0, float r = 0, float h = 0);
//	void setHeight(float);
//	virtual float area()const;
//	virtual float volume()const;
//	virtual void shapeName()const { cout << "Cylinder:"; }
//	friend ostream &operator <<(ostream &, const Cylinder &);
//protected:
//	float height;
//};
////定义cylinder类中的函数
//Cylinder::Cylinder(float a,float b,float r,float h)
//	:Circle(a,b,r),height(h){}
//void Cylinder::setHeight(float h) { height = h; }
//float Cylinder:: area()const
//{
//	return 2 * Circle::area() + 2 * 3.14159*radius*height;
//}
//float Cylinder:: volume()const
//{
//	return Circle::area()*height;
//}
//ostream &operator <<(ostream &output,const Cylinder &cy)
//{
//	output << "[" << cy.x << "," << cy.y << "].r" << cy.radius << ",h" << cy.height;
//	return output;
//}
//
////mian函数
//int main()
//{
//	Point point(3.5, 4.5);
//	Circle circle(2.4, 1.2, 5.6);
//	Cylinder cylinder(3.5, 6.4, 5.2, 10.5);
//	point.shapeName();
//	cout << point << endl;
//	circle.shapeName();
//	cout << circle << endl;
//	cylinder.shapeName();
//	cout << cylinder << endl<<endl;
//	Shape *pt;
//	//输出点的数据
//	pt = &point;
//	pt->shapeName();
//	cout << "x = " << point.getX() << ",y= " << point.getY() << "\narea=0" <<pt->area()
//		<< "\nnvome=" << pt->volume() << "\n\n";//注意这里的使用 .和->的不同
//	//输出圆的数据
//	pt = &circle;
//	pt->shapeName();
//	cout << "x = " << circle.getX() << ",y= " << circle.getY() << "\narea" << pt->area()
//		<< "\nnvome=" << pt->volume() << "\n\n";
//	//输出圆柱的数据
//	pt = &cylinder;
//	pt->shapeName();
//	cout << "x = " << cylinder.getX() << ",y= " << cylinder.getY() << "\narea" << pt->area()
//		<< "\nnvome=" << pt->volume() << "\n\n";
//	while (1);
//	return 0;
//
//
//}

//// p409 cerr的用法 cerr 是输出，所以用  "<<"
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	float a, b, c, disc;
//	cout << "请输入a,b,c";
//	cin >> a >> b >> c;
//	if (a == 0)
//		cerr << "错误！！a 是一个等于零的数" << endl;
//	else
//		if ((disc = b*b - 4 * a*c) < 0)
//			cerr << "disc =b*b-4*a*c<0" << endl;
//		else
//		{
//			cout << "x1 = " << (-b + sqrt(disc)) / (2 * a) << endl;
//			cout << "x2= " << (-b - sqrt(disc)) / (2 * a) << endl;
//		}
//	while (1);
//	return 0;
//}

////p 411控制输出数据的格式
//#include<iostream>
//using namespace std;
//#include<iomanip>
//int main()
//{
//	int a = 21;
//	cout.setf(ios::showbase);//显示基数符号
//	cout << "dec:" << a << endl;//默认以十进制形式输出a
//	cout.unsetf(ios::dec);//终止十进制格式设置
//	cout.setf(ios::hex);//设置16位进制形式输出
//	cout << "hex" << a << endl;
//
//	while (1);
//	return 0;
//}

////对于ascii文件的操作 p423
//#include<fstream>
//using namespace std;
//#include<iostream>
//int main()
//{
//	int a[10];
//	ofstream outfile("f1.dat", ios::out);//定义文件流对象，打开磁盘文件f1.dat
//	if (!outfile)//若果打开失败，返回0值
//	{
//		cerr << "open error" << endl;
//		exit(1);
//	}
//	cout << "enter 10 integer numbers:" << endl;
//	for (int i = 0; i < 10; ++i)
//	{
//		cin >> a[i];
//		outfile << a[i] << " ";
//	}
//	outfile.close();
//	while (1);
//	return 0;
//}

////c p301
//#include<iostream>
//#include<string>
//using namespace std;
////#define N 8
////#if defined N
////#undef N
////
////#endif
////#define N  6
////#define  L  5
////#ifndef L
////#define L 100
////#endif
//int main()
//{
//	/*double (*p)[L] = new double[N][L];
//	int m = 5;
//	double*** a =  new double**[m];
//	for (int i = 0; i < m; ++i)
//		a[i] =  new double*[5];
//	for (int i = 0; i < m; ++i)
//	{
//		for (int j = 0; j < 5; ++j)
//			a[i][j] = new double[3];
//	}*/
//	char *name[] = {"Follow me","Basic","Great wall","Fortran","Computer design"};
//	char **p;
//	p = name;
//	for (int i = 0; i < 5; ++i)
//	{
//
//		cout << *p << endl;
//		p = p + 1;
//	}
//
//	while (1);
//	return 0;
//}

////c p 269
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	//int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	//printf("%d,%d\n", a, *a);//首地址，首地址
//	//printf("%d,%d\n", a[0], *(a + 0));// 首地址，首地址
//	//printf("%d,%d\n", &a[0], &a[0][0]);//首地址，首地址
//	//printf("%d,%d\n", a[1], a + 1);//第二行首地址，第二行首地址
//	//printf("%d,%d\n", &a[1][0], *(a + 1) + 0);//第二行首地址，第二行首地址
//	//printf("%d,%d\n", a[2], *(a + 2));// 第三行首地址
//	//printf("%d,%d\n", &a[2], a + 2);//第三行首地址
//	//printf("%d,%d\n", a[1][0], *(*(a + 1) + 0));//第2行的第一个值
//	//printf("%d,%d\n", *(a +2), *(*(a + 2) + 0));//第三行首个的地址，第三行的值
//	//printf("%d,%d\n", *a[2], *(*(a + 2) + 0));//第三行首个的地址，第三行的值
//
//	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int *p;
//	for (p = a[0]; p < a[0] + 12; p++)
//	{
//		if ((p - a[0]) % 4 == 0) printf("\n");
//		printf("%4d", *p);
//	}
//	printf("\n");
//	while (1);
//	return 0;
//}

//try-catch

////运算符重载
//// p299 例10.2
//#include<iostream>
//using namespace std;
//class Complex {
//
//public:
//	Complex() { real = 0; imag = 0; }
//	Complex(double r, double i) { real = r; imag = i; }
//	Complex operator +(Complex &c2);
//	void display();
//private:
//	double real;
//	double imag;
//};
//
//Complex Complex:: operator +(Complex &c2)
// {
//	Complex c;
//	c.real = real + c2.real;
//	c.imag = imag + c2.imag;
//	return c;
//}
//
//void Complex::display()
//{
//	cout << "(" << real << "," << imag << "i" << endl;
//}
//int main()
//{
//	Complex c1(3, 4), c2(5, -10), c3;
//	c3 = c1 + c2;
//	cout << "c1" <<endl ; c1.display();
//	cout << "c2" << endl; c2.display();
//	cout << "c3" << endl; c3.display();
//
//	while (1);
//	return 0;
//
//}

////重载双目运算符
//#include<iostream>
//using namespace std;
//class String
//{
//public:
//	String() { p = NULL; }
//	String(char * str);
//	friend bool operator >(String &string1, String &string2);
//	friend bool operator<(String &string1, String &string2);
//	friend bool operator==(String &string1, String &string2);
//
//	void display();
//private:
//	char *p;
//};
//String::String(char * str)
//{
//	p = str;
//}
//void String::display()
//{
//	cout << p;
//}
//bool operator >(String&string1, String &string2)
//{
//	if (strcmp(string1.p, string2.p) > 0)
//		return true;
//	else return false;
//}
//bool operator <(String&string1, String &string2)
//{
//	if (strcmp(string1.p, string2.p) > 0)
//		return false;
//	else return true;
//}
//bool operator ==(String&string1, String &string2)
//{
//	if (strcmp(string1.p, string2.p) == 0)
//		return true;
//	else return false;
//}
//void compare(String &string1, String &string2)
//{
//	if(operator >(string1,string2)==1)
//	{
//		string1.display(); cout << ">"; string2.display();
//
//	}
//	else
//		if (operator ==(string1, string2) == 1)
//		{
//			string1.display(); cout << "="; string2.display();
//		}
//		else
//			if (operator <(string1, string2) == 1)
//			{
//				string1.display(); cout << "<"; string2.display();
//			}
//}
//
//int main()
//{
//	String string1("Hello"); String string2("Book"); String string3("Computer");
//	String string4("Hello");
//	compare(string1, string2);
//	compare(string2, string3);
//	compare(string1, string4);
//	cout << (string1 > string2) << endl;
//	while (1);
//	return 0;
//}

//// 重载单目运算符
//#include <iostream>
//using namespace std;
//class Time
//{
//public:
//	Time() { minute = 0; second = 0; }
//	Time(int m, int s):minute(m), second(s) {}
//	Time operator ++();
//	void display() { cout << minute << ":" << second << endl; }
//private:
//	int minute;
//	int second;
//
//};
//Time Time::operator++()
//{
//	if (++second > 60)
//	{
//		second -= 60;
//		++minute;
//	}
//	return *this;
//}
//int main()
//{
//	Time time1(34, 0);
//	for (int i = 0; i < 61; ++i)
//	{
//		++time1;
//		time1.display();
//	}
//	while (1);
//	return 0;
//}
//
//// p314 重载流插入与流提取
//#include<iostream>
//using namespace std;
//class Complex
//{
//public:
//	Complex() { real = 0; imag = 0; }
//	Complex(double r, double i) :real(r), imag(i) {}
//	Complex operator + (Complex &c2);
//	friend ostream & operator <<(ostream &, Complex &);
//private:
//	double real;
//	double imag;
//};
//Complex Complex:: operator +(Complex &c2)
//{
//	return Complex(real + c2.real, imag + c2.imag);
//}
//ostream & operator <<(ostream &output ,Complex &c)
//{
//	output << "(" << c.real << "+" << c.imag << "i)" << endl;
//	return output;
//}
//
//int main()
//{
//	Complex c1(2, 4), c2(6, 10), c3;
//	c3 = c1 + c2;
//	cout << c2 << endl;
//	while (1);
//	return 0;
//}

//
//// p316
//#include<iostream>
//using namespace std;
//class Complex
//{
//public:
//	Complex() { real = 0; imag = 0; }
//	Complex(double r,double i):real(r),imag(i){}
//	friend ostream & operator <<(ostream &, Complex &);
//	friend istream & operator >> (istream &, Complex &);
//private:
//	double real;
//	double imag;
//};
//ostream& operator<<(ostream &output, Complex &c) {
//	output << "(" << c.real << "+" << c.imag << "i)";
//	return output;
//}
//istream &operator >> (istream &input, Complex & c)
//{
//	input >> c.real >> c.imag;
//	return input;
//}
//int main()
//{
//	Complex c1, c2;
//	cin >> c1 >> c2;
//	cout << "c1=" << c1 << endl;
//	cout << "c2=" << c2 << endl;
//	while (1);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Complex
//{public:
//	Complex() { real = 0; imag = 0; }
//	Complex(double r) { real = 0; imag = r; }
//	Complex(double r, double i) { real = r; imag = i; }
//	//friend Complex operator +(Complex c1, Complex c2);
//	void display();
//	// 不能同时有运算符重载和类型转换
//	//但是可以同时有类型转换和转换构造，且类型转换优先级更高？？得看左边是什么值，
//	operator double()
//	{
//		return real;
//	}
//private:
//	double real;
//	double imag;
//
//
//};
////Complex operator +(Complex c1, Complex c2)
////{
////	return Complex(c1.real + c2.real, c1.imag + c2.imag);
////}
//void Complex::display()
//{
//	cout << "(" << real << "," << imag << "i" << endl;
//}
//
//int main()
//{
//	Complex c1(3.0, 4.0), c2(5, -10), c3;
//	c3  = c1 + 2.5;// (0,5.5)，先用类型转换c1转换成3,3+2.5是5.5，然后看左边，
//	/***********************************************************
//
//							1、类型转换和运算符重载同级，不能同时存在。
//							2、有类型转换时，先使用类型转换，有需要时 再需要转换构造。
//							3、有运算符重载，可以先使用转换构造函数
//
//	*********************************************************************************************/
//	//是复数，需要类型转换，自动转换，然后利用了转换构造，
//	double d = c1 + 2.5;// 这里右边先用了类型转换，左边是实部，不需要进行类型转换，
//	c3.display();
//	while (1);
//	return 0;
//}

////p91 3.14
//#include<vector>
//using std::vector;
//using namespace std;
//#include<iostream>
//int main()
//{
//	vector<int>v2;
//	int cin1;
//	for (int i = 0; i < 10; ++i)
//	{
//		cin >> cin1;
//		v2.push_back(cin1);
//	}
//
//while (1);
//	return 0;
//
//}

//#include<vector>
//#include<iostream>
//using std::vector;
//using namespace std;
//int main()
//{
//	vector<int> v{ 1,2,3,4,5,6,7,8,9 };
//	for (auto &i : v)
//		i *= i;
//	for (auto i : v)
//		cout << i << " ";
//	cout << endl;
//	while (1);
//	return 0;
//}

////p94 3.16
//#include<vector>
//#include<iostream>
//using std::vector;
//using namespace std;
//int main()
//{
//	vector<int >v1;
//	vector<int>v2(10);
//	vector<int>v3(10, 42);
//	vector<int>v4{ 10 };
//	vector<int>v5{ 10,42 };
//	vector<string>v6{ 10 };
//	vector<string>v7{ 10,"hi" };
//	cout << "v1_size:" << v1.size() << endl;
//	cout << "v1_empty()" << v1.empty() << endl;
//	vector<int>ivec;
//	ivec.push_back(42);
//
//	while (1);
//	return (0);
//}

////p96
//#include<vector>
//#include<string>
//using std::vector;
//using std::string;
//int main()
//{
//	string s("some string");
//	if (s.begin() != s.end())//判断是否为空
//	{
//		auto it = s.begin();
//		*it = toupper(*it);
//	}
//	while (1);
//	return 0;
//
//}

////p300
//#include<vector>
//#include<list>
//#include<string>
//#include<deque>
//#include<forward_list>
//
//using std::list;
//using std::vector;
//using std::string;
//using std::deque;
//using std::forward_list;
//int main()
//{
//	list<string> authors = { "Milto","Shakespeare","Austen" };
//	vector<const char*> articles = { "a","an","true" };
//
//	list<string> list2(authors);//正确：类型匹配,同为list
//	//deque<string> authList(authors);//错误：容器类型不匹配
//	deque<string> authList(authors.begin(), authors.end());
//	//vector<string>words(articles);//错误：容器类型必须匹配；
//	vector<string>words(articles.begin(),articles.end());// 正确，容器类型不匹配，但是使用的是拷贝一个范围
//	//正确：可以将const char* 元素转换为string
//	forward_list<string>words(articles.begin(), articles.end());
//}

////p303
//#include<list>
//#include<string>
//#include<vector>
//using std::list;
//using std::string;
//using std::vector;
//int main()
//{
//	list<string> names;
//	vector<const char*> oldstyle;
//	//names = oldstyle;//错误：容器类型不匹配
//	names.assign(oldstyle.begin(), oldstyle.end());
//	list<string> slist1(1);
//	slist1.assign(10, "Hiya!");
//	while (1);
//	return 0;
//}

//// p 305 9.15
//#include<vector>
//#include<iostream>
//using std::vector;
//using std::cout;
//using std::endl;
//int main()
//{
//	vector<int > a = { 1, 2, 3, 4, 5 };
//	vector<int > b = { 1,2,3,4,5,6 };
//	if (a == b)
//		cout << "a==b" << endl;
//	else
//		if (a > b)
//			cout << "a>b" << endl;
//		else
//			if (a < b)
//				cout << "a<b"<<endl;
//	while (1);
//	return 0;
//
//}

////p309 练习9.3.1
//
//#include<fstream>
//#include<sstream>
//#include<string>
//#include<vector>
//#include<list>
//#include<deque>
//using namespace std;
//using std::cout;
//using std::cin;
//
//int main(int argc, char**argv)
//{
//	deque<string> deque1;
//	string buf;
//	while (cin >> buf)
//	{
//		deque1.push_back(buf);//向标准容器中添加元素
//	}
//	deque<string>::iterator it1 = deque1.begin();
//	for (it1; it1 != deque1.end(); it1++)
//	{
//		cout << *it1 << endl;
//	}
//	return 0;
//}

////p309
//#include<vector>
//#include<iostream>
//using std ::  vector;
//int main()
//{
//	vector <int > v = { 1,2,3,4 };
//	if (!v.empty()) {
//		// val1和val2是v中第一个元素的拷贝
//		auto val1 = *v.begin(), val2 = v.front();
//		// val3和val4是c中最后一个元素的拷贝
//		auto last = v.end();
//		auto val3 = *(--last);// 不能递减forward_list迭代器
//		auto val4 = v.back();
//	}
//	while (1);
//	return 0;
//
//}

////p311  9.23
//#include<vector>
//using std::vector;
//int main()
//{
//	vector<int > v = {0};
//	auto a = v.at(0);
//	auto b = v.front();
//	auto c = v.back();
//	while (1);
//	return 0;
//}

//// p 318页码
//#include<vector>
//#include<iostream>
//using std::vector;
//using namespace std;
//int main()
//{
//	vector<int> ivec;
//	//size应该为0；capacity的值依赖于具体实现；
//	cout << "ivec:size:" << ivec.size() << endl;
//	cout << "ivec:capacity:" << ivec.capacity() << endl;
//	//添加24个元素
//	for (vector<int>::size_type ix = 0; ix != 24; ++ix)
//		ivec.push_back(ix);
//
//	// size应该为24，capacity应该大于24，具体依赖于其实现
//	cout << "ivec:size:" << ivec.size() << endl;
//	cout << "ivec:capacity" << ivec.capacity() << endl;//capacity大小为28
//
//	// 预分配一些空间
//	ivec.reserve(50);		// 将capacity至少设定50，可能会更大
//	//size应该为24，capacity应该大于50，具体依赖于标准库实现
//	cout << "capacity:" << ivec.capacity() << endl;
//	// 将容量用光
//	while (ivec.size() != ivec.capacity())
//		ivec.push_back(0);
//	cout << "ivec:size" << ivec.size() << endl;//50
//	cout << "ivec:capacity" << ivec.capacity() << endl;//与size相等
//	ivec.push_back(32);
//	cout << "ivec:size" << ivec.size() << endl;//51
//	cout << "ivec:capacity" << ivec.capacity() << endl;//75，此时容量增加为原来的1.5倍，而不是2倍
//	// 利用shirink_to_fit退回
//	ivec.shrink_to_fit();//归还内存
//	//size应该未改变，capacity的值具体依赖于实现
//	cout << "ivec:capacity" << ivec.capacity() << endl;//51多余内存完全退回给电脑
//
//	while (1);
//	return 0;
//}

//// p329
//#include<deque>
//#include<stack>
//#include<iostream>
//using namespace std;
//using  std::stack;
//using std::deque;
//int main()
//{
//	deque<int> deq = { 1,2,4 };
//	stack<int> stk(deq);				//从deq拷贝元素到stk
//	while (1);
//	return 0;
//
//}

////泛型算法
//#include<algorithm>
//#include<numeric>
//#include<vector>
//#include<iostream>
//using std::vector;
//using std::cout;
//using std::endl;
//int main()
//{
//	int val = 42;
//	vector<int> vec = { 1,2,3,42 };
//	//若找到与val相等的元素，则返回结果指向它，否则返回结果为vec.cendl
//	auto result = find(vec.cbegin(), vec.cend(), val);
//	cout << "the value" << val
//		<< (result == vec.cend() ? "is not present" : "is present") << endl;
//	while (1);
//	return 0;
//}

////p 337 10.1泛型算法,count返回值相同的个数
//#include<algorithm>
//#include<numeric>
//#include<vector>
//#include<iostream>
//using std::vector;
//using std::cout;
//using std::endl;
//int main()
//{
//	int val = 3;
//	vector<int> vec = { 1,2,3,42 ,3,3,3};
//	//若找到与val相等的元素，则返回结果指向它，否则返回结果为vec.cendl
//	auto count1 = count(vec.cbegin(), vec.cend(), val);
//	cout << "the value" <<count1  << endl;
//	while (1);
//	return 0;
//}

//// p339 10.2.1
//#include<vector>
//#include<numeric>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	vector<int> vec = { 1,2,3,4,5 };
//	int sum = accumulate(vec.begin(), vec.end(), 0);
//	while (1);
//	return 0;
//}

//#include<iterator>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector <int >vec;
//	auto it = back_inserter(vec);//通过它赋值会将元素添加到vec中
//	*it = 42;// vec 中现有一个元素，值为42
//
//}

////p342 10.6
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	vector<int> vec = { 1,2,3,3,4,5,5,6 };
//	fill_n(vec.begin(),vec.size(), 0);
//	while (1);
//	return 0;
//}

//#include<vector>
//using namespace std;
//#include<string>
//#include<algorithm>
//int main()
//{
//	void elimDups(vector<string> &words);
//	vector<string> vec = { "fox","jumps","over","quick","red","slow","the","turtle" };
//	elimDups(vec);
//	while (1);
//	return 0;
//
//}
//void eliDups(vector<string> &words)
//{
//	//按字典排序words，以便查找重复单词
//	sort(words.begin(), words.end());
//	//unique重排输入范围，使得每个单词值出现一次
//	// 排列在范围的前部，返回指向不重复区域之后一个位置的迭代器
//	auto end_unique = unique(words.begin(), words.end());
//	//使用向量操作erase删除重复单词
//	words.erase(end_unique, words.end());
//	//while (1);
//}

//// p344
//#include<vector>
//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//int main()
//{
//	void elimDups(vector<string> &words);
//	bool isShorter(const string &s1, const string &s2);
//	vector<string> vec = { "fox","jumps","over","quick","red","slow","the","turtle" };
//	elimDups(vec);
//	stable_sort(vec.begin(), vec.end(), isShorter);
//	for (const auto &s : vec)
//		cout << s << " ";
//	while (1);
//	return 0;
//
//}
//bool isShorter(const string &s1, const string &s2)
//{
//	return s1.size() < s2.size();
//}
//void eliDups(vector<string> &words)
//{
//	bool isShorter(const string &s1, const string &s2);
//	//按字典排序words，以便查找重复单词
//	//sort(words.begin(), words.end(),isShorter);
//	sort(words.begin(), words.end());
//	//unique重排输入范围，使得每个单词值出现一次
//	// 排列在范围的前部，返回指向不重复区域之后一个位置的迭代器
//	auto end_unique = unique(words.begin(), words.end());
//	//使用向量操作erase删除重复单词
//	words.erase(end_unique, words.end());
//	//while (1);
//}

////p375
//#include<map>
//#include<string>
//#include<iostream>
//using namespace std;
//int main()
//{
//	//统计每个单词在输入中出现的次数
//	map<string, size_t>word_count; //string到size_t的空map
//	string word;
//	for (int i = 0; i < 3; ++i)
//	{
//		cin >> word;
//		++word_count[word]; //提取word的极速器并将其加一,[
//	}
//	for (const auto &w : word_count)
//		// 打印结果
//		cout << w.first << "occurs" << w.second << ((w.second > 1) ? "times" : "time") << endl;
//	while (1);
//	return 0;
//}

//// 使用set
//#include<set>
//#include<map>
//#include<string>
//#include<iostream>
//#define N 10
//#if defined N
//
//#endif
//using namespace std;
//int main()
//{
//	map<string, size_t> word_count; //string到size_t的空map
//	set<string> exclude = { "The","But","And","Or","An" };
//	string word;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> word;
//		if (exclude.find(word) == exclude.end())	//利用find函数性质，如果关键字在set中，
//																							// 迭代器指向关键字，否则，find返回尾后迭代器
//			++word_count[word]; // 获取并递增word的计数器
//	}
//}

//// p377
//#include<vector>
//#include<set>
//#include<iostream>
//using namespace std;
//int main()
//{
//	// 定义一个有着20个元素的vector，保存0-9每个整数的两个拷贝
//	vector<int> ivec;
//	for (vector<int>::size_type i = 0; i != 10; ++i)
//	{
//		ivec.push_back(i);
//		ivec.push_back(i);
//	}
//	//iset包含来自ivec的不重复的元素，miset包含所有ivec不重复的元素，miset包含所有20个元素
//	set<int> iset(ivec.cbegin(), ivec.cend());//这里很厉害，属于容器的构造，见p295
//	multiset<int> miset(ivec.cbegin(), ivec.cend());
//	cout << ivec.size() << endl;
//	cout << iset.size() << endl;
//	cout << miset.size() << endl;
//	while (1);
//	return 0;
//}

////p378
//#include<iostream>
//#include<string>
//#include<fstream>
//#include<vector>
//#include<map>
//#include<cctype>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	// map的定义
//	map<string, vector<string>> family;
//
//	string first_name, child_name;
//
//	// 在while中使用lambda语句，可以传入多条语句参数，将我们想要传入的输出参数也放在其中
//
//}

//// p
//int main()
//{
//	int (*p1)[4]=new int[1][4];//其值未定义
//	int(*p2)[4] = new int[1][4]();// 值初始化为0****
//	while (1);
//	return 0;
//}

////p 409
//int main()
//{
//	int i, *pi1 = &i, *pi2 = nullptr;
//	double *pd = new double(33), *pd2 = pd;
//	//delete i;		//错误：i不是一个指针；
//	//delete pi1;		//未定义：pi1指向一个局部变量
//	delete pd;			//正确
//	//delete pd2;		//未定义:pd2指向的内存已经被释放了
//	delete pi2;		// 正确：释放一个空指针总是没有错误的
//}

//#include<string>
//#include<memory>
//#include<vector>
//#include<list>
//
//using namespace std;
//int main()
//{
//	shared_ptr<string> p1;				//
//	shared_ptr<list<int>> p2;
//
//	// 如果p1不为空，检查它是否指向一个空string
//	if (p1&& p1->empty())
//		*p1 = "hi";
//	auto p = make_shared<int >(43);
//	auto q(p);
//	//p402
//	auto r = make_shared<int >(42);
//	r = q;		//给r赋值，令它指向另一个地址；
//					// 递增q指向的对象的引用计数；
//					// 递减r原来指向的的对象的引用计数
//					// r原来指向的对象已没有引用者，会自动释放
//	vector<string> v1; //
//	{//新作用域
//		vector<string>v2 = { "a","an","the" };
//		v1 = v2; // 从v2拷贝元素到v1中
//
//	}//v2被销毁，其中的元素也被销毁
//	 // v1有三个元素，是原来v2中元素的拷贝
//
//
//	while (1);
//	return 0;
//
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	cout << s << endl;
//	while (1);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[3] = { 1,2,3 };
//	for (auto &i : a)
//		cout << i << endl;
//	while (1);
//	return 0;
//}

////p94页 3.17
//#include<vector>
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	vector<string> svec;
//	string a;
//	for (int i = 0; i < 5; ++i)
//	{
//		cin >> a;
//		 svec.push_back(a);
//	}
//	for (decltype(svec.size()) i1 = 0; i1 < svec.size(); ++i1)
//		for (int j = 0; j < svec[i1].length(); ++j)
//		{
//			svec[i1][j] = toupper(svec[i1][j]);//只能对每个字符大写
//		}
//	for (int i = 0; i < 5; ++i)
//		cout << svec[i]<<endl;
//	while (1);
//	return 0;
//}

////p99   3.22
//#include<string>
//#include<vector>
//#include<iostream>
//using namespace std;
//int main()
//{
//	vector<string> svec { "thisis","","a" };// 空字符串并不是"   ",而是"".
//	for (auto it = svec.begin(); it != svec.end() && !it->empty(); ++it)//注意it->empty()前面的！
//	{
//		for(int j=0;j!=(*it).length();++j)
//		//for (auto j = (*it).begin(); j != (*it).end(); ++j)
//		{
//			(*it)[j] = toupper((*it)[j]);
//			//*j = toupper(*j);
//			//cout << *j << endl;
//		}
//	}
//
//	while (1);
//	return 0;
//
//
//
//}

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<string> test{ "jlskjflsl ","", "jkljfksjlf","" };//第二个为空。
//	for (auto i = test.begin(); i != test.end() && !i->empty(); i++)
//	{
//		for (auto j = (*i).begin(); j != (*i).end(); j++)
//		{
//			*j = toupper(*j);
//			cout << *j << endl;
//		}
//	}
//	return 0;
//}

////p99 3.23
//#include<vector>
//#include<iostream>
//using  namespace std;
//int main()
//{
//	vector<int>ivec(10, 2);
//	for (auto it = ivec.begin(); it != ivec.end(); ++it)
//	{
//		(*it) *= 2;
//		cout << *it << endl;
//	}
//	while (1);
//	return 0;
//}

//#include<iostream>
//#include<array>
//using namespace std;
//int main()
//{
//	constexpr int a = 10;
//	int b[a];
//	array<int, 10> ac ;
//	ac = { 0 };//可以，p302上为什么说不行呢？？
//	while (1);
//	return 0;
//}

////p309 9.18题
//#include<deque>
//#include<string>
//#include<iostream>
//#include<time.h>
//using namespace std;
//int main()
//{
//	clock_t start, end;
//	double dur;
//	string s;
//	deque<string> sde;
//	start = clock();
//	for (int i = 0; i < 5; ++i)
//	{
//		cin >> s ;
//		sde.push_front(s);//push_front可以把其输入序列反过来
//	}
//	for (auto it = sde.begin(); it != sde.end(); ++it)
//		cout << *it << endl;
//	end = clock();
//	dur = double(end - start);
//
//	while (1);
//	return 0;
//
//}

////p311 9.24
//#include<vector>
//#include<array>
//#include<iostream>
//using namespace std;
//int main()
//{
//	vector<int> ivec = { 10, 1 };
//	array < vector<int>, 10 >arr;
//	vector<vector<int>> ivec1;
//
//	cout << ivec[0] << endl;
//	cout << ivec.at(0) << endl;
//	cout << *ivec.begin() << endl;
//	cout << ivec.front() << endl;
//	while (1);
//	return 0;
//
//}

// #include<vector>
// #include<list>
// #include<algorithm>
// #include<numeric>
// #include<iostream>
// #include<map>

//using namespace std;
//int main()
//{
//	int val = 42;
//	int aarr[] = { 111,333 };
//	int sum_array = accumulate(begin(aarr), end(aarr), 0);
//	vector<int> avec = { 10,43,42,41 };
//	int sum = accumulate(avec.begin(), avec.end(), 0);
//
//	//auto result =std::find(avec.cbegin(), avec.end(), val);
//	//cout << "the value" << val
//	//	<< result == avec.cend() << endl;
//	while (1);
//	return 0;
//}

//

////p377
////#include<vector>
////#include<set>
////#include<iostream>
//#include<vector>
//#include<list>
//#include<algorithm>
//#include<numeric>
//#include<iostream>
//#include<map>
//#include<set>
//using namespace std;
//int main()
//{
//	//定义一个含有20个元素的vector，保存0到9每个整数的两个拷贝
//	vector<int>ivec;
//	for (vector<int>::size_type i = 0; i != 10; ++i)
//	{
//		ivec.push_back(i);
//		ivec.push_back(i);//每个数据重复保存2次
//	}
//	set<int> iset(ivec.begin(), ivec.end());
//	multiset<int>miset(ivec.cbegin(), ivec.cend());
//	cout << ivec.size() << endl;
//	cout << iset.size() << endl;
//	cout << miset.size() << endl;
//	while (1);
//	return 0;
//
//}

// //p381 11.12 11.13
// #include<utility>
// #include<vector>
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
// 	vector<pair<string, int>> pvec;
// 	for (int i = 0; i < 5; ++i)
// 	{
// 		string first;
// 		int second;
// 		cin >> first;
// 		cin >> second;
// 		pair<string, int> p(first, second);
//         // pair<string, int> p={first, second};
//         // pair<string, int> p=make_pair(first, second);
// 		pvec.push_back(p);
// 	}
// 	while (1);
// 	return 0;
// }

////p382set的关键字是const的
//#include<set>
//#include<iostream>
//using namespace std;
//int main()
//{
//	set<int> iset = { 1,2,3,4,5,6 };
//	set<int>::iterator set_it = iset.begin();
//	if (set_it != iset.end())
//	{
//		//*set_it=32;//错误
//		cout << *set_it << endl;
//	}
//	while (1);
//	return 0;
//}

//#define TPA_OPT  TPA_OPT1
//int main()
//{
//	int a = 010;//8，8进制
//	int b = 010.99;//,10，10进制，double->int
//	int  TPA_OPT1 = 5;
//	while (1);
//	return 0;
//
//}

////2020.04.12 牛客题目T3
//#include<iostream>
//using namespace std;
//void fun(char ch, float x[])
//{
//
//	cout << "可以运行" << endl;
//
//}
//int main()
//{
//	float a[10] = { 0 };
//	fun(32, a);
//	//fun('65', 2.8);//错误提示：“double”类型实参与"float*"类型不兼容
//	//t = fun('D', A);
//	//fun("abc", a[]);//"const char *" 类型的实参与 "char" 类型的形参不兼容
//	while (1);
//	return 0;
//}

////2020.04.12-1
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	const char* a = "bbc";
//	const char* b = "abc";
//	auto  result_ab = strcmp(a, b);	//1
//	cout << "strcmp(a, b)=" << result_ab << endl;
//	auto result_ba = strcmp(b, a);	//- 1
//	cout << "strcmp(b, a)=" << result_ba << endl;
//	auto result_aa = strcmp(a, a);	// 0
//	cout << "strcmp(a, a)=" << result_aa << endl;
//	if (strcmp(b, a))
//	{
//		cout << "执行strcmp(b, a)" << endl;
//	}
//	if (strcmp(a, b))
//	{
//		cout << "执行strcmp(a, b)" << endl;
//	}
//	if (strcmp(a, b)>0)
//	{
//		cout << "执行strcmp(a, b)>0" << endl;
//	}
//
//	while (1);
//	return 0;
//
//}

// //p405
// #include <vector>
// #include <string>
// #include <memory>
// using namespace std;
// class StrBlob
// {
//     friend bool operator==(const StrBlob &lhs, const StrBlob &rhs);
//     friend bool operator!=(const StrBlob &lhs, const StrBlob &rhs);
//     //需要比较指针所指的v'e'co't'r的大小即可
//     friend bool operator<(const StrBlob &lhs, const StrBlob &rhs);
//     friend bool operator<=(const StrBlob &lhs, const StrBlob &rhs);
//     friend bool operator>(const StrBlob &lhs, const StrBlob &rhs);
//     friend bool operator>=(const StrBlob &lhs, const StrBlob &rhs);

// public:
//     typedef std::vector<std::string>::size_type size_type;
//     StrBlob();
//     StrBlob(std::initializer_list<std::string> il);
//     size_type size() const { return data->size(); }
//     bool empty() const { return data->empty(); }
//     //添加删除元素
//     void push_back(const std::string &t) { data->push_back(t); }
//     void pop_back();

//     //元素访问
//     std::string &front();
//     std::string &back();

// private:
//     std::shared_ptr<std::vector<std::string>> data;
//     void check(size_type i, const std::string &msg) const;
// };
// StrBlob::StrBlob() : data(make_shared<vector<string>>) {}
// StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}
// void StrBlob::check(size_type i, const string &msg) const
// {
//     if (i >= data->size())
//         throw out_of_range(msg);
// }
// string &StrBlob::front()
// {
//     //如果vector为空，check会抛出一个异常
//     check(0, "front on empty StrBlob");
// }
// string &StrBlob::back()
// {
//     check(0, "back on empty StrBlob");
//     return data->back();
// }
// void StrBlob::pop_back()
// {
//     check(0, "pop_back on empty StrBlob");
//     data->pop_back();
// }
// bool operator==(const StrBlob &lhs, const StrBlob &rhs)
// {
//     return lhs.data == rhs.data; //不应当加*
// }
// bool operator!=(const StrBlob &lhs, const StrBlob &rhs)
// {
//     return !(lhs == rhs);
// }
// bool operator<(const StrBlob &lhs, const StrBlob &rhs)
// {
//     //比较每一个指针所指向的值的大小？？还是本身不适合有小于？
//     return *lhs.data<*rhs.data;
// }

// //对于访问一个不存在元素的尝试，StrBlobPtr会抛出一个异常
// #include <memory>
// using namespace std;
// class StrBlobPtr
// {
//     friend bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
//     friend bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

// public:
//     StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
//     std::string &deref() const;
//     StrBlobPtr &incr(); //前缀递增
//     //递增和递减运算符
//     StrBlobPtr &operator++();
//     StrBlobPtr &operator--();
//     //后置递增
//     StrBlobPtr &operator++(int);
//     StrBlobPtr &operator--(int);
//     //*
//     string &operator*() const
//     {
//         auto p = check(curr, "dereference past end");
//         return (*p)[curr]; //(*p)是对象所指的vector
//     }
//     string *operator->() const
//     { //将实际工作委托给解引用运算符号
//         return &this->operator*();
//     }

// private:
//     //若检查成功，check返回一个纸箱vector的shared_ptr
//     std::shared_ptr<std::vector<string>>;
//     check(size_t, const std::string &) const;
//     //保存一个weak_ptr,意味着底层vector可能被销毁
//     weak_ptr<vector<string>> wptr;
//     size_t curr;
// };
// //前置递增
// StrBlobPtr &StrBlobPtr::operator++()
// {
//     //如果curr已经指向了容器的尾后位置，则无法递增它
//     check(curr, "increment past end of strblobstr");
//     ++curr;
//     return *this;
// }
// //
// StrBlobPtr &StrBlobPtr::operator--()
// {
//     //如果curr是0，则继续递减它将产生一个无效下标
//     --curr;
//     check(curr, "decrement past begin of strblobptr");
//     return *this;
// }
// //后置自增
// //后置自增对象之前需要首先记录返回原值
// StrBlobPtr StrBlobPtr::operator++(int)
// {
//     //此处无需检查有效性，调用牵制递增运算时才需要检查
//     StrBlobPtr ret = *this;
//     ++*this;    //向前移动一个元素，前置++需要检查递增的有效性
//     return ret; //返回之前记录的状态
// }
// //后置自减
// StrBlobPtr StrBlobPtr::operator++(int)
// {
//     //此处无须检查有效性,调用牵制递减运算时才需要检查
//     StrBlobPtr ret = *this;
//     --*this;
//     return ret;
// }
// bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
// {
//     auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
//     //两个指针都为空，或指向相同的vector且curr指向相同元素时，相等，否则，不等
//     if (l == r)
//         return (!r || lhs.curr == rhs.curr);
//     else
//         return false;
// }
// //多为数组的建立与释放

//#ifdef VCZH_CHECK_MEMORY_LEAKS
//#define _CRTDBG_MAP_ALLOC
//#include <stdlib.h>
//#include <crtdbg.h>
//#define VCZH_CHECK_MEMORY_LEAKS_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
//#define new VCZH_CHECK_MEMORY_LEAKS_NEW
//#endif
//#define N 6
//int main()
//{
//	//_CrtSetBreakAlloc(99);
//	//方法1
//	int m =50;
//	int ***arr = new int**[m];
//
//	int *ar2 = new int[3];
//	for (int i = 0; i < m; ++i)
//	{
//		arr[i] = new int*[m];
//		for (int j = 0; j < m; ++j)
//			arr[i][j] = new int[m]();
//	}
//
//	for (int i = 0; i < m; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			delete[] arr[i][j];
//			//delete arr[i][j];
//			arr[i][j] = NULL;
//		}
//		delete[] arr[i];
//		//delete arr[i];
//		arr[i] = NULL;
//	}
//	delete[] arr;
//	//delete arr;
//	arr = NULL;
//
//	////方法2
//	int(*p)[N][4] = new int[N][N][4];
//	delete[]p;
//	p = NULL;
//	//delete[]p[N][4];
//	//for (int i = 0; i < N; ++i)
//	//{
//	//	for (int j = 0; j < N; ++j)
//	//		delete[]p[i][j];
//	//	delete[]p[i];
//	//}
//	//delete[] p;
//		//
//	auto  judge=_CrtDumpMemoryLeaks();
//
//	return 0;
//}

// //p411 12.6
// #include<vector>
// #include<iostream>
// using namespace std;
// //返回vector指针
// vector<int>* return_v()
// {
// 	vector<int>* pvec=new vector<int>;
// 	return pvec;
// }
// void read(vector<int>* pvec)
// {
// 	int a;
// 	for (int i = 0; i < 5; ++i) {
// 		cin >> a;
// 		(*pvec).push_back(a);
// 	}

// }
// void out(vector<int>*pvec)
// {
// 	for (auto it = (*pvec).begin(); it != (*pvec).end(); ++it)
// 		cout << *it << endl;
// }
// int main()
// {
// 	//auto *pvec = new vector<int>;
// 	auto pvec=return_v();
// 	read(pvec);
// 	out(pvec);
// 	delete pvec;
// 	_crtdumpmemoryleaks();
// 	while (1);
// 	return 0;
// }

// //p411 12.7
// #include<vector>
// #include<memory>
// #include<iostream>
// using namespace std;
// shared_ptr<vector<int>> fun_vec()
// {
//     //shared_ptr<vector<int>> p(new vector<int>());
//     shared_ptr<vector<int>> p;
//     return p;
// }
// void input_ivec(shared_ptr<vector<int>>p)
// {
//     int j;
//     cout<<"请输入数据：";
//     for(int i=0;i<5;++i)
//     {
//         cin>>j;
//         (*p).push_back(j);

//     }

// }
// void output_ivec(shared_ptr<vector<int>>p)
// {
//     for(auto it=(*p).begin() ;it!=(*p).end();++it)
//     cout<<*it<<endl;
// }
// int main()
// {
//     auto p=fun_vec();
//     input_ivec(p);
//     output_ivec(p);
//     return 0;

// }

////p412
//#include<memory>
//using namespace std;
//int main()
//{
//	{
//		//智能指针无需delete
//		shared_ptr<int> p1;
//
//		shared_ptr<int> p2(new int(33));
//		//shared_ptr<vector<int>>p3 = new vector<int>;//错误，不能将内置指针隐式的转换成智能指针
//		shared_ptr<vector<int>> p3(new vector<int>);
//		(*p3).push_back(5);
//	}
//	_CrtDumpMemoryLeaks();
//	while (1);
//	return 0;
//}

//int main()
//{
//	typedef int arr[32];
//	int *p = new arr;
//}

// #include <iostream>
// using namespace std;
// class Sales_data
// {
// public:
//     //其他成员和构造函数的定义，如前
//     // 与合成的拷贝
//     Sales_data(const Sales_data &);
//      private : std::string bookNo;

//     int units_sold = 0;
//     double revenue = 0.0;
// };
// Sales_data::Sales_data(const Sales_data &orig) : bookNo(orig.bookNo), units_sold(orig.units_sold), revenue(orig.revenue) {}

//#include<iostream>
//using namespace std;
//class Complex {
//public:
//	Complex(double r = 0, double i = 0) :real(r),imag(i){}
//	friend ostream &operator<<(ostream &, const Complex&);
//private:
//	double real;
//	double  imag;
//};
//ostream  &operator <<(ostream&out, const Complex& com)//第一个参数非const
//{
//	out << "(" << com.real << "," << com.imag << ")" << endl;
//	return out;
//}
//int main()
//{
//	Complex com;				//正确定义无参数形式类
//	//Complex com();		//错误形式;
//	//Complex com(3, 4);
//	cout << com << endl;
//	while (1);
//	return 0;
//}

//调试放到了vs code 上2020.04.18周六，来上海两周年
/* 
#include<iostream>
int main()
{
    std::cout<<"Hello World"<<std::endl;
    std::system("pause");
    return 0;
} */

//进行16章模板与泛型编程的学习

////p578
////定义函数模板
// #include <iostream>
// #include <vector>
// using namespace std;
// template <typename t>
// int compare(const t &v1, const t &v2)
// {
//     if (v1 < v2)
//         return -1;
//     if (v2 < v1)
//         return 1;
//     return 0;
// }
// int main()
// {
//     //编译器根据实例化的参数，如下面的int类型实参
//     cout << compare(1, 0) << endl;
//     //vector类型
//     vector<int>vec1{1,2,4};
//     vector<int>vec2{1,2,3};
//     cout<<"vector: "<<compare(vec1,vec2);
//     return 0;
// }

// //p 584 类模板
// #include<vector>
// template<typename T>class Blob
// {
// public:
// typedef T value_type;
// typedef typename std::vector<T>::size_type size_type;
// //构造函数
// Blob();
// Blob(std::initializer_list<T> i1);
// //Blob中的元素数目
// size_type size() const{return data->size();}
// bool empty()const{return data->empty();}
// //添加和删除元素
// void push_back(const T&t){data->empty();}
// //移动版本，参见13.6.3节
// void push_back(T &&t){data->push_back(std::move());}
// void pop_back();
// //元素访问
// T& back();
// T& operator[](size_type i);
// private:
//     /* data */
//     std::shared_ptr<std::vector<T>> data;
// // 若data[i]无效，则抛出msg
// void check(size_type i,const std::string &msg) const;
// };

// #include<math.h>
// #include<cmath>
// int main()
// {
//     int units_sold1=0;
//     int units_sold2={0};
//     int units_sold3{0};
//     int units_sold4(0);
//     int *pint=nullptr;
//     int _Bed=3;//以下划线紧连大写字母开头可以
//     while(1);
// }

// #include<string>
// #include<iostream>
// using std::string;
// using std::cout;
// using std::endl;
// using std::cin;
// int main()
// {
//     string a="Hello world";
//     // auto a_size=a.size();
//     // auto a_sizeof=sizeof(a);
//     // auto a_sizeof_cha=sizeof('a');
//     // string line;
//     // while(getline(cin,line))
//     // cout<<line<<endl;
//     //======================================
//     //            三种循环方法             ||
//     //======================================
//     //范围for语句
//     //for(auto &c:a)
//     //c=toupper(c);
//     //利用下标循环
//     //for(decltype(a.size()) index=0;index!=a.size()&&!isspace(a[index]);++index)
//     //a[index]=toupper(a[index]);
//     // 利用迭代器
//     for(auto it=a.begin();it!=a.end()&& !isspace(*it);++it)
//     *it=toupper(*it);

//     while(1);
//     return 0;
// }

// //p86 3.6
// #include<string>
// #include<iostream>
// using std::string;
// using std::cout;
// using std::cin;
// using std::endl;
// int main()
// {
//     string s={"erw dfs  "};
//     for(char &c:s)//此处char或者auto都可以
//     c='X';//可以运行
//     //c="X";//运行错误，是字符不是字符串
//     return 0;
// }

// #include<vector>
// using std::vector;
// int main()
// {
//     vector<int> aint;
//     aint.push_back(1);
//     return 0;
// }

// //p94 3.20
// #include<vector>
// #include<iostream>
// using std::cin;
// using std::cout;
// using std::endl;
// using std::vector;
// int main()
// {
//     vector<int>ivec;
//     int i_int;
//     while(cin>>i_int)
//     ivec.push_back(i_int);

//     //输出紧挨着的两个和
//     for(decltype(ivec.size()) it=0;it!=ivec.size()-1;++it)
//     cout<<ivec[it]+ivec[it+1]<<endl;
//     //输出第一个和最后一个和，依次类推
//     for(decltype(ivec.size()) it=0;it!=ivec.size()&&(it!=ivec.size()/2);++it)
//     cout<<ivec[it]+ivec[ivec.size()-1-it]<<endl;
//     return 0;

// }

// //p135 输出表达式中使用条件运算符,运行不了！！！！
// #include<iostream>
// using std::cout;
// using std::endl;
// int main()
// {
//     int grade=90;
//     cout<<((grade<90?)"fail":"pass");
//     //cout<<(grade<90)?"fail":"pass"<<endl;
//     //cout<<grade<90?"fail":"pass"<<endl;
//     return 0;
// }

// // p229
// #include <string>
// #include <iostream>
// //
// class Sales_data
// {
//     //为Sales-data类的非成员函数所做的友元声明
//     //Sales_data的非成员函数
//     friend Sales_data add(const Sales_data &, const Sales_data &);
//     friend std::ostream &print(std::ostream &, const Sales_data &);
//     friend std::istream &read(std::istream, Sales_data &);
//     friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
//     friend bool operator==(const Sales_data &, const Sales_data &);
//     friend bool operator!=(const Sales_data &, const Sales_data &);
//     Sales_data &operator+=(const Sales_data &rhs);

// public: //public是必须的
//     friend ostream &operator<<(ostream &, const Sales_data &);

//     friend istream &operator>>(istream &, const Sales_data &);
//     /* data */
//     Sales_data() = default;
//     Sales_data(const std::string &s) : bookNo(s) {}
//     Sales_data(const std::&s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}
//     Sales_data(std::istream &);
//     //新成员：关于Sale_data的对象操作
//     std::string isbn() const { return bookNo; }
//     Sales_data &combine(const Sales_data);

// private:
//     double
//     avg_price() const
//     {
//         return units_sold ? revenue / units_sold : 0;
//     };
//     //数据成员和2.6.1节
//     std::string bookNo;
//     unsigned units_sold = 0;
//     double revenue = 0.0;
// };
// Sales_data add(const Sales_data &, const Sales_data &);
// std::ostream &print(std::ostream &, const Sales_data &);
// std::istream &read(std::istream, Sales_data &);

// double Sales_data ::avg_price() const
// {
//     if (units_sold)
//         return revenue / units_sold;
//     else
//         return 0;
// }
// //2020.05.1五一假期大概
// //定义返回this对象的函数
// Sales_data &Sales_data::combine(const Sales_data &rhs)
// {
//     units_sold += rhs.units_sold;
//     revenue += rhs.revenue;
//     return *this; //返回调用该函数的对象
// }
// //类的辅助函数
// std::istream &read(std::istream &is, Sales_data &item)
// {
//     double price = 0;
//     is >> item.bookNo >> item.units_sold >> price;
//     item.revenue = price * item.units_sold;
//     return is;
// }
// std::ostream &print(std::ostream &os, const Sales_data &item)
// {
//     os << item.isbn() << " " << item.units_sold << " "
//        << item.revenue << " " << item.avg_price();
// }
// //定义add函数
// Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
// {
//     Sales_data sum = lhs; //把lhs的数据成员拷贝给sun
//     sum.combine(rhs);
//     return sum;
// }
// //类外定义的构造函数
// Sales_data::Sales_data(std::istream &is)
// {
//     read(is, *this);
// }

// ostream &operator<<(ostream &os, const Sales_data &item)
// {
//     os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
//     return os;
// }
// istream &operator>>(istream &is, const Sales_data &item)
// {
//     double price; //不需要初始化，因为我们将先读入数据到price，之后才使用它
//     is >> item.bookNo >> item.units_sold >> price;
//     if (is)
//         item.revenue = item.units_sold * price;
//     else
//         item = Sales_data(); //输入失败，对象被赋予默认的状态
//     return is;
// }
// Sales_data operator+(const Sales_data &lhs,const Sales_data &rhs)
// { // 用友元的是 必须的，因为返回的值与左边对象无关，是一个新值
//     Sales_data sum = lhs;
//     sum += rhs;
//     return sum;
// }
// //定义对象相等判断
// bool operator==(const Sales_data &lhs, const Sales_data &rhs)
// {
//     return lhs.isbn() == rhs.isbn() &&
//            lhs.units_sold == rhs.units_sold &&
//            lhs.revenue == rhs.revenue;
// }
// //定义不等 p497
// bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
// {
//     return !(lhs == rhs);
// }
// //+=
// Sales_data &Sales_data::operator+=(const Sales_data &rhs)
// {
//     units_sold += rhs.units_sold;
//     revenue += rhs.revenue;
//     return *this;
// }
// //p627 hash的特例化版本
// //打开std命名空间，以便特例化std::hash
// namespace std
// {
// template <> //我们正在定义一个特例化版本，模板参数为Sales_data
// struct hasn<Sales_data>
// {
//     //用来散列一个无需容器的类型必须要定义下列leixing
//     typedef size_t resul_type;
//     typedef Sales_data argument_type; //默认情况下，此类型需要==
//     size_t operator()(const Sales_data &s) const;
//     //我们的类使用合成的拷贝控制成员和默认构造函数
// };
// size_t
// hash<Sales_data>::operator()(const Sales_data &s) const
// {
//     return hasn<string>()(s.bookNo) ^
//            hash<unsigned>()(s.units_sold) ^
//            hash<double>()(s.revenue);
// }
// } // namespace std

// //定义Screen类
// class Screen
// {
// public:
//     typedef std::string::size_type pos;
//     Screen()=default;
//     Screen(pos h1,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
//     char get()const{return contents[cursor];
//     inline char get(pos ht,pos wd)const;
//     Screen & move (pos r,pos c);
// private:
//     pos cursor=0;
//     pos height=0,width=0;
//     std::string contents;
// };
// // 定义move函数
// inline
// Screen &Screen::move(pos r,pos c)
// {
//     pos row=r*width;        //计算行的位置
//     cursor =row+c;          //在行内将光标移动到指定的列
//     return *this;           //以左值的形式返回对象
// }
// char Screen::get(pos r,pos c)const{
//     pos row =r*width;       //计算行的位置
//     return contents[row+c]; //返回给定列的字符
// }

// //
// int main()
// {
//     Sales_data total;
//     if(read(cin,total)){
//         Sales_data trans;
//         while(read(cin,trans)){
//             if(total.isbn()==trans.isbn())
//             total.combine(trans);
//             else {
//                 print(cout,total)<<endl;
//                 total=trans;
//             }
//         }
//         print(cout,total)<<endl;
//     }else {
//         cerr<<"No data?!"<<endl;
//     }
// }

// //io类
// #include<iostream>
// int main(int argc, char const *argv[])
// {
//     // int ival;
//     // std::cin>>ival;
//     // std::cout<<ival;

//     //p282
//     // std::cout<<"hi!"<<std::endl;
//     // std::cout<<"hi!"<<std::flush;
//     // std::cout<<"hi!"<<std::ends;

//     return 0;
// }

// //p288
// #include <iostream>
// #include <string>
// #include <vector>
// #include <sstream>
// using std::cin;
// using std::cout;
// using std::endl;
// using std::istringstream;
// using std::ostringstream;
// using std::string;
// using std::stringstream;
// using std::vector;
// using std::cerr;
// using std::ofstream;
// struct PersonInfo
// {
//     string name;
//     vector<string> phones;
// };
// int main(int argc, char const *argv[])
// {
//     string line, word;
//     vector<PersonInfo> people;
//     while (getline(cin, line))
//     {
//         PersonInfo info; //创建对象
//         istringstream record(line);
//         record >> info.name;
//         while (record >> word)
//             info.phones.push_back(word);
//         people.push_back(info);
//     }

//     //使用ostringstream
//     //缺少valid和fomatted函数
//     for (const auto &entry : people)
//         ostringstream formatted, badNums; //每个循环步创建的对象
//     for (const auto &nums : entry.phones)
//     { //对每个数
//         if (!valid(nums))
//         {
//             badNums << " " << nums; //将数的字符串形式存入badNums
//         }
//         else
//             //将格式化的字符串写入formatted
//             formatted << " " << format(nums);
//     }
//     if(badNums.str().empty())   //没有错误的数
//     cout<<entry.name<<" "         //打印名字
//     <<formatted.str()<<endl;    // 和格式化 数
//     else
//     cerr<<"input error:"<<entry.name
//     <<"invalid number(s)"<<badNums.str()<<endl;

//     return 0;
// }

// // 动态内存
// #include<memory>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     {
//     shared_ptr<int> p=make_shared<int>(42);
//     shared_ptr<int>q(p);
//     }
//     return 0;
// }

// //p405 StrBlob类
// #include <vector>
// #include <initializer_list>
// #include <memory>
// using namespace std;
// class StrBlob
// {
// public:
//     typedef std::vector<std::string>::size_type size_type;
//     StrBlog();
//     StrBlob(std::initializer_list<std::string> i1);
//     size_type size() const { return data->size(); }
//     bool empty() const { return data->empty(); }
//     //添加和删除元素
//     void push_back(const std::string &t) { data->push_back(t); }
//     void pop_back();
//     // 元素访问
//     std::string &front();
//     std::string &back();

// private:
//     std::shared_ptr<std::vector<std::string>> data;
//     //如果data[i]不合法，抛出一个异常
//     void check(size_type i, const std::string &msg) const;
// };

// //元素构造函数
// StrBlob ::StrBlob() : data(make_shared<vector<string>>()) {}
// StrBlob::StrBlob(initializer_list<string> i1) : data(make_shared<vector<string>>(i1)) {}
// //元素访问构造函数
// void StrBlob::check(size_type i, const string &msg) const
// {
//     if (i >= data->size())
//         throw out_of_range(msg);
// }

// string &StrBlob::front()
// {
//     //如果font为空，check会抛出一个异常
//     check(0,"front on empty StrBlob");
//     return data->foront();
// }
// string &StrBlob::back()
// {
//     check(0,"back on empty StrBlob");
//     return data->back();
// }
// void StrBlob::pop_back()
// {
//     check(0,"pop_back on empty StrBlob");
//     data->pop_back();
// }

// int main(int argc, char const *argv[])
// {
//     StrBlob b1;
//     {
//         StrBlob b2={"a","an","the"};
//     }
//     return 0;
// }

// #include<string>
// #include<new>
// using namespace std;
// int main()
// {
//     int *p=new int[3];
//     int *p1=new int[3]();

//     return 0;
// }
////#include<C:\Program Files (x86)\Windows Kits\10\Include\10.0.10240.0\ucrt\crtdbg.h>
// #include<iostream>
// #include<memory>
// #include<vector>
// #include"crtdbg.h"
// using namespace std;
// using std::vector;
// int main()
// {
//     shared_ptr<vector<int>> p=make_shared<vector<int>>();
//     for(int i=0;i<5;++i)
//     {
//         (*p).push_back(i);
//     }
//     for(auto t:*p)
//     cout<<t<<endl;
//     //int *p1=new int[4];
//     _CrtDumpMemoryLeaks();
//     return 0;
// }

// #include <memory>
// #include <string>
// #include <string.h>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;
//     allocator<string> alloc;          //可以分配strin的allocator对象
//     auto const p = alloc.allocate(n); //分配n个未初始化的string
//     auto q = p;
//     alloc.construct(q++);
//     alloc.construct(q++, 10, 'c');
//     cout<<"3rrr"<<endl;
//      return 0;
// }

// #include <string>
// //p 441合成拷贝构造函数
// class Sales_data
// {

// public:
//     //其他成员的定义如前
//     // 与合成的拷贝构造函数等价的拷贝构造函数的声明
//     Sales_data(const Sales_data &);

// private:
//     std::string bookNo;
//     int units_sold = 0;
//     double revenue = 0.0;
// };
// Sales_data::Sales_data(const Sales_data &orig) : bookNo(orig.bookNo), units_sold(orig.units_sold), revenue(orig.revenue) {}

// //p 453类值版本的HasPtr，行为像值的类
// #include <string>
// #include <iostream>
// using namespace std;
// class HasPtr
// {
// public:
//     HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
//     //对ps指向的string，每个HasPtr对象都有自己的拷贝
//     HasPtr(const HasPtr &p) : ps(new std::string(*p.ps)), i(p.i) {}
//     HasPtr &operator=(const HasPtr &);
//     ~HasPtr() { delete ps; }
//     friend void swap(HasPtr &lhs, HasPtr &rhs);

// private:
//     std::string *ps;
//     int i;
// };
// HasPtr &HasPtr::operator=(const HasPtr &rhs)
// {
//     auto newp = new string(*rhs.ps); //拷贝底层string，这里string括号内表示ps所指的对象
//     delete ps;                       //释放旧内存
//     ps = newp;                       // 从右侧运算对象拷贝数据到本对象
//     i = rhs.i;
//     return *this; //返回本对象
// }
// inline void swap(HasPtr &lhs, HasPtr &rhs)
// {
//     using std::swap;
//     swap(lhs.ps, rhs.ps);
//     swap(lhs.i, rhs.i);
// }

// //p455 行为像指针的类
// //p456 定义一个使用引用计数的类
// #include <string>
// using namespace std;
// class HasPtr
// {
// public:
//     //构造函数分配新的string和新的计数器，将计数器置为1
//     HasPtr(const string &s = std::string()) : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
//     //可瓯北构造函数拷贝所有三个数据成员，并递增计数器
//     HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) { ++*use; }
//     HasPtr &operator=(const HasPtr &);
//     // 定义自己的swap函数
//     friend void swap(HasPtr &,HasPtr&);
//     ~HasPtr();

// private:
//     std::string *ps;
//     int i;
//     std::size_t *use;
// };
// HasPtr::~HasPtr()
// {
//     if (--*use == 0)
//     {
//         delete ps;  //释放string 内存
//         delete use; //释放计数器内存
//     }
// }

// HasPtr &HasPtr::operator=(const HasPtr &rhs)
// {
//     ++*rhs.use; //递增右侧运算对象的引用计数
//     if (--*use == 0)
//     {               //然后递减本对象的引用计数
//         delete ps;  //若果没有其他用户
//         delete use; //释放本对象分配的成员
//     }
//     ps = rhs.ps;
//     i = rhs.i;
//     use = rhs.use;
//     return *this;
// }
// inline
// void swap(HasPtr &lhs,HasPtr &rhs)
// {
//     using std::swap;
// // //     swap(lhs.ps,rhs.ps);
//     swap(lhs.i,lhs.i);
// }

// // p465 strvec
// #include <string>
// #include <memory>
// #include <utility>
// using namespace std;
// class StrVec
// {
//     friend bool operator==(const StrVec &lhs, const StrVec &rhs);
//     friend bool operator!=(const StrVec &lhs, const StrVec &rhs);

// public:
//     StrVec() : //allocator 成员进行默认初始化
//                elements(nullptr), first_free(nullptr), cap(nullptr)
//     {
//     }
//     StrVec(const StrVec &); //拷贝构造函数
//     StrVec &operator=(std::initializer_list<std::string>);
//     StrVec &operator=(const StrVec &);   //拷贝赋值运算符
//     ~StrVec();                           //析构函数
//     void push_back(const std::string &); //拷贝元素
//     void push_back(std::string &&);      //移动元素
//     size_t size() const { return first_free - elements; }
//     void reserve(size_t &);
//     size_t capacity() const { return cap - elements; }
//     std::string *begin() const { return elements; }
//     std::string *end() const { return first_free; }
//     size_t capacity() const { return cap - elements; }
//     void resize(size_t &newsize);
//     void reserve(size_t &n);
//     //下标运算符p501
//     std::string &operator[](size_t n)
//     {
//         return elements[n];
//     };
//     const string &operator[](size_t n) const { return elements[n]; }

// private:
//     static std::allocator<std::string> alloc; //分配元素
//     //被添加元素的函数所使用
//     void chk_n_alloc()
//     {
//         if (size() == capacity())
//             reallocate();
//     }
//     //工具函数，被拷贝构造函数，幅值运算符和析构函数所使用
//     std::pair<std::string *, std::string *>
//     alloc_n_copy(const std::string *, const std::string *);
//     void free();             //销毁元素并释放内存
//     void reallocate();       //获得更多内存并拷贝已有元素
//     std::string *elements;   // 指向数组首元素的指针
//     std::string *first_free; //指向数组第一个空闲元素的指针
//     std::string *cap;        //指向数组尾后位置的指针
// };
// //使用construct
// void StrVec::push_back(const std::string &s)
// {
//     chk_n_alloc(); //确保有空间容纳元素
//     //在first_free指向的元素中构造s的副本
//     alloc.construct(first_free++, s);
// }

// void StrVec::push_back(string &&s)
// {
//     chk_n_alloc(); //如果需要的话为StrVec重新分配内存
//     alloc.construct(first_free++, std::move(s));
// }
// pair<string *, string *>
// StrVec::alloc_n_copy(const string *b, const string *e)
// {
//     //分配空间保存给定范围中的元素
//     auto data = alloc.allocate(e - b);
//     //初始化并返回一个pair，该pair由data和uninitialized_copy的返回值构成
//     return {data, uninitialized_copy(b, e, data)};
// }
// //free成员
// void StrVec::free()
// {
//     //不能传递给deallocate一个空指针，如果elements为0，函数什么也不做
//     if (elements)
//     {
//         //逆序销毁旧元素
//         for (auto p = first_free; p != elements; /*空循环条件*/)
//             alloc.destroy(--p); //p在这里--
//         alloc.deallocate(elements, cap - elements);
//     }
// }

// //拷贝控制成员
// StrVec::StrVec(const StrVec &s)
// {
//     //调用alloc_n_copy 分配空间以容纳与s中一样多的元素
//     auto newdata = alloc_n_copy(s.begin(), s.end());
//     elements = newdata.first;
//     first_free = cap = newdata.second;
// }
// // 析构函数free
// StrVec::~StrVec() { free(); }
// //赋值运算
// StrVec &StrVec::operator=(const StrVec &rhs)
// {
//     //调用alloc_n_copy分配内存，大小与rhs中元素占用空间一样多
//     auto data = alloc_n_copy(rhs.begin(), rhs.end());
//     free();
//     elements = data.first;
//     first_free = cap = data.second;
//     return *this;
// }

// //reallocate成员
// void StrVec::reallocate()
// {
//     //我们将分配当前大小两倍的内存空间
//     auto newcapacity = size() ? 2 * size() : 1;
//     //分配新内存
//     auto newdata = alloc.allocate(newcapacity);
//     //将数据从旧内存移动到新内存
//     auto dest = newdata;  // 指向新数组中下一个空闲位置
//     auto elem = elements; //指向旧数组中下一个元素
//     for (size_t i = 0; i != size(); ++i)
//         alloc.construct(dest++, std::move(*elem++));
//     free(); //一旦我们移动完元素就释放旧内存空间
//     //更新我们的数据结构，执行新元素
//     elements = newdata;
//     first_free = dest;
//     cap = elements + newcapacity;
// }

// //移动构造函数
// StrVec::StrVec(StrVec &&s) noexcept //移动操作不应当抛出任何异常
//     //成员初始化器接管s中的资源
//     : elements(s.elements), first_free(s.first_free), cap(s.cap)
// {
//     //令s进入这样的状态-对其运行析构函数是安全的
//     s.elements = s.first_free = s.cap = nullptr;
// }
// //
// StrVec &StrVec::operator=(initializer_list<stirng> i1)
// {
//     //alloc_n_copy分配内存空间并从给定范围内拷贝元素
//     auto data = alloc_n_copy(i1.begin(), i1.end());
//     free();
//     elements = data.first;
//     first_free = cap = data.second;

//     return *this;
// }
// //移动复制运算符号p474，和移动构造的函数体内容区别？？
// StrVec &StrVec::operator=(StrVec &&rhs) noexcept
// {
//     //直接检测自赋值
//     if (this != &rhs)
//     {
//         free();                  //释放已有元素；
//         elements = rhs.elements; //从rhs接管资源
//         first_free = rhs.first_free;
//         cap = rhs.cap;
//         //将rhs置于可析构状态
//         rhs.elements = rhs.first_free = rhs.cap = nullptr;
//     }
//     return *this;
// }
// void StrVec::reallocate()
// {
//     //我们将分配前代销两倍的的内存空间
//     auto newcapacity = size() ? 2 * size() : 1;
//     //分配新内存
//     auto newdata = alloc.allocate(newcapacity);
//     //将数据从旧内存移动到新内存
//     auto dest = newdata;  //指向新数组中下一个空闲位置
//     auto elem = elements; //指向旧数组中下一个元素
//     for (size_t i = 0; i != size(); ++i)
//         alloc.construct(dest++, std::move(*elem++));
//     free(); //一旦我们移动完元素就释放旧内存空间
//     //更新数据结构，执行新元素
//     elements = newdata;
//     first_free = dest;
//     cap = elements + newcapacity;
// }
// void StrVec::reserve(size_t &size)
// {
//     //不赞同答案写的那样
//     if (size > capacity())
//         alloc.allocate(size);
// }
// void StrVec::resize(size_t &newsize)
// {
//     if (capacity() > newsize)
//     {
//         //首先类似于reallocate
//         auto newcap = alloc.allocate(newsize);
//         //将数据从旧的迁移到新的
//         auto dest = newcap;
//         auto elem = elements;
//         for (size_t i = 0; i != size(); ++i)
//             alloc.construct(dest++, std::move(*elem++));
//         free(); //释放旧内存
//         //构造剩余的
//         auto p = first_free;
//         for (size_t i = size(); i != capacity(); ++i)
//             alloc.construct(p++, string(""));
//         elements = newcap;
//         first_free = dest;
//         cap = elements + newsize;
//     }
//     else
//     {
//     }
// }
// bool operator==(const StrVec &lhs, const StrVec &rhs)
// {
//     if (lhs.size() != rhs.size())
//         return false;
//     for (auto itr1 = lhs.begin(), itr2 = rhs.begin(); itr1 != lhs.end() && itr2 != rhs.end; it1++, it2++)
//     {
//         if (*it1 != *itr2)
//             return false;
//     }
//     return true;
// }
// bool operator!=(const StrVec &lhs, const StrVec &rhs)
// {
//     return !(lhs == rhs);
// }

// //p 494 输出运算符
// #include <iostream>
// #include <memory>
// using namespace std;
// int main()
// {
// }

// //p 506
// struct absInt
// {
//     /* data */
//     int operator()(int val) const
//     {
//         return val < 0 ? -val : val;
//     }
// };

// //p 507
// #include<iostream>
// using namespace std;
// class PrintString{
//     public:
//     PrintString(ostream &o=cout,char c=' '):os(o),sep(c){}
//     void operator()(const string&s)const{os<<s<<sep;}
//     private:
//     ostream &os;
//     char sep;
// };

// //p514类型专函运算符
// class SmallInt
// {
// public:
//     SmallInt(int i = 0) : val(i)
//     {
//         if (i < 0 || i > 255)
//             throw std::out_of_range("Bad SmallInt value");
//     }
//     operator int() const { return val; }

// private:
//     std::size_t val;
// };

// //p528 定义类
// #include <string>
// using namespace std;
// #include <set>
// class Quote
// {
// public:
//     Quote() = default; //关于=default
//     Quote(const string &book, double sales_price) : bookNo(book), price(sales_price) {}
//     string isbn() const { return bookNo; }
//     //返回给定数量的书籍的销售总额
//     //派生类负责改写并使用不同的折扣计算算法
//     virtual double net_price(size_t n) const { return n * price; }
//     virtual ~Quote() = default; //对析构函数进行动态绑定,
//     //该虚函数返回当前对象的一份动态分配的拷贝
//     //这些成员限定符的引用限定见13.6.3节

//     virtual Quote *clone() const & { return new Quote(*this); }
//     virtual Quote *clone() && { return new Quote(std::move(*this)); }

// private:
//     string bookNo;

// protected:
//     double price = 0.0;
// };

// //p541 定义纯虚基类
// //用于保存折扣值和购买量的类，派生类中使用这些数据可以实现不同的价格策略
// class Disc_quote : public Quote
// {
// public:
//     std : pair<size_t, double> discount_policy() const
//     {
//         return {quantity, discount};
//     }
//     Disc_quote() = default;
//     Disc_quote(const string &book, double price, size_t qty, double disc) : Quote(book, price), quantity(qty), discount(disc) {}
//     double net_price(size_t) const = 0;

// protected:
//     size_t quantity = 0;   //折扣适用的购买量
//     double discount = 0.0; //表示折扣的小数值
// };

// class Bulk_quote final : public Disc_quote //加final表示不希望其他类继承此类
// {                                          //Bulk_quote 继承自
// public:
//     Bulk_quote() = default;
//     Bulk_quote(const string &book, double price, size_t qty，double disc) : Disc_quote(book, qty, double disc) {}
//     double print_total(ostream &os, const Quote &item, size_t n);
//     //覆盖基类的函数版本以实现基于大量购买的折扣zhengce;
//     double net_price(size_t) const override;
//     Bulk_quote *clone() const & { return new Bulk_quote(*this); }
//     Bulk_quote *clone() && {return new Bulk_quote(std::move(*this); }

// private:
//     size_t min_qty = 0;    //适用折扣政策的最低购买量
//     double discount = 0.0; //以小数表示的折扣额
// };

// //派生类使用基类的成员
// //如果达到了购买书籍的某个最低限量值，就可以享受折扣
// double Bulk_quote::net_price(size_t cnt) const
// {
//     if (cnt >= min_qty)
//         return cnt * (1 - discount) * price;
//     else
//     {
//         return cnt * price;
//     }
// }

// double Bulk_quote::print_total(ostream &os, const Quote &item, size_t n)
// {
//     //根据传入item形参的的对象类型调用Quote::net_price
//     //或者bulk_quote::net_price
//     double ret = item.net_price(n);
//     os << "ISBN:" << item.isbn() //调用Quote：isbn
//        << "#sold:" << n << "total due:" << ret << endl;
//     return ret;
// }

// //p559 编写basket类
// class Basket
// {
// public:
//     //Basket 使用合成的默认构造函数和拷贝控制成员
//     void add_iem(const std::shared_ptr<Quote> &sale)
//     {
//         items.insert(sale);
//     }
//     //打印每本书的总价和购物篮中所有书的总价
//     double total_receipt(std::ostream &) const;
//     void add_item(const Quote &sale)

//     {
//         items.insert(std
//                      : shared_ptr<Quote>(sale.clone()));
//     }
//     void add_item(Quote &&sale)
//     {
//         items.insert(std::shared_ptr<Quote>(std::move(sale).isbn()));
//     }

// private:
//     //该函数用于比较shared_ptr，multiset成员会用到它
//     static bool compare(const std::shared_ptr<Quote> &lhs,
//                         const std::shared_ptr<Quote> &rhs)
//     {
//         return lhs->isbn() < rhs->isbn();
//     }
//     //multiset保存多个报价,按照compare成员排序
//     std::multiset<std::shared_ptr<Quote>, decltype(compare) *> items{compare};
// };
// double Basket::total_receipt(ostream &os) const
// {
//     double sum = 0.0; //保存实时计算出的价格
//     //iter 指向ISBN相同的一批元素中的第一个
//     //upper_bound返回一个迭代器，该迭代器指向这批元素的尾后位置
//     for (auto iter = items.cbegin();
//          iter != items.cend();
//          iter = items.upper_bound(*iter))
//     {
//         //我们知道在当前的Basket中至少有一个该关键字的元素
//         //打印该书籍对应的项目
//         sum += print_total(os, **iter, items.cout(*iter));
//     }
//     os << "Total sale:" << sum << endl; //打印最终价格
//     return sum;
// }

// // p579 模板
// #include<iostream>
// using namespace std;
// template <typename T>
// int compare(const T &v1, const T &v2)
// {
//     if (v1 < v2)
//         return -1;
//     if (v1 > v2)
//         return 1;
//     return 0;
// }
// int main()
// {
//     cout << compare(1, 3) << endl;
//     return 0;
// }

// // 类模板p584
// #include <vector>
// #include <cstdlib>
// #include <memory>
// #include <string>
// using namespace std;
// template <typename T>
// class Blob
// {
// public:
//     typedef T value_type;
//     typedef typename std::vector<T>::size_type size_type;
//     //构造函数
//     Blob();
//     Blob(std::initializer_list<T> i1);
//     //Blob中的元素数目
//     size_type size() const { return data->size(); }
//     bool empty() const { return data->empty(); }
//     //删除和添加元素
//     void push_back(T &&t) { data->push_back(std::move(t)); }
//     void pop_back();
//     //元素访问
//     T &back();
//     T &operator[](size_type i); //
//     T &front();
//     // T &operator[](size_t i);

// private:
//     std::shared_ptr<std::vector<T>> data;
//     //若data[i]无效，则抛出msg
//     void check(size_type i, const std::string &msg) const;
// };
// template <typename T>
// Blob<T>::Blob() : data(make_shared<vector<T>>()) {}
// template <typename T>
// Blob<T>::Blob(initializer_list<T> il) : data(make_shared<vector<T>>(il)) {}
// template <typename T>
// void Blob<T>::check(size_type i, const string &msg) const
// {
//     if (i >= data->size())
//         throw out_of_range(msg);
// }
// template <typename T>
// T &Blob<T>::front()
// {
//     //如果vector为空，check会抛出一个异常
//     check(0, "front on empty Blob");
// }
// template <typename T>
// T &Blob<T>::back()
// {
//     check(0, "back on empty Blob");
//     return data->back();
// }
// template <typename T>
// void Blob<T>::pop_back()
// {
//     check(0, "pop_back on empty Blob");
//     data->pop_back();
// }
// template <typename T>
// T &Blob<T>::operator[](size_type i)
// {
//     //如果i太大，check会抛出异常，阻止访问一个不存在的元素
//     check(i, "subscript out of range");
//     return (*data)[i];
// }

// //若试图访问一个不存在的元素，BlobPtr会抛出一个异常
// template <typename T>
// class BlobPtr
// {
// public:
//     BlobPtr() : curr(0) {}
//     BlobPtr(Blob<T> &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
//     T &operator*() const
//     {
//         auto p = check(curr, "dereference past end");
//         return (*p)[curr]; //(*p)为本对象指向的vector
//     }
//     // 递增和递减
//     BlobPtr &operator++(); //
//     BlobPtr &operator--();

// private:
//     //若检查成功,check返回一个指向vector的shared_ptr
//     std::shared_ptr<std::vector<T>>
//     check(std::size_t, const std::string &) const;
//     //保存一个weak_ptr,表示底层vector可能被销毁
//     std::weak_ptr<std::vector<T>> wptr;
//     std::size_t curr; //数组中的当前位置
// };

// //后置：递增/递减对象但返回原值
// template <typename T>
// BlobPtr<T> BlobPtr<T>::operator++(int)
// {
//     //此处无须检查，调用前置递增时会进行检查
//     BlobPtr ret = *this; //保存当前值
//     ++*this;             //推进一个元素；前置++检查递增是否合法
//     return ret;          //返回保存的状态
// }
// int main()
// {
//     Blob<int> ia;
//     return 0;
// }

// #include<vector>
// #include<utility>
// using namespace std;
// int main()
// {
//     vector<int> avec;
//     for(int i=0;i<10;++i)
//     avec.push_back(i);
//     vector<int> avec1(move(avec));

//     return 0;
// }

//p460 拷贝控制实列
////2020.05五一假期结束

//2020.05.06 模板与泛型编程
//p578
// template <typename T>
// int compare(const T &v1, const T &v2)
// {
//     if (v1 < v2)
//         return -1;
//     if (v2 < v1)
//         return 1;
//     return 0;
// }

// #include <vector>
// #include <memory>
// #include <utility>
// #include <type_traits>
// #include <iostream>
// #include<ctime>
// using namespace std;
// int main()
// {
//     clock_t s;
//     remove_reference<int &>::type a = 4;
//     cout << a << endl;
//     auto i = a;
//     vector<int> aivec=(100000,3);

//     for(auto i:aivec)
//     int a=i;
//     // for(auto &i:aivec)
//     // int a=i;
//     return 0;
// }
// template <typename T>
// class Blob
// {
// public:
//     typedef T value_type;
//     typedef typename std::vector<T>::size_type size_type; //为什么加typename？？
//     //构造函数
//     Blob();
//     Blob(std::initializer_list<T> i1);
//     //Blob中的元素数目
//     size_type size() const { return data->size(); }
//     //添加和删除元素
//     void push_back(const T &t) { data->push_back(t); }
//     //移动版本
//     void push_back(const T &&t) { data->push_back(std::move(t)); }
//     void pop_back();
//     //元素访问
//     T &back();
//     T &operator[](size_type i); //
// private:
//     std::shared_ptr<std::vector<T>> data;
//     //若data[i]无效，则抛出msg
//     void check(size_type i, const std::string &msg) const;
// };
// //定义check
// template <typename T>
// void Blob<T>::check(size_type i, const string &msg) const
// {
//     if (i >= data->size())
//         throw std::out_of_range(msg);
// }
// //下标
// template <typename T>
// T &Blob<T>::operator[](size_type i)
// {
//     //如果i太大，check会抛出异常，阻止访问一个不存在的元素
//     check(i, "subscript out of range");
//     return (*data)[i];
// }
// //back
// template <typename T>
// T &Blob<T>::pop_back()
// {
//     check(0, "pop_back on empty Blob");
//     data->pop_back();
// }
// //Blob构造函数
// template <typename T>
// Blob<T>::Blob() : data(make_shared<vector<T>>()) {}

// template <typename T>
// Blob<T>::Blob(initializer_list<T> i1) : data(make_shared<vector<T>>(i1)) {}

// int main()
// {
//     constexpr int a=10;
//     int b[a];
//    constexpr int c=10;
//     int d[c];

//     return 0;
// }

// //拷贝控制实例 13.4 p460
// #include <string>
// #include <set>
// using namespace std;
// class Message;
// class Folder
// {
//     friend class Message;
//     set<Message *> msgs;

// public:
//     void addMsg(Message &);
//     void remMsg(Message &);
//     void insert(Message *);
//     void remove_from_Msgs();

//     void add_to_Messages(const Folder &f);
//     Folder& operator=(const Folder&f);
//     Folder(const Folder &f) : msgs(f.msgs)
//     {
//         add_to_Messages(f);//将folder添加到它所有message的folders中去
//     }
//     ~Folder(){remove_from_Msgs();}
// };
// void Folder::add_to_Messages(const Folder &f)
// {
//     for (auto msg : f.msgs)
//         msg->addFldr(this);
// }
// void Folder::remMsg(Message &m)
// {
//     msgs.erase(m);
// }
// // void Folder::insert(Message *m)
// // {
// //     me.insert(m);
// // }
// void Folder::remove_from_Msgs()
// {
//     while (!msgs.empty())
//         (*msgs.begin())->remove(*this); //将这个folder从它所有message中删除
// }
// Folder& Folder::operator=(const Folder &f){
//     remove_from_Msgs();//从每个message中删除此folder
//     msgs=f.msgs;//从右侧运算对象拷贝message集合
//     add_to_Messages(f);//将此folder添加到每个新message中去
//     return *this;
// }

// class Message
// {
//     friend class Folder;

// public:
//     //folders 被银式初始化为空集合
//     explicit Message(const std::string &str = "") : contents(str) {}
//     //拷贝控制成员，用来管理指向本Message的指针
//     Message(const Message &);            //拷贝构造函数
//     Message &operator=(const Message &); //拷贝赋值
//     ~Message();
//     //从给定folder中添加删除文本
//     void save(Folder &);
//     void remove(Folder &);
//     void addFldr(Folder *f) { folders.insert(f); }

// private:
//     string contents;       //实际消息文本
//     set<Folder *> folders; //包含本Message的Folder
//     //拷贝构造函数、拷贝赋值运算符和析构函数所使用的的工具函数
//     //将本Message添加到指向参数的Folder中去
//     void add_to_Folders(const Message &);
//     //从folders中的每个Folder中删除本Message
//     void remove_from_Folders();
// };
// //save 和remove 成员
// void Message::save(Folder &f)
// {
//     folders.insert(&f); //将给定FOlder添加到我们的Folder列表中
//     f.addMsg(this);
// }
// void Message::remove(Folder &f)
// {
//     folders.erase(&f); //将给定Folder从我们的Foler列表中删除
//     f.remMsg(this);    //将本Message从f的Message集合中删除
// }
// //message类的拷贝控制成员
// //将本Message添加到指向m的Folder中
// void Message::add_to_Folders(const Message &m)
// {
//     for (auto f : m.folders) //对每个包含m的folder
//         f->addMsg(this);     //向给Folder添加一个指向Message的指针
// }
// //message的拷贝构造函数拷贝给定对象的数据成员
// Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
// {
//     add_to_Folders(m); //将本消息添加到指向m的Folder中
// }
// //message 的析构函数
// //从对应的Folder中删除本Message
// void Message::remove_from_Folders()
// {
//     for (auto f : folders) //针对folders中每个指针
//         f->remMsg(this);   //从该Folder中删除本Message
// }
// //析构函数
// Message::~Message()
// {
//     remove_from_Folders();
// }

// Message &Message::operator=(const Message &rhs)
// {
//     //通过先删除指针再插入他们来处理自赋值情况
//     remove_from_Folders(); //更新已有folder
//     contents = rhs.contents;
//     folders = rhs.folders;
//     add_to_Folders(rhs);
//     return *this;
// }

// void swap(Message &lhs, Message &rhs)
// {
//     using std::swap; //在本例中严格来说不需要，但这是一个好习惯
//     //将每个消息的指针从它（原来）所在的Folder中删除
//     for (auto f : lhs.folders)
//         f->remMsg(&lhs);
//     for (auto f : rhs.folders)
//         f->remMsg(&rhs);
//     //交换contens和folder指针set
//     swap(lhs.folders, rhs.folders);  //使用swap(set&,set&)
//     swap(lhs.contents, rhs.contens); //swap(string&,string&)
//     //将每个Message的指针添加到它的（新）Folder中
//     for (auto f : lhs.folders)
//         f->addMsg(&lhs);
//     for (auto f : rhs.folders)
//         f->addMsg(&rhs);
// }

// //p 77 2020.05.12
// #include<string>
// #include<iostream>
// using namespace std;
// int main()
// {
//     string s("hello world");
//     for(auto & i:s)
//     i=toupper(i);
//     std::cout<<s<<std::endl;
//     return 0;

// }

// //p86
// // 3.26
// #include<string>
// #include<iostream>
// using std:: string;
// int main()
// {
//     int a=234;
//     string s="YYYY";
//     for(auto &i:s)
//     i='X';
//     std::cout<<s<<std::endl;
//     return 0;

// }
// //p99 3.22
// #include <string>
// #include <vector>
// #include <iostream>
// using std::string;
// using std::vector;
// int main()
// {
//     vector<string> vstr;
//     vstr.push_back("asdfdasf今天是2020年05月13号，天气晴朗，需要继续努力呀，越努力越幸运！");
//     vstr.push_back("");
//     vstr.push_back("日期号和周几是一样的");
//     //注意：迭代器和下标的不同
//     for (vector<string>::iterator it = vstr.begin(); it != vstr.end() && !it->empty(); ++it)
//         for (string::iterator it1 = (*it).begin(); it1 != (*it).end(); ++it1)
//          //for (string::iterator it1 = 0; it1 != (*it).end(); ++it1) //不能写成这种形式
//        // for(auto & it1:*it)
//             *it1 = toupper(*it1);
//     string::size_type it2 = 0;
//     std::cout << vstr[it2] << std::endl;
//     return 0;
// }

// //p99 3.23 2020.05.13
// #include<vector>
// #include<iostream>
// using std::vector;
// using std::cout;
// using std::endl;
// int main()
// {
//     vector<int>ivec(10,2);
//     cout<<"方法1:范围for"<<endl;
//     for(auto & i:ivec)
//     {
//         i*=i;
//         cout<<i<<"\n";
//     }
//     cout<<"方法2:下标"<<endl;
//     for(vector<int>::size_type it=0;it!=ivec.size();++it)
//     {
//         ivec[it]*=ivec[it];
//         cout<<ivec[it]<<"\n";
//     }
//     cout<<"方法3：iterator"<<endl;
//     for(vector<int>::iterator it=ivec.begin();it!=ivec.end();++it)
//     {
//         *it*=*it;
//         cout<<*it<<"\n";
//     }
//      return 0;
// }

//p 100 二分搜索
//text 必须是有序的
// //beg 和end表示我们搜索的范围
// #include <vector>
// using std::vector;
// int main()
// {
//     int sought = 3;
//     vector<int> text = {1, 2, 3, 4, 5, 6, 7, 8};
//     auto beg = text.begin(), end = text.end();
//     auto mid = text.begin() + (end - beg) / 2; //初始状态中间点
//     //当元素尚未检查并且我们还没有找到sought时执行循环
//     while (mid != end && *mid != sought)
//     {
//         if (sought < *mid)
//             end = mid;
//         else
//             beg = mid + 1;
//         mid = beg + (end - beg) / 2;
//     }
// }

// //p 233 7.5
// #include <string>
// #include <iostream>
// using std::string;
// class Person
// {
//     friend istream &read(istream &ia, Person &p);
//     friend ostream &print(ostream &os, const Person &p);
// public:
//     string re_name() const { return name; }
//     string re_add() const { return address; }
//     Person() = default; //默认构造
//     Person(const string &n, const string &add) : name(n), address(add) {}
//     person(istream &);

//     //friend ostream & print(ostream &os,const  Person& p);
// private:
//     string name;
//     string address;
// };
// //读取形式的构造
// Person::Person(istream &is)
// {
//     is >> name >> address;
// }
// istream &read(istream &ia, Person &p)
// {
//     ia >> p.name >> p.address;
//     return is;
// }
// ostream &print(ostream &os, const Person &p)
// {
//     os << p.name << p.address;
//     return os;

// }
// int main()
// {
//     Person p;
// }

// 2020.05.13结束

//2020.05.14

// //p281 8.1
// #include <iostream>
// #include <istream>
// #include <stdexcept>
// using std::cout;
// using std::endl;
// using namespace std;
// istream &f(istream &in)
// {
//     int v;
//     while (in >> v, !in.eof())
//     { //直到遇到文件结束符才停止读取
//         if (in.bad())
//             throw runtime_error("io流错误");
//         if (in.fail())
//         {
//             cerr << "数据错误，请重试" << endl;
//             in.clear();
//             in.ignore(100, '\n');
//             continue;
//         }
//         cout << v << endl;
//     }
//     in.clear(); //返回前复位
//     return in;
// }
// int main()
// {
//     cout << "请输入一些整数，按Ctrl+Z结束" << endl;
//     f(cin);
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>
// using namespace std;
// int main()
// {
//     ifstream in;
//     in.open("input.txt",ifstream::in);
//     vector<string> sv1;
//     vector<string> sv2;
//     string s1, s2;
//     //while(!in.eof()!=0)
//     while (in >> s1, !in.eof())
//     {
//         sv1.push_back(s1);
//         //s1=in.getline();
//     }
//     in.close();
//     in.open("input.txt");
//     while (!in.eof())
//     {
//         getline(in, s2);
//         sv2.push_back(s2);
//     }
//     in.close();
//     ofstream of;
//     of.open("input.txt",ofstream::out|ofstream::app);
//     of<<"今天风很大";
//     of.close();
//     return 0;
// }

// //p288
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <vector>
// #include <fstream>
// using namespace std;
// struct PersonInfo
// {
//     string name;
//     vector<string> phones;
// };
// int main()
// {
//     ifstream if1;
//     if1.open("inp1.txt");
//     string line, word; //分别保存来自输入的一行和单词
//     vector<PersonInfo> people;
//     vector<string> svec;
//     istringstream record;
//     // 8.11
//     while (getline(if1, line))
//     {
//         svec.push_back(line);
//         PersonInfo info;            //创建一个保存此记录的对象
//          record.str(line); //将记录绑定到刚刚读入的行;
//         record >> info.name;
//         while (record >> word)
//             info.phones.push_back(word); //保持他们
//         people.push_back(info);          //将此记录追加到people末尾
//     }
//     if1.close();
//     //p289 8.10
//     vector<string> s_num;
//     for (auto i : svec)
//     {
//         istringstream a(i); //相当于打开文件
//         string s_1;
//         while (a >> s_1)
//             s_num.push_back(s_1);
//     }
//     return 0;
// }
// // 2020.05.14结束

// // 2020.05.15
// #include<list>
// #include<deque>
// #include<iostream>
// using namespace std;
// int main()
// {
//     list<deque<int>> l;
//     deque<int> d;
//     d.push_back(1);
//     l.push_back(d);
//     cout<<l[0]<<endl;
//     return 0;
// }

// //2020.05.16
// //p297 9.4 9.5
// #include <vector>
// #include <iostream>
// using std::cout;
// using std::endl;
// using std::vector;
// bool sear(vector<int>::const_iterator it1, vector<int>::const_iterator it2, const int &a)
// {
//     if (it1 != it2)
//     {
//         for (vector<int>::const_iterator it = it1; it != it2; ++it)
//         {
//             if (*it == a)
//             {
//                 return true;
//                 break;
//             }
//         }
//         return false;
//     }
//     else
//     {
//         cout << "请输入正确的迭代器范围" << endl;
//         return false;
//     }
// }

// vector<int>::const_iterator  sear1(vector<int>::const_iterator it1, vector<int>::const_iterator it2, const int &a)
// {
//     if (it1 != it2)
//     {
//         for (vector<int>::const_iterator it = it1; it != it2; ++it)
//         {
//             if (*it == a)
//             {
//                 return it;
//                 break;
//             }
//         }
//         return it2;
//     }
//     else
//     {
//         cout << "请输入正确的迭代器范围" << endl;
//         return it2;
//     }
// }

// int main()
// {
//     vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8};
//     bool a = sear(ivec.cbegin(), ivec.cend(), 6);
//     vector<int>::const_iterator ita=sear1(ivec.cbegin(), ivec.cend(), 9);
//     return 0;
// }

// //p302 9.13
// #include <list>
// #include <vector>
// using namespace std;
// int main()
// {
//     list<int> ilist(10, 5);
//     vector<double> idou(ilist.begin(), ilist.end());
//     vector<int> ivec(10, 6);
//     //idou=ivec;//虽然容器相同，但是类型不同，无法直接拷贝，使用迭代器拷贝
//     idou = vector<double>(idou.begin(), idou.end());//右边属于临时对象
//     return 0;
// }

// //p304 9.2.5
// #include <list>
// #include <vector>
// #include <string>
// using namespace std;
// int main()
// {
//     list<char *> clist(10, "dfa");
//     vector<string> svec(clist.begin(), clist.end());
//     vector<string> svec1 = vector<string>(clist.begin(), clist.end());
//     if (svec == svec)
//         int a = 1;
//     return 0;
// }

// //p309 9.20
// #include <list>
// #include <vector>
// #include <deque>
// using namespace std;
// int main()
// {
//     list<int> ilist = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     deque<int> ide1;
//     deque<int> ide2;
//     for(list<int>::const_iterator it=ilist.begin();it!=ilist.end();++it)
//     {
//         if(*it%2==0)
//         ide1.push_back(*it);
//         else
//         ide2.push_back(*it);
//     }
//     return 0;
// }

// //p311 9.24
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> ivec;
//     auto i1 = ivec.at(0);
//     //auto i2 = ivec.front();//编译不通过
//     //auto i2 = ivec.begin();//编译不通过
//     return 0;
// }

// //p312 9.26
// #include <vector>
// #include <list>
// using namespace std;
// int main()
// {
//     vector<int> ivec;
//     list<int> ilis;
//     int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
//     for (int i = 0; i < 11; ++i)
//     {
//         ivec.push_back(ia[i]);
//         ilis.push_front(ia[i]);
//     }
//     vector<int>::iterator itv=ivec.begin();
//     list<int>::iterator itl=ilis.begin();
//     while(itv!=ivec.end())
//     if(!(*itv%2))
//     itv=ivec.erase(itv);
//     else
//     ++itv;
//     while(itl!=ilis.end())
//     if(*itl%2)
//     itl=ilis.erase(itl);
//     else
//     {
//         ++itl;
//     }
//     return 0;
// }

// //p314 9.28
// #include<forward_list>
// #include<string>
// using namespace std;
// void lis(forward_list<string> & fl,const string &s1,const string &s2)
// {
//     auto curr=fl.begin();
//     auto prev=fl.before_begin();
//     if(curr!=fl.end()){
//         if(*curr==s1)
//         {
//         fl.insert_after(curr,s2);
//         ++curr;
//         }
//         else
//         ++curr;
//     }else
// }
// int main(){

// }

// //p314
// #include <iostream>
// #include <forward_list>
// using namespace std;
// void test_and_insert(forward_list<string> &sflst, const string &s1, cosnt string &s2)
// {
//     auto prev = sflst.before_begin();
//     auto curr = sflst.begin();
//     bool inserted = false;

//     while (curr != sflst.end())
//     {
//         if (*curr == s1)
//         {
//             curr = sflst.insert_after(curr, s2);
//             inserted = true;
//         }
//         prev = curr; //前驱迭代器向前推进；
//         curr++;
//     }
//     if(!inserted)
//     sflst.insert_after(prev,s2);//插入尾后

// }

// //p315 9.29
// #include<vector>
// using namespace std;
// int main(){
// vector<int> ivec(25,3);
// ivec.resize(100);//会在后面添加75个0；
// ivec.resize(10);//只剩下前面的3;
// return 0;
// }

// //p316 傻瓜循环，删除偶数元素，复制每个奇数元素
// #include <vector>
// using namespace std;
// int main()
// {

//     vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     auto iter = vi.begin(); //调用begin非cbegin
//     wile(iter != vi.end())
//     {
//         if (*iter % 2)
//         {
//             iter = vi.insert(iter, *iter); //复制当前元素
//             iter += 2;                     //向前移动迭代器，跳过当前元素以及插入到它之前的元素
//         }
//         else
//         {
//             iter = vi.erase(iter); //删除偶数元素
//             //不应当向前移动迭代器，iter指向我们删除的元素之后的元素
//         }
//     }
// }

////p316 傻瓜循环，删除偶数元素，复制每个奇数元素
// #include <list>
// using namespace std;
// int main()
// {

//     list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     auto iter = vi.begin(); //调用begin非cbegin
//     while (iter != vi.end())
//     {
//         if (*iter % 2)
//         {
//             iter = vi.insert(iter, *iter); //复制当前元素
//             ++iter ;
//             ++iter ; //list迭代器支持++入到它之前的元素
//         }
//         else
//         {
//             iter = vi.erase(iter); //删除偶数元素
//             //不应当向前移动迭代器，iter指向我们删除的元素之后的元素
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <forward_list>

// using namespace std;

// int main()
// {
//     forward_list<int> iflst = {0, 2, 3, 4, 5, 6, 7, 8, 9};
//     auto prev = iflst.before_begin(); //前驱节点是为了删除元素的作用设置的，
//     auto curr = iflst.begin();        //首节点
//     while (curr != iflst.end())
//     {
//         if (*curr & 1)
//         {
//             curr = iflst.insert_after(curr, *curr);
//             prev = curr;
//             curr++;
//         }
//         else
//         {
//             curr = iflst.erase_after(prev);
//         }
//     }
//     return 0;
// }

// #include<vector>
// using namespace std;
// int main(){
//     vector<int >ivec={1,2,34,5};
//     vector<int>::iterator begin=ivec.begin();
//     while(begin!=ivec.end()){
//         ++begin;//向前移动begin，因为我们在此元素之后插入元素；
//         begin=ivec.insert(begin,42);//插入新值
//         ++begin;//向前移动begin,跳过我们刚刚加入的元素
//     }
//     return 0;
// }

// //p321
// #include <string>
// using namespace std;
// int main()
// {
//     const char *cp = "Hello World !";//
//     char noNull[]={'H','i','\0'};
//     string s1(cp);// 用const char *构造string时，cp需要以空字符结尾
//     string s2(noNull);
//     return 0;
// }

// //p322 9.41
// #include <vector>
// #include <string>
// using namespace std;
// int main()
// {
//     vector<char> cvec(10, 'c');
//     string s;
//     for (auto it = cvec.begin(); it != cvec.end(); ++it)
//         s.push_back(*it);
//         string s1(cvec,10);
//     return 0;
// }

// //2020.05.16 晚上 泛型算法
// #include<algorithm>
// #include<vector>
// #include<iostream>
// #include<numeric>
// using namespace std;
// int main(){
//     vector<int>ivec={10,2,3,43,42,42,5,6};
//     int val=42;
//     auto result=find(ivec.cbegin(),ivec.cend(),val);
//     auto count_i=count(ivec.cbegin(),ivec.cend(),val);
//     cout<<"the value"<<val<<(result==ivec.cend()?"is not present":"is present")<<endl;
//     int sum=accumulate(ivec.cbegin(),ivec.cend(),0);
//    // fill_n(ivec.begin,ivec.size(),0);
//     return 0;
// }

// //p343重排容器元素
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// //定制操作p344
// bool isShorter(const string &s1,const string s2)
// {
//     return s1.size()<s2.size();
// }
// void elimDumps(vector<string> &words)
// {
//     //按字典排序words，以便查找重复单词
//     sort(words.begin(),words.end());
//     //unique重排输入范围，使得每个单词只出现一次
//     //排列在范围的前部，返回指向不重复区域之后一个位置的迭代器
//     auto end_unique=unique(words.begin(),words.end());
//     //使用向量操作erase删除重复单词
//     words.erase(end_unique,words.end());
// }

// int main(){
//     vector<string>svec={"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
//     elimDumps(svec);
//     //stable_sort(words.begin(),words.end(),isShorter);

//     return 0;
// }

// //p345 10.13
// #include<string>
// #include<algorithm>
// #include<vector>
// #include<iterator>
// #include<iostream>
// using namespace std;
// bool slen(const string & s)
// {
//     if(s.size()>5)
//     return true;
//     else
//     return false;
// }
// int main(){
//     vector<string> svec={"sfafasfa","sd","ssssss","ewt"};
//     auto sit=partition(svec.begin(),svec.end(),slen);
//     for(auto it=svec.begin();it!=sit;++it)
//     cout<<*it<<" ";
//     return 0;
// }

// //p349 完整的biggies
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;
// void elimDumps(vector<string> &words)
// {
//     //按字典排序words，以便查找重复单词
//     sort(words.begin(), words.end());
//     //unique重排输入范围，使得每个单词只出现一次
//     //排列在范围的前部，返回指向不重复区域之后一个位置的迭代器
//     auto end_unique = unique(words.begin(), words.end());
//     //使用向量操作erase删除重复单词
//     words.erase(end_unique, words.end());
// }
// void biggies(vector<string> &words, vector<string>::size_tpe sz)
// {
//     elimDumps(words); //将words按字典循序排序，删除重复单词
//     stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size(); });
//     //获取一个迭代器，指向第一个满足size()>=sz的元素
//     auto wc = find_if(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
//     //计算满足size>=sz的元素的数目
//     auto count = words.end() - wc;
//     cout << count << " " << make_plural(count, "word", "s")
//          << " of length" << sz << " or longer" << endl;
//     //打印长度大于给定值的单词，每个单词后面接一个空格
//     for_each(wc, words.end(), [](const string &s) { cout << s << " "; });
//     cout << endl;
// }

// //p349 110.14
// [](const int &i1,const int &i2){return i1+i2;}

// //10.15
// [i1](const int &i2){return i1+i2;}

//p354 2020.05.17

// //p354
// //10.20
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// int mthan(const vector<string> &s)
// {
//     int i_count=count_if(s.begin(),s.end(),
//     [](const string s){return (s.length()>6?true:false); });
//     return i_count;
// }
// int mthan1(const vector<string> &s)//带尾置返回参数
// {
//     int i_count=count_if(s.begin(),s.end(),
//     [](const string s)->int {
//         if(s.length()>6)
//         return true;
//         else
//         return false;
//         });
//     return i_count;
// }
// int main(){
//     vector<string> svec={"2ewrwwww","eee","erewewrwerw"};
//     int i_count=mthan1(svec);
//     return 0;

// }

// //p354 10.21
// #include <iostream>
// #include <algorithm>
// using namespace std;
// void mutable_lambda(void)
// {
//     int v1=3;
//     auto f=[&v1]() mutable -> bool {//这里v1前加&和不加都可以
//         if (v1 == 0)
//             return true;
//         else
//         {
//             v1--;
//             return false;
//         }
//     };
//     for(int i=0;i<4;++i)
//     cout<<f()<<" ";
// }
// int main()
// {
//     mutable_lambda();
//     return 0;
// }

// //统计每个单词在输入中出现的次数
// #include <map>
// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     map<string, size_t> word_count; //string 到size_t的空map
//     string word;
//     while (cin >> word)
//         ++word_count[word];          //提取word的计数器并将其加1
//     for (const auto &w : word_count) //对map中的每个元素
//         //打印结果
//         cout << w.first << "occurs" << w.second
//              << ((w.second > 1) ? "times" : "time") << endl;
//     return 0;
// }

// //p376 11.3
// #include <map>
// #include <vector>
// #include <string>
// using namespace std;
// //读取以组vector统计其中的单词的数量
// void word_count(const vector<string> &svec, map<string, size_t> &word_count)
// {
//     //map<string, size_t> word_count;
//     for (auto &i : svec)
//         //++word_count.first->second;
//         ++word_count[i];
// }

// //11.4 比对答案抄写
// #include <iostream>
// #include <fstream>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <vector>
// using namespace std;

// //给定string的vector，将大写转小写，并且将标点符号（不止在末尾）去掉
// void change(vector<string> &svec)
// {
//     for (auto &i : svec)
//     {
//         for (decltype(i.size()) p = 0; p < i.size(); ++p)
//         {
//             if (i[p] >= 'A' && i[p] <= 'Z')
//                 i[p] -= ('A' - 'a');
//             else if (i[p] == ',' || i[p] == '.')
//                 i.erase(p, 1);
//         }
//     }
// }
// void word_count(const vector<string> &svec, map<string, size_t> &word_count)
// {
//     //map<string, size_t> word_count;
//     for (auto &i : svec)
//         ++word_count[i];
// }
// int main()
// {
//     vector<string> svec={"Name","name.","name","na.me"};
//     map<string,size_t> smap;
//     //首先去除符号与大小写
//     change(svec);
//     //其次完成计数等工作
//     word_count(svec,smap);
//     return 0;

// }

// //p378 11.7   p381 11.14
// #include <map>
// #include <vector>
// #include <string>
// #include<utility>
// using namespace std;
// void add_name(map<string, vector<pair<string,string>>> &m, const string &first_name, const pair<string,string> &info)
// {
//     m[first_name].push_back(info);
// }

// int main()
// {
//     map<string, vector<pair<string,string>>> name;
//     string s1 = "liu";
//     string s2 = "yin";
//     string s3="1991.01.01";
//     pair<string,string> pa={s2,s3};
//     add_name(name, s1, pa);
//     return 0;
// }

// //p378 11.8 抄写的答案
// //vector版本
// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <string>
// #include <algorithm>

// using namespace std;

// string &trans(string &s)
// {
//     for (int p = 0; p < s.size(); ++p)
//     {
//         if (s[p] >= 'A' && s[p] <= 'Z')
//             s[p] -= ('A' - 'a');
//         else if (s[p] == ',' || s[p] == '.')
//             s.erase(p, 1);
//     }
//     return s;
// }

// int main(int argc, char **argv)
// {
//     ifstream in(argv[1]);
//     if (!in)
//     {
//         cout << "输入文件失败" << endl;
//         exit(1);
//     }
//     vector<string> unique_word; //不重复单词
//     string word;
//     while (in >> word)
//     {
//         trans(word);
//         if (find(unique_word.begin(), unique_word.end(), word))
//             unique_word.push_back(word); //添加不重复单词
//     }
//     for (const auto &w : unique_word) //打印不重复单词
//         //打印结果
//         cout << w << " ";
//     cout << endl;
//     return 0;
// }

// //set版本
// #include <iostream>
// #include <fstream>
// #include <set>
// #include <string>
// #include <algorithm>

// using namespace std;

// string &trans(string &s)
// {
//     for (int p = 0; p < s.size(); p++)
//     {
//         if (s[p] >= 'A' && s[p] <= 'Z')
//             s[p] -= ('A' - 'a');
//         else if (s[p] == ',' || s[p] == '.')
//             s.erase(p, 1);
//     }
//     return s;
// }
// int main()
// {
//     ifstream in(argv[1]);
//     if (!in)
//     {
//         cout << "错误输入文件" << endl;
//         exit(1);
//     }
//     set<string> unique_word;
//     string word;
//     while (in >> word)
//     {
//         trans(word);
//         unique_word.insert(word); //添加不重复单词
//     }
//     for (const auto &w : unique_word) //打印不重复单词
//         //打印结果
//         cout << w << " ";
//     return 0;
// }

// //p383 11.16
// #include<map>
// #include<iostream>
// using namespace std;
// int main(){
//     map<int ,int> imap;
//     for(int i=0;i<3;++i)
//     imap[i]=i;
//     return 0;
// }

//2020.05.18

// //p385
// #include <map>
// #include <string
// #include <iostream>

// using namespace std;
// //统计每个单词在输入中出现次数的一种更繁琐的方法
// map<string, size_t> word_count; //从string到size_t的空map
// string word;
// while (cin >> word)
// {
//     //插入一个元素，关键字等于word，值为1
//     // 若word已在word_count,insert什么也不做
//     auto ret = word_count.insert({word, 1});
//     if (!ret.second)         //word已在word_count中
//         ++ret.first->second; //递增计数器
// }

// //p391 11.31
// #include<map>
// #include<string>
// #include<iostream>
// using namespace std;
// int main()
// {
//     multimap<string,string> book;
//     book.insert({"jiapingwa","qq"});
//     book.insert({"jiapingwa","yi"});
//     book.insert({"moyan","tanxxing"});
//     multimap<string,string>::iterator it=book.find("moyan1");
//     if(it!=book.end())
//     book.erase(it);
//     else
//     {
//         cout<<"不在此multimap中";
//     }

//     return 0;
// }

// //单词转换的map p391
// #include <map>
// #include <string>
// #include <fstream>
// #include <sstream>
// #include <iostream>
// using namespace std;
// //读入给定文件，建立转换映射
// map<string, string> buildMap(ifstream &map_file)
// {
//     map<string, string> trans_map; //保存转换规则
//     string key;
//     string value;
//     //读取第一个单词存入key中，行中剩余内容存入value
//     while (map_file >> key && getline(map_file, value))
//         if (value.size() > 1)                 //检查是否有转换规则
//             trans_map[key] = value.substr(1); //跳过前导空格
//         else
//         {
//             throw runtime_error("nor rule for " + key);
//         }
//     return trans_map;
// }

// const string &transform(const string &s, const map<string, string> &m)
// {
//     //实际的转换工作，此部分是程序的核心
//     auto map_it = m.find(s);
//     //如果单词在转换规则中
//     if (map_it != m.cend())
//         return map_it->second;
//     else
//         return s;
// }
// void word_transform(ifstream &map_file, ifstream &input)
// {
//     auto trans_map = buildMap(map_file); //保存转换规则
//     string text;                         //保存输入中的每一行
//     while (getline(input, text))
//     {
//         istringstream stream(text);
//         string word;
//         bool firstword = true; //控制是否打印空格
//         while (stream >> word)
//         {
//             if (firstword)
//                 firstword = false;
//             else
//                 cout << " "; //在单词间打印一个空格
//             //transform返回它的第一个参数或其转换后的形式
//             cout << transform(word, trans_map); //打印输出
//         }
//         cout << endl; //完成一行的转换
//     }
// }
// //2020.05.19
// const string &transform(const string &s, const map<string, string> &m)
// {
//     //实际的转换工作；此部分是程序的核心
//     auto map_it = m.find(s);
//     //如果单词在转换规则map中，
//     if (map_it != m.cend())
//         return map_it->second; //使用替换短语
//     else
//         return s; //否则返回原string
// }

// //开始12章动态内存的学习
// #include <memory>
// #include <string>
// #include <vector>
// using namespace std;
// class StrBlob
// {
// public:
//     typedef std::vector<string>::size_type size_type;
//     StrBlob();
//     StrBlob(std::initializer_list<std::string> i1);
//     bool empty() const { return data->empty(); }
//     //添加和删除元素
//     void push_back(const std::string &t) { data->push_back(t); }
//     void pop_back();
//     //元素访问
//     std::string &front();
//     std::string &back();
//     string &operator[](size_t n)
//     {
//         return data[n];
//     }
//     private : std::shared_ptr<std::vector<std::string>> data;
//     //如果data[i]不合法，抛出一个异常
//     void check（size_type i,const std::string &msg) const;
// };

// StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
// StrBlob::StrBlob(initializer_list<string> i1) : data(make_shared<vector<string>>(i1)) {}
// void StrBlob::check(size_type i, const string &msg) const
// {
//     if (i >= data->size())
//         throw out_of_range(msg);
// }
// string &StrBlob::front()
// {
//     //若果vector为空，check会抛出一个异常
//     check(0, "ront on empty strblob");
//     return data->front();
// }
// string &StrBlob::back()
// {
//     check(0, "back on empty strblob");
//     return data->back();
// }
// void StrBlob::pop_back()
// {
//     check(0, "pop_back on empty strblob");
//     data->pop_back();
// }

// //p421
// //对于访问一个不存在元素的尝试，StrBlob抛出一个异常
// #include <memory>
// #include <vector>

// using namespace std;
// class StrBlobPtr
// {
// public:
//     StrBlobPtr() : curr(0) {}
//     StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
//     std::string &deref() const;
//     StrBlobPtr &incr(); //前缀递增

// private:
//     //若检查成功，check返回一个指向vector的shared_ptr
//     std::shared_ptr<std::vector<std::string>>
//     check(std::size_t, const std::string &) const;
//     //保存一个weak_ptr，意味着底层vecttor可能被销毁
//     std::weak_ptr<std::vector<std::string>> wptr;
//     std::size_t curr; //在数组中的当前位置
// };

// int main()
// {
//     StrBlob s1;
//     s1.push_back("huhua");
// }

// // 2020.05.20 开始今天学习
// #ifndef MY_STRBLOB_H
// #define MY_STRBOB_H
// #include <vector>
// #include <string>
// #include <initializer_list>
// #include <memory>
// #include <stdexcept>

// using namespace std;

// class StrBlob
// {
// public:
//     typedef vector<string>::size_type size_type;
//     StrBlob();
//     StrBlob(initializer_list<string> i1);
//     size_type size() const { return data->size(); }
//     bool empty() const { return data->empty(); }
//     //添加和删除元素
//     void push_back(const string &s) { data->push_back(s); }
//     void pop_back();
//     //元素访问
//     string &front();
//     const string &front() const;
//     string &back();
//     const string &back() const;

// private:
//     shared_ptr<vector<string>> data;
//     //如果data[i]不合法，抛出一个异常
//     void check(size_type i, const std::string &msg) const;
// };
// StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
// StrBlob::StrBlob(initializer_list<string> i1) : data(make_shared<vector<string>>(i1)){}
// void StrBlob::check(size_type i,const string &msg)const
// {
//     if (i >= data->size())
//         throw out_of_range(msg);
// }
// string &StrBlob::front()
// {
//     //如果vector为空，check会抛出一个异常
//     check(0, "front on empty strblob");
//     return data->front();
// }
// //const版本的front
// const string &StrBlob::front() const
// {
//     check(0, "front on empty strblob");
//     return data->front();
// }
// string &StrBlob::back()
// {
//     check(0, "back on empty strblob");
//     return data->back();
// }
// const string &StrBlob::back() const
// {
//     check(0, "back on empty strblob");
//     return data->back();
// }
// void StrBlob::pop_back()
// {
//     check(0, "empty on strblob");
//     data->pop_back();
// }
// #endif

// //测试类的正确性
// #include <iostream>
// using namespace std;

// int main(int argc, char *argv[])
// {
//     StrBlob b1;
//     {
//         StrBlob b2 = {"a", "an", "the"};
//         b1=b2;
//         b2.push_back("about");
//         cout<<b2.size()<<endl;
//     }
//     cout<<b1.size()<<endl;
//     cout<<b1.front()<<" "<<b1.back()<<endl;
//     const StrBlob b3=b1;
//     cout<<b3.front()<<" "<<b3.back()<<endl;
//     return 0;
// }

// //p411 12.6
// #include<vector>
// #include<memory>
// using namespace std;
// vector<int>* vec(){return new vector<int>();}
// shared_ptr<vector<int>> vec1(){return make_shared<vector<int>>();}
// int main(){
//     auto p=vec();
//     p->push_back(3);
//     auto p1=vec1();
//     p1->push_back(4);
//     delete p;
//     return 0;
// }

// #include<memory>
// #include<string>
// //#include<allocators>
// using namespace std;
// int main(){
//     allocator<string> alloc;
//     int n=3;
//     auto const p=alloc.allocate(n);//分配了n个未初始化的对象；
//     return 0;
// }

// //2020.05.21
// #include<iostream>
// using namespace std;
// int main(){
//     int val;

//     cin>>val;
//     return 0;
// }

// //p281 8.1
// #include <iostream>
// #include <stdexcept>
// using namespace std;
// istream &f(istream &in)
// {
//     int v;
//     while (in >> v, !in.eof())
//     {
//         //直到遇到文件结束时停止
//         if (in.bad())

//             throw runtime_error("IO流错误");
//         if (in.fail())
//         {
//             cerr << "数据错误，请重试" << endl;
//             in.clear();
//             in.ignore(100, '\n');
//             continue;
//         }
//          cout << v << endl;
//     }
//    in.clear();
//    return in;
// }
// int main()
// {
//     cout<<"请输入一个数"<<endl;
//     f(cin);
//     return  0 ;
// }

// // p285 8.4
// #include <iostream>
// #include <string>
// #include <fstream>
// #include <vector>
// using namespace std;
// void inputfile(ifstream &file, vector<string> &svec, vector<string> &svec1) //file前为什么非要加引用
// {
//     string s;
//     while (file >> s)
//     {
//         svec.push_back(s);
//     }
//     file.clear(); //需要将流重置
//     file.seekg(0, ios::beg);
//     while (getline(file, s))
//         svec1.push_back(s);
// }
// int main()
// {
//     std::ifstream ifile("数据字符串.txt");
//     //ifile("数据字符串.txt");
//     vector<string> svec;
//     vector<string> svec1;
//     inputfile(ifile, svec, svec1);
//     return 0;
// }

////p289 8.13
// #include <iostream>
// #include <fstream>
// #include <string>
// #include <vector>
// #include<sstream>
// using namespace std;
// struct PersonInfo
// {
//     string name;
//     vector<string> phones;
// };
// int main(){
//     string line ,word;
//     vector<PersonInfo> people;
//     ifstream ifile;
//     ifile.open("phonelist.txt",ifstream::in);
//     while(getline(ifile,line))
//     {
//         PersonInfo info;
//         istringstream record;
//         record.str(line);
//         record>>info.name;
//         while(record>>word)
//         info.phones.push_back(word);
//         people.push_back(info);
//     }
//     return 0;
// }
// //p289 ostringstream 未添加

// //2020.05.22
// #include<forward_list>
// #include<iterator>
// using namespace std;
// int main()
// {
//      forward_list<int> il;
//      auto it=front_inserter(il);//也有back_inserter

//      *it=43;
//      return 0;

// }

// //p344 10.9
// #include<vector>
// #include<algorithm>
// using namespace std;
// void dlimDumps(vector<int> &ivec)
// {
//     sort(ivec.begin(),ivec.end());
//     auto ivec_end=unique(ivec.begin(),ivec.end());
//     ivec.erase(ivec_end,ivec.end());
// }
// int main()
// {
//     vector<int>ivec={1,4,3,4,2};
//     dlimDumps(ivec);
//     return 0;

// }

// //p345 10.13
// #include<algorithm>
// #include<string>
// #include<vector>
// #include<iostream>
// using namespace std;
// bool m5(string &s)
// {
//     if(s.size()>5)
//     return true;
//     else
//     return false;
// }
// void m_than_5(vector<string> &svec)
// {
//     auto s_end=partition(svec.begin(),svec.end(),m5);
// for(auto it=svec.begin();it!=s_end;++it)
// cout<<*it<<endl;

// }
// int main()
// {
//      vector<string>svec={"sfsd","sdfsfsfssd","sf","sssssss"};
//      m_than_5(svec);
//      return 0;
// }

// // p349 10.18
// #include<algorithm>
// #include<vector>
// #include<string>
// #include<iostream>
// //#include"make_plural.h"
// using namespace std;
// void elimDumps(vector<string> &ivec)
// {
//     sort(ivec.begin(),ivec.end());
//     auto ivec_end=unique(ivec.begin(),ivec.end());
//     ivec.erase(ivec_end,ivec.end());
// }
// void biggies(vector<string> &words,vector<string>::size_type sz)
// {
// elimDumps(words);
// //按长度排序，长度相同的单词维持顺序
// stable_sort(words.begin(),words.end(),[](const string &a,const string &b){return a.size()<b.size();});
// //获取一个迭代器，指向第一个满足size()>=sz的元素
// vector<string>::iterator it_end=partition(words.begin(),words.end(),[sz](const string &a){return a.size()>=sz;});
// //
// auto count=words.end()-it_end;
// cout<<count<<" "<<make_plural(count,"word","s")<<"of length"<<sz<<"or longer"<<endl;

// }

// int main(){

// }

// //p357 10.22
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <functional>
// using namespace std;
// using namespace std::placeholders;
// bool mthx(string &s, string::size_type sz)
// {
//     if (s.size() >= sz)
//         return true;
//     else
//         return false;
// }

// void scount(vector<string> &svec, string::size_type sz, vector<string>::size_type &count1)
// {
//     sort(svec.begin(), svec.end(), [](const string &s1, const string &s2) { return s1.size() < s2.size(); });
//     auto count_end = find_if(svec.begin(), svec.end(), bind(mthx, _1, sz));
//     count1 = svec.end() - count_end;
// }
// int main()
// {
//     vector<string> svec = {"sfsfsfs", "sf", "sfsss3dddc"};
//     vector<string>::size_type count;
//     scount(svec, 6, count);
//     return 0;
// }

// //2020.05.23
// #include <algorithm>
// #include <iostream>
// #include <vector>
// #include <iterator>
// #include <fstream>
// #include <numeric>
// using namespace std;
// int main()
// {
//     //p360使用流迭代器 p362 10.29
//     ifstream in("phonelist.txt");
//     istream_iterator<string> in_iter(in), eof;
//     vector<string> vec(in_iter, eof);
//     string s_sum = accumulate(vec.begin(), vec.end(), string(""));
//     //p361 使用
//     ostream_iterator<int> out_iter(cout, " ");
//     vector<int> vec1 = {1, 2, 3, 4, 5};
//     for (auto e : vec1)
//         *out_iter++ = e; //赋值语句实际上将元素写到cout
//     cout << endl;
//     return 0;
// }

// //p363 10.33
// #include <fstream>
// #include <vector>
// #include <iterator>
// #include <iostream>
// using namespace std;
// void ioput(ifstream &f1, ofstream &f2, ofstream &f3)
// {

//     istream_iterator<int> int_iteri(f1), eof1;

//     ostream_iterator<int> int_itero1(f2, " ");
//     ostream_iterator<int> int_itero2(f3, " ");
//     //
//     vector<int> all, od, sigu;
//     all=vector<int>(int_iteri, eof1); //读取流数据
//     for (auto it : all)
//     {
//         if (it % 2 == 0)
//             od.push_back(it);
//         else
//         {
//             sigu.push_back(it);
//         }
//     }
//     for (auto e : od)
//         *int_itero1++ = e;
//     for (auto e : sigu)
//         *int_itero2++ = e;

// }
// int main()
// {
//     ifstream f1("intlist.txt");
//     ofstream f2("odd.txt"), f3("sigular.txt");
//     ioput(f1, f2, f3);
//     return 0;
// }

// #include <vector>
// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     vector<int> ivec = {1, 2, 34, 55};
//     for (auto it = ivec.crbegin(); it != ivec.crend(); ++it)
//         cout << *it << " "; //这里不会将34打印成43，
//     vector<string> svec = {"erwr", "123"};
//     //cout<<string(svec.cbegin(),svec.crend())<<endl;//无法编译？
//     for (auto it = svec.crbegin(); it != svec.crend() + 1; ++it)
//         cout << *it << " ";
//     for (auto it = svec.end(); it != svec.begin();)//分号不能少
//         cout << *(--it) << " "; //在这里递减迭代器
//     return 0;
// }

// #include<map>
// #include<vector>
// using namespace std;
// int main()
// {
//     map<string,vector<string>> fam;
//     fam["liu"].push_back("yin");
//     fam["liu"].push_back("hui");

//     return 0;
// }

// //p381 11.13
// #include <utility>
// #include <vector>
// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     string s;
//     int i;
//     vector<pair<string, int>> sv;
//     pair<string, int> p;
//     while (cin >> s >> i)
//     {
//         //1
//         // sv.push_back(make_pair(s, i));
//         //2
//         // p={s,i};
//         // sv.push_back(p);
//         //3
//         pair<string, int> p1(s, i);
//         sv.push_back(p1);
//     }
//     return 0;
// }

// #include <map>
// #include <set>
// #include <string>
// using namespace std;
// int main()
// {
//     set<string>::value_type s1;
//     set<string>::key_type s2;
//     map<string, int>::key_type s3;
//     map<string, int>::mapped_type in;
//     map<string, int>::key_type s;
//     map<string, int>::value_type p; //pair<const string,int>
//     return 0;
// }

// //p386 11.20
// #include<map>
// #include<string>
// #include<iostream>
// using namespace std;
// int main()
// {
//     string s;

//     map<string,size_t> word_count;
//     while(cin>>s)
//     {
//         auto s_it=word_count.insert({s,1});
//         if(!s_it.second)
//         ++s_it.first->second;
//     }
//     return 0;
// }

// ////namespace t13_13{
// //p447 13.13
// #include <iostream>
// #include <vector>
// using namespace std;
// struct X
// {
//     X() { cout << "构造函数X()"; }
//     X(const X &) { cout << "拷贝构造函数X(const X&)" << endl; }
//     X &operator=(const X &rhs)
//     {
//         cout << "拷贝赋值运算符" << endl;
//         return *this;
//     }
//     ~X() { cout << "析构函数" << endl; }
// };
// void f1(X x) {}
// void f2(X &x) {}
// int main()
// {
//     cout << "局部变量" << endl;
//     X x;
//     cout << endl;

//     cout << "非引用参数传递:" << endl;
//     f1(x);
//     cout << endl;

//     cout << "引用参数传递" << endl;
//     f2(x);
//     cout << endl;

//     cout << "动态分配" << endl;
//     X *px = new X;
//     cout << endl;

//     cout << "添加到容器中" << endl;
//     vector<X> vx;
//     vx.push_back(x);
//     cout << endl;

//     cout << "释放动态分配对象" << endl;
//     delete px;
//     cout << endl;

//     cout << "间接初始化和赋值" << endl;
//     X y = x;
//     y = x;
//     cout << endl;

//     cout << "程序结束：" << endl;
//     return 0;
// }

// //}

// //p343 13.5
// #include <string>
// using namespace std;
// class HasPtr
// {
// public:
//     HasPtr(const string &s = string()) : ps(new string(s)), i() {}
//     HasPtr(const HasPtr &h) : ps(new string(*(h.ps))), i(h.i) {}
//     ~HasPtr() { delete ps; }

// private:
//     string *ps;
//     int i;
// };

//  2020.05.24
// #include<string>
// using namespace std;
// class Employee{
//     public:
//     Employee()=default;
//     Employee(const string &n):name(n){id=id++;}
//     ~Employee();
//     string name;
//     static size_t id;
// };
// size_t id =0;
// int main()
// {
//     Employee liu("liu");

//     return 0;
// }

// //p452 13.18
// #include <iostream>
// #include <string>
// using namespace std;
// class Employee
// {
// private:
//     static int sn;

// public:
//     Employee() { mysn = sn++; }
//     Employee(const string &s)
//     {
//         name = s;
//         mysn = sn++;
//     }
//     // //为13.19定义拷贝构造和拷贝赋值
//      Employee(Employee &s)
//     {
//         name = s.name;
//         mysn = sn++;
//     }
//     Employee &operator=(Employee &rhs)
//     {
//         name = rhs.name;
//         return *this;
//     }
//     const string &get_name() { return name; }
//     int get_mysn(){return mysn;}

// private:
//     string name;
//     int mysn;
// };
// int Employee::sn=0;
// void f(Employee &s)
// {
//     cout<<s.get_name()<<":"<<s.get_mysn()<<endl;

// }
// int main()
// {
//     Employee a("zhao"),b=a,c;
//     c=b;
//     f(a),f(b),f(c);
//     return 0;
// }

// //p453 行为像值的类
// #include <string>
// using namespace std;
// class HasPtr
// {
// public:
//     HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
//     //对ps指向的string，每个hasptr对象都有自己的拷贝
//     HasPtr(const HasPtr &h):ps(new string(*(h.ps)),i(h.i){}
//     HasPtr& operator=(const HasPtr &rhs);
//     ~HasPtr(){
//         delete ps;}
//     private:
//     string *ps;
//     int i;
// };
// HasPtr &operator=(const HasPtr &rhs)
// {
//     auto newp = new string(*rhs.ps); //拷贝底层string
//     delete ps;                       //释放旧内存
//     ps = newp;
//     i = rhs.i;
//     return *this;
// }

// //p455 13.26
// #include <vector>
// #include <string>
// #include <initializer_list>
// #include <memory>
// #include <
// #include <stdexcept>
// using namespace std;

// class StrBlobPtr;
// class StrBlob
// {
//     friend class StrBlobPtr;

// public:
//     typedef vector<string>::size_type size_type;
//     StrBlob();
//     StrBlob(initializer_list<string> i1);
//     StrBlob(vector<string> *p);
//     StrBlob(StrBlob &s);
//     StrBlob &operator=(StrBlob &rhs);
//     size_type size() const { return data->size(); }
//     bool empty() const { return data->empty(); }
//     //添加和删除元素
//     void push_back(const string &s) { data->push_back(s); }
//     void pop_back();
//     //元素访问
//     string &front();
//     const string &front() const;
//     string &back();
//     const string &back() const;

//     //提供给strblobptr的接口
//     StrBlobPtr begin() const; //定义strblobptr后才能定义这两个函数
//     StrBlobPtr end() const;
//     //const 版本
//     StrBlobPtr begin() const;
//     StrBlobPtr end() const;

// private:
//     shared_ptr<vector<string>> data;
//     //如果data[i]不合法，抛出异常
//     void check(size_type i, const std::string &msg) const;
// };
// inline StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
// inline StrBlob::StrBlob(initializer_list<string>(i1):
// data(make_shared<vector<string>>(i1)){}
// inline StrBlob::StrBlob(vector<string>> *p):data(p){}
// inline StrBlob::StrBlob(StrBlob &s):data(make_shared<vector<string>>(*s.data)){}

// inline StrBlob& StrBlob::operator=(StrBlob&rhs)
// {
//     data = make_shared<vector<string>>(*rhs.data);
//     return *this;
// }

// inline void StrBlob::check(size_type i,const string &msg)const{
//     if(i>=data->size())
//     throw out_of_range(msg);
// }
// inline string &StrBlob ::front(){
//     //如果vector为空，check会抛出一个异常
//     check(0,"front on empty strblob");
//     return data->front();
// }
// inline string &StrBlob ::back()
// {
//     check(0,"back on empty strblob");
//     return data->back();
// }
// //const版本check
// inline const string &StrBlob::back()const
// {
//     check(0,"back on empty strblob");
//     return data->back();
// }

// inline void StrBlob::pop_back()
// {
//     check(0,"pop_back on empty strblob");
//     data->pop_back();
// }

// //当试图访问一个不存在的元素时，strblobptr抛出一个异常
// class StrBlobPtr
// {
//     friend bool eq(const StrBlobPtr &, const StrBlobPtr &);

// public:
//     StrBlobPtr() : curr(0) {}
//     StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
//     StrBlobPtr &operator++();
//     StrBlobPtr &operator--();
//     StrBlobPtr &operator++(int);
//     StrBlobPtr &operator--(int);
//     string &deref() const;
//     string &deref(int off) const;
//     StrBlobPtr &incr(); //前缀递增
//     StrBlobPtr &decr(); //后缀递减
//     StrBlobPtr &operator*() const;
//     {
//         auto p = check(curr, "dereference of past end");
//         return (*p)[curr];
//     }
//     StrBlobPtr *operator->() const
//     {
//         //将实际工作委托给解引用运算符
//         return &this->operator*();
//     }

// private:
//     //若检查成功，check放回一个指向vecotr的shared_ptr
//     shared_ptr<vector<string>> check(size_t, const string &) const;
//     //保存一个weak_ptr，意味着底层vector可能会被销毁
//     weak_ptr<vector<string>> wptr;
//     size_t curr; //数组中的当前位置
// };               //待续
// StrBlobPtr &StrBlobPtr::operator++()
// {
//     //如果curr已经指向了容器的尾后位置，则无法递增它
//     check(curr, "increment past end of strblobptr");
//     //
//     ++curr;
//     return *this;
// }
// StrBlobPtr &StrBlobPtr::operator--()
// {
//     //如果curr是0,则继续减它将产生一个无效下标
//     //先递减后检查；
//     --curr;
//     check(curr, "decrement past begin of sr");
//     return *this;
// }
// StrBlobPtr &StrBlobPtr::operator++(int)
// {
//     StrBlobPtr ret = *this; //记录当前值
//     ++*this;                //向前移动一个元素，前置++需要检查递增的有效性
//     return ret;
// }
// StrBlobPtr &StrBlobPtr::operator--(int)
// {
//     //无需检查有效性，调用前置递减运算时，才需要检查
//     StrBlobPtr ret = *this;
//     --*this;    //先后移动一个元素，前置--需要检查递减的有效性
//     return ret; //返回之前记录的状态
// }
// //p456
// #include <string>
// using namespace std;
// class HasPtr
// {
// public:
//     //构造函数分配新的string和新的计数器，将计数器置为1
//     HasPtr(const string &s = string()) : ps(new string(s)), i(0), use(new size_t(1)) {}
//     //拷贝构造函数拷贝所有三个数据成员，并递增计数器
//     HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) { ++*use; }
//     HasPtr &operator=(const HasPtr &);
//     ~HasPtr();

// private:
//     string *ps;
//     int i;
//     size_t *use; //用来记录有多少个对象共享*ps成员
// };
// HasPtr::~HasPtr()
// {
//     if(--*use==0)
//     {
//         delete ps;//释放string内存
//         delete use ;//释放计数器内存
//     }

// }
// HasPtr& HasPtr::operator=(const HasPtr &rhs)
// {
//     ++*rhs.use;//递增右侧运算对象的引用计数
//     if(--*use==0){
//         delete ps;
//         delete use;
//     }
//     ps=rhs.;
//     i=rhs.i;
//     use=rhs.use;
//     return *this;//返回对象
// }

// //p457 13.28
// #include <string>
// using namespace std;
// class TreeNode
// {
// public:
//     TreeNode();
//     TreeNode(const TreeNode &t);

// private:
//     string value;
//     int count;
//     TreeNode *left;
//     TreeNode *right;
// };
// TreeNode::TreeNode()
// {
//     *(left->left);
//     *(left->right);
//     *(right->left);
//     *(right->right);
// }
// TreeNode::TreeNode(const TreeNode &t) : value(t.value), count(t.count),
//                                         left(new TreeNode(*left)), right(new TreeNode(*right)) {}

// //p457 13.28
// #include <string>
// using namespace std;
// class TreeNode
// {
// public:
//     TreeNode();
//     TreeNode(const TreeNode &);
//     void CopyTree(void);
//     int ReleaseTree(void);

// private:
//     std::string value;
//     int count;
//     TreeNode *left;
//     TreeNode *right;
// };
// class BinStrTree
// {
// public:
//     BinStrTree(const BinStrTree &);

// private:
//     TreeNode *root;
// };
// //尅被构造函数
// BinStrTree::BinStrTree(const BinStrTree &bst) : root(bst.root)
// {
//     //拷贝整棵树
//     root->CopyTree(); //应当拷贝整棵树，而不是根节点
// }
// void TreeNode::CopyTree(void)
// {
//     if (left)
//         left->CopyTree();
//     if (right)
//         right->CopyTree();
//     count++;
// }
// //从某个节点开始拷贝子树
// TreeNode::TreeNode(const TreeNode &tn) : value(tn->value), count(1), left(tn->left), right(tn->right)
// {
//     if (left)
//         left->CopyTree();
//     if (right)
//         right->CopyTree();
// }

// //析构函数
// int TreeNode::ReleaseTree(void)
// {
//     if (left)
//     {
//         if (!left->CopyTree())
//             delete left;
//     }
//     if (right)
//     {
//         if (!right->CoptyTree())
//             delete right;
//     }
//     count--;
//     return count;
// }

// BinStrTree::~BinStrTree() //释放整棵树
// {
//     if (!root->ReleaseTree())
//     delete root;
//     delete root;
// }
// TreeNode::~TreeNode()
// {
//     //count 为0表示资源已经被释放，是delete触发的析构函数，设么也不做
//     if(count)
//     ReleaseTree();
// }

// //p12 modern
// #include <iostream>
// #include <type_traits>

// void foo(char *);
// void foo(int);

// int main()
// {
//     if (std::is_same<decltype(NULL), decltype(0)>::value)
//         std::cout << "NULL==0" << std::endl;
//     if (std::is_same<decltype(NULL), decltype((void *)0)>::value)
//         std::cout << "NULL==(void*)0" << std::endl;
//     if (std::is_same<decltype(NULL), std::nullptr_t>::value)
//         std::cout << "NULL==NULLPTR" << std::endl;
//     foo(0);
//     foo(nullptr);
//     return 0;
// }

// void foo(char *)
// {
//     std::cout << "foo(char*) is called" << std::endl;
// }
// void foo(int i)
// {
//     std::cout<<"foo(int) is called"<<std::endl;
// }

// //p15 modern
// #include <iostream>
// #include <vector>
// #include <algorithm>
// int main()
// {
//     std::vector<int> vec = {1, 2, 3, 4};

//     //在c++17之前
//     const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);//itr是const的，所以下面如果再定义会重复定义
//     if (itr != vec.end())
//     {
//         *itr = 3;
//     }

//     // //需要重新定义一个新的变量
//     // const std::vector<int>::iterator itr1 = std::find(vec.begin(), vec.end(), 3);//
//     // if (itr1 != vec.end())
//     // {
//     //     *itr1 = 4;
//     // }

//     //c++17可以
//     if(const std::vector<int>::iterator itr=std::find(vec.begin(),vec.end(),3);itr != vec.end())
//     {
//         *itr=4;
//     }
//     //将输出1，4,3,4(因为find返回第一个值等于查找值的迭代器)
//     for (std::vector<int>::iterator element = vec.begin(); element != vec.end(); ++element)
//         std::cout << *element << std::endl;

//     return 0;
// }

// //p17 modern
// #include<iostream>
// #include<tuple>
// std::tuple<int ,double,std::string>f(){
//     return std::make_tuple(1,2.3,"456");
// }
// int main()
// {
//     auto [x,y,z]=f();
//     std::cout<<x<<", "<<y<<", "<<z<<std::endl;
//     return 0;
// }

// //p24 modern
// template<typename T,typename U>
// class MagicType{
//     public:
//     T dark;
//     U magic;
// };
// //不合法
// // template<typename T>
// // typedef MagicType<std::vector<T>,std::string> FakeDarkMagic;
// typedef int (*process)(void *);
// using NewProcess=int(*)(void *);
// template<typename T>
// using TrueDarkMagic=MagicType<std::vector<T>,std::string>;

// int main()
// {
//     TrueDarkMagic<bool> you;
// }

// //p2020.05.25 开始今日学习
// //p460 13.31
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using std::cout;
// using std::endl;
// using std::string;
// using std::to_string;
// using std::vector;

// class HasPtr
// {
//     friend void swap(HasPtr &lhs, HasPtr &rhs);

// public:
//     HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
//     HasPtr(const HasPtr &p) : ps(new string(*p.ps)), i(p.i) {}
//     HasPtr &operator=(const HasPtr &);
//     HasPtr &operator=(const string &);
//     string &operator*();
//     bool operator<(const HasPtr &) const;
//     ~HasPtr();

// private:
//     string *ps;
//     int i;
// };
// HasPtr::~HasPtr()
// {
//     delete ps;
// }
// inline HasPtr &HasPtr::operator=(const HasPtr &rhs)
// {
//     auto newps = new string(*rhs.ps);
//     delete ps;
//     ps = newps;
//     i = rhs.i;
//     return *this;
// }
// HasPtr &HasPtr::operator=(const string &rhs)
// {
//     *ps = rhs;
//     return *this;
// }
// string &HasPtr::operator*()
// {
//     return *ps;
// }
// inline void swap(HasPtr &lhs, HasPtr &rhs)
// {
//     using std::swap;
//     cout << "交换" << *lhs.ps << "和" << *rhs.ps << endl;
//     swap(lhs.ps, rhs.ps);
//     swap(lhs.i, rhs.i);
// }
// bool HasPtr::operator<(const HasPtr &rhs) const
// {
//     return *ps < *rhs.ps;
// }
// int main()
// {
//     vector<HasPtr> vh;
//     int n = atoi(argv[1]);

//     for (int i = 0; i < n; ++i)
//         vh.push_back(to_string(n - i));
//     for (auto p : vh)
//         cout << *p << " ";
//     cout << endl;
//     sor(vh.begin(), vh.end());
//     for (auto p : vh)
//         cout << *p << " ";
//     cout << endl;
//     return 0;
// }

// //2020.05.26 2020.05.27
// //p495 14.7
// #include <iostream>
// #include <string>
//     using namespace std;
// class String
// {
//     friend bool operator==(const String &lhs, const String &rhs);
//     friend bool operator!=(const String &lhs, const String &rhs);

// public:
//     String();
//     String(const char *str);
//     friend ostream &operator<<(ostream &os, const char *str);

// private:
//     char *str;
// };
// ostream &operator<<(ostream &os, const char *str)
// {
//     cout << str;
//     return os;
// }
// bool operator==(const String &lhs, const String &rhs)
// {
//     return lhs.str == rhs.str;
// }
// bool operator!=(const String &lhs, const String &lhs)
// {
//     return !(lhs == rhs);
// }

// //14.9
// //2020.05.28 p506
// struct absInt
// {
//     int operator()(int val) const
//     {
//         return nval < 0 ? -val : val;
//     }
// };
// int main(){
//     int i=42;
//     absInt abso;
//     int ui=absObj(i);
// }

// #include <string>
// #include <iostream>
// using namespace std;
// class PrintString
// {
// public:
//     PrintString(ostream &o = cout, char c = ' ') : os(o), sep(c) {}
//     void operator()(const string &s) const
//     {
//         os << s << sep;
//     }

// private:
//     ostream &os;
//     char sep;
// };

// struct ite
// {
//     ite(int i11=0,int i22=0,int i33=0 ):i1(i11),i2(i22),i3(i33){};
//     int operator()(const int i1, const int i2, const int i3)
//     {
//         if (i1 > 0)
//             return i2;
//         else
//             return i3;
//     }
//     int i1,i2,i3;
// };
// int manin()
// {
//     ite i1;
//     auto i_val = i1(1, 2, 3);
//     return 0;
// }

// class IfElseThen
// {
// public:
//     IfElseThen() {}
//     IfElseThen(int i1, int i2, int i3) : iVal1(i1), iVal2(i2), iVal3(i3) {}
//     int operator()(int i1, int i2, int i3)
//     {
//         return i1 ? i2 : i3;
//     }

// private:
//     int iVal1, iVal2, iVal3;
// };
// int main(){
//     IfElseThen I1;
//     auto i_v=I1(1,2,3);
//     return 0;
// }

// //p509
// //14.38
// #include <string>
// #include <iostream>
// #include <map>
// using namespace std;
// class strlen
// {
// public:
//    strlen() {}
//     strlen(const string &s, size_t n) : len(n), str(s) {}
//     bool operator()(const string &s, size_t n) { return s.size() == n; }

// private:
//     size_t len;
//     string str;
// };
// int main()
// {
//     strlen sl;
//     string str;
//     map<int, int> count;
//     while (cin >> str)
//     {
//         for (int i = 1; i <= 10; ++i)
//             if (sl(str, i) != 0)
//                 ++count[i];
//     }
//     return 0;
// }

// //2020.05.29
// #include<string>
// class Quote{
// public:
// std::string isbn() const;
// virtual double net_price(std::size_t n)const;
// };
// class Bulk_quote:public Quote{

// };

// //2020.05.30
// template<typename T>
// int compare(const T &t1,const T&t2){
//     if(t1<t2)
//     return -1;
//     if(t2<t1)
//     return 1;
//     return 0;
// }
// int main(){
//     auto a=compare(1,2);
//     return 0;
// }

// template <typename T1, typename T2>
// T1 find(T1 it, const T2 &to_find)
// {
//     if(*it==to_find);
//     return ++it;
//     else
//     return

// }

// //p16.4
// #include <string>
// #include <vector>
// #include <list>
// #include <iostream>
// using namespace std;
// template<typename I, typename T>
// I find(I b, I e, const T &v)
// {
//     while (b != e && *b != v)
//     {
//         b++;
//     }
//     return b;
// }
// int main()
// {
//     vector<int> ivec{1, 2, 3, 45};
//     auto i_it = find(ivec.begin(), ivec.end(), 3);
//     return 0;
// }

// //p16.5
// #include<iostream>
// #include<vector>
// template<typename T>
// void print(const T &t1)
// {
//     for(auto i:t1)
//     std::cout<<i<<" ";
// }
// int main()
// {
//  std::vector<int>ivec{1,2,3,4,5};
//  print(ivec);
//  return 0;
// }// 不能使用此类型的东西假如不是这样的呢

// //16.5  ***
// #include<iostream>
// #include<string>
// using namespace std;

// template<typename T,size_t N>
// void print(const T(&a)[N])
// {
//     //begin,end将普通函数转为迭代器
//     for(auto iter=begin(a);iter!=end(a);iter++)
//     cout<<*iter<<" ";
//     cout<<endl;
// }
// int main(){
//     int a[3]={1,2,3};
//     print(a);
//     return 0;
// }

// //584
// #include <vector>
// #include <memory>
// template <typename T>
// class Blob
// {
// public:
//     typedef T value_type;
//     typedef typename std::vector<T> size_type size_type;
//     //构造函数
//     Blob();
//     Blob(std::initializer_list<T> i1);
//     //blob中的元素数目
//     size_type size() const { return data->size(); }
//     bool empty() const { return data->empty(); }
//     //添加和删除元素
//     void push_back(const T &t) { data->push_back(t); }
//     //移动版本
//     void push_back(const T &&t) { data->push_back(std::move(t)); }
//     void pop_back();

//     //元素访问
//     T &back();
//     T &operator[](size_type i); //在14.5节

// private:
//     std::shared_ptr<std::vector<T>> data;
//     //若data[i]无效，则抛出msg
//     void check(size_type i, const std::string &msg) const;
// };
// template <typename T>
// void Blob<T>::check(size_type i, const std::string &msg) const
// {
//     if (i >= data->size())
//         throw std::out_of_range(msg);
// }
// template<typename T>
// T& Blob<T>::back()
// {
// check(0,"back ont empty blob");
// return data->back();
// }
// template<typename T>
// T& Blob<T>::operator[](size_type i)
// {
//     //如果i太大，check会抛出异常，阻止访问一个 不存在的元素
//     check(i,"subcript out of range");
//     return (*data)[i];
// }

// template<typename T>
// void Blob<T>::pop_back()
// {
//     check(0,"pop_back on empty blob");
//     data->pop_back();
// }

// template<typename T>
// Blob<T>::Blob():data(std::make_shared<std::vector<T>>()){}
// template<typename T>
// Blob<T>::Blob(std::initializer_list<T> i1):data(std::make_shared<std::vector<T>>(i1)){}

// #include <string>
// #include <iostream>
// template <int H, int W>
// class Screen
// {
// public:
//     Screen() : contents(H * W, ' ') {}
//     Screen(char c) : contents(H * W, c){}
//     friend class Window_mgr;
//     char get() const { return contents[cursor]; }
//     inline char get(int, int) const;
//     Screen &clear(char = bkground);

// private:
//     static const char bkground = ' ';

// public:
//     Screen &move(int r, int c);
//     Screen &set(char);
//     Screen &set(int, int, char);
//     //重载display ：普通版本和const版本
//     Screen &display(std::ostream &os)
//     {
//         do_display(os);
//         return *this;
//     }
//     const Screen &display(std::ostream &os) const
//     {
//         do_display(os);
//         return *this;
//     }

// private:
//     //实际完成显示的函数
//     void do_display(std::ostream &os) const { os << contents; }
//     int cursor = 0;
//     std::string contents;
// };
// template<int H,int W>
// Screen<H,W>&Screen<H,W>::clear(char c)
// {
//     contents = std::string(H * W, c);
//     return *this;
// }

// template <int H, int W>
// inline Screen<H, W> &Screen<H, W>::move(int r, int c)
// {
//     int row = r * W;  //计算行位置
//     cursor = row + c; //将光标移动到此行指定列
//     return *this;      //返回当前对象（左值)
// }
// template<int H,int W>
// char Screen<H,W>::get(int r,int c)const{
//     int row=r*W;
//     return contents[row+c];//将光标移动到此行指定lie
// }
// template<int H,int W>
// inline Screen<H,W>&Screen<H,W>::set(char c)
// {
//     contents[cursor]=c;
//     return *this;
// }
// template<int H,int W>
// inline Screen<H,W> &Screen<H,W>::set(int r,int col,char ch)
// {
//     contents[r*W+col]=ch;
//     return *this;
// }

// #include<iostream>
// using std::cout;
// using std::endl;
// #include<string>
// using std::string;
// //#include"tScreen.h"
// int main(){
//     Screen<5,3> myScreen;
//     myScreen.display(cout);
//     //将光标移动到特定位置，并设置其内容
//     myScreen.move(4,0).set('#');

//     Screen<5,5>nextScreen('X');
//     nextScreen.move(4,0).set('#').display(cout);
//     cout<<"\n";
//     nextScreen.display(cout);
//     cout<<endl;

//     const Screen<5,3>blank;
//     myScreen.set('#').display(cout);
//     cout<<endl;
//     blank.display(cout);
//     cout<<endl;

//     myScreen.clear('2').display(cout);cout<<endl;
//     myScreen.move(4,0);
//     myScreen.set('#');
//     myScreen.display(cout);cout<<endl;
//     myScreen.clear('Z').display(cout);cout<<endl;

//     //由于temp是sceen<5,3>而非screen<5,3>
//     Screen<5,3>temp=myScreen.move(4,0);
//     temp.set('#');
//     myScreen.display(cout);
//     cout<<endl;
//     return 0;
// }

// //p16.19
// #include<vector>
// #include<iostream>
// using namespace std;
// template<typename T>
// void print(T &t)
// {
//     // for(auto i:t)
//     // std::cout<<i<<" ";
//     typedef typename  T::size_type size_type;
//     for(size_type i=0;i!=t.size();++i)
//     std::cout<<t[i]<<" ";
//     for(auto it=t.begin();it!=t.end();++it)
//     std::cout<<*it<<" ";
// }
// int main(){
//     vector<int> ivec={1,2,34};
//     print(ivec);
//     return 0;
// }

// //p613
// template<typename F,typename T1,typename T2>
// vpod flip2(F f,T1 && t1,T2 && t2)
// {
//     f(t2,t1);
// }

// //p614  16.47
// #include <utility>
// #include <iostream>
// using std::cout;
// using std::endl;
// //模板接受一个可调用对象和两个参数，将两个参数翻转后用来调用给定的可调用对象
// template <typename F, typename T1, typename T2>
// void flip(F f, T1 &&t1, T2 &&t2)
// {
//     f(std::forward<T2>(t2), std::forward<T1>(t1));
// }

// void f(int v1, int &v2) //注意，v2是一个引用
// {
//     cout << v1 << ++v2 << endl;
// }
// void g(int &&i, int &j)
// {
//     cout << i << " " << j << endl;
// }
// //flip1实现不完整：顶层const和引用都丢掉了
// template <typename F, typename T1, typename T2>
// void flip1(F f, T1 t1, T2 t2)
// {
//     f(t2, t1);
// }
// template <typename F, typename T1, typename T2>
// void flip2(F f, T1 &&t1, T2 &&t2)
// {
//     f(t2, t1);
// }
// int main()
// {
//     int i = 0, j = 0, k = 0, l = 0;
//     cout << i << " " << j << " " << k << " " << l << endl;
//     f(42,i);
//     flip1(f,j,42);
//     flip2(f,k,42);
//     g(1,i);
//     flip(g,i,42);
//     cout<<i<<" "<<j<<" "<<k<<" "<<l <<endl;
//     return 0;
// }

// //p151 **e
// #include <utility>
// using namespace std;
// template <typename T>
// typename remove_reference<T>::type &&
// move(T &&param)
// {
//     using ReturnType = typename remove_reference<T>::type &&;
//     return static_cast<ReturnType>(param);
//  }

// #include<iterator>
// using namespace std;
// int main(){
//     int a[3][3];
//     auto as1= sizeof(a);
//     auto as2=sizeof(*a[0]);
//     fill(begin(a[2]),end(a[2]),1);
//     //sizeof(a)/sizeof(*a);
//     return 0;
// }

// #include <functional>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <utility>
// using namespace std::placeholders;
// using namespace std;
// ostream &print(ostream &os, const int &s, char c)
// {
//     return os << s << c;
// }
// ostream &print1(const int &i) { return cout << i << ' '; }
// //[&os,c](const int &i)->ostream&{return os<<i<<c;}
// int main()
// {
//     vector<int> ivec{1, 2, 3, 4, 5, 6, 7};
//     //os=cout;
//     char c = ' ';
//     // 三种定制操作的形式
//     // 形式1 bind形式，最灵活
//     for_each(ivec.begin(), ivec.end(), bind(print, ref(cout), _1, ' '));
//    // 形式2 lambda形式
//     for_each(ivec.begin(), ivec.end(), [c](const int &i) -> ostream & { return cout << i << c; });
//     // 形式3，最笨拙
//     for_each(ivec.begin(), ivec.end(),print1);
//      return 0;
// }

// //p619
// //16.51
// #include <string>
// using std ::string;
// #include<iostream>
// using std::cout;
// using std::endl;
// template <typename T, typename... Args>
// void foo(const T &t, const Args &... rest){cout<<sizeof...(Args)<<endl;};
// int main()
// {
//     int i = 0;
//     double d = 3.14;
//     string s = "how now brown cow";
//     foo(i, s, 42, d); //包中有三个参数

//     foo(s, 42, "hi"); //包中有两个参数
//     foo(d, s);        //一个参数
//     foo("hi");        //0个参数

//     return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;

// template <typename T>
// ostream &print(ostream &os, const T &t)
// {
//     return os << t; //包中最后一个元素之后不打印分隔符

// }
// //包中处理最后一个元素之外的其他元素都会调用这个版本的print
// template<typename T ,typename... Args>
// ostream  &print(ostream &os,const T&t,const Args&...rest)
// {
//     os << t << ", ";           //打印第一个实参
//     return print(os, rest...); //...在后面，递归调用，打印其他实参
// }
// int main(){
//     int i=4;
//     string s="ss";
//     print(cout,i,s,42);
//     return 0;
// }

// //2020.06.06
// //stl标准库中数值算法的学习
// #include <iostream>
// #include <algorithm>
// #include <numeric>
// #include <functional>
// #include <vector>
// #include <iostream>
// #include <utility>
// #include <deque>
// bool b4(const int &i)
// {
//     return i > 4;
// }
// bool bn(const int n, const int &i)
// {
//     return i > n;
// }

// bool checkEven(const int &elem, bool even)
// {
//     if (even)
//         return elem % 2 == 0;
//     else
//     {
//         return elem % 2 == 1;
//     }
// }
// int main()
// {

//     // std::vector<int> coll{1, 1, 1, 1, 1};
//     // std::vector<int> coll1{2, 3, 4, 4, 5, 6};
//     // //accumulate函数
//     // //计算和
//     // std::cout
//     //     << "sum:" << std::accumulate(coll.begin(), coll.end(), 0) << std::endl;
//     // //计算乘积
//     // std::cout << "product" << std::accumulate(coll.begin(), coll.end(), 2, std::multiplies<int>());
//     // //计算和
//     // std::cout << "product" << std::accumulate(coll.begin(), coll.end(), 0, std::plus<int>());

//     // //innerproduct，内积
//     // //返回对应的乘积的和 0+a1*b1+a2*b2...
//     // auto sum1 = std::inner_product(coll.begin(), coll.end(), coll1.begin(), 0);
//     // //返回对应的和的乘积 1*(a1+b1)*(a2*b2)....
//     // auto sum2 = std::inner_product(coll.begin(), coll.end(), coll1.begin(), 1, std::multiplies<int>(), std::plus<int>());

//     // //partial_sum相对数列和绝对数列之间的转换
//     // std::vector<int> ivec{2, 2, 3}, ivec1{2, 3, 4};
//     // //a1,a1+a2,a1+a2,a1+a2+a3
//     // auto it1 = std::partial_sum(ivec.begin(), ivec.end(), ivec.begin());

//     // //将绝对值改成相对值
//     // auto it3 = std::adjacent_difference(ivec.begin(), ivec.end(), ivec.begin());

//     // //a1,a1*a2,a1*a2,a1*a2*a3
//     // auto it2 = std::partial_sum(ivec.begin(), ivec.end(), ivec.begin(), std::multiplies<int>());
//     // //partial_sum和adjacent_difference互补
//     // auto it4 = std::adjacent_difference(ivec.begin(), ivec.end(), ivec.begin(), std::divides<int>());
//     // std::for_each(ivec.begin(), ivec.end(), [](int &i)  {  i *= i; });
//     // std::for_each(ivec.begin(),ivec.end(),[=](int &i){i*=*ivec.begin();});

//     // std::vector<int> ivec{1, 2, 3, 4, 5}; //p525
//     // auto num = std::count_if(ivec.begin(), ivec.end(), b4);
//     // auto unm1 = std::count_if(ivec.begin(), ivec.end(), [](const int &i) { return i > 4; });
//     // auto num2 = std::count_if(ivec.begin(), ivec.end(), std::bind(bn, 4, std::placeholders::_1));

//     // //search_n 查找前n个--连续--匹配值
//     // std::deque<int> coll = {1, 2, 7, 7, 6, 3, 9, 5, 7, 7, 7, 3, 6};
//     // std::deque<int>::iterator pos;
//     // pos = std::search_n(coll.begin(), coll.end(), 3, 7);

//     // //search
//     // std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7};
//     // std::deque<int> ide = {3, 4, 5, 6};
//     // std::vector<int>::iterator iit;
//     // iit = std::search(ivec.begin(), ivec.end(), ide.begin(), ide.end());

//     // bool checkEvenArgs[3] = {true, false, true};
//     // std::vector<int>::iterator pos;
//     // pos =std::search(ivec.begin(),ivec.end(),checkEvenArgs,checkEvenArgs+3,checkEven);
//     // //进行循环
//     // while(pos!=ivec.end())
//     // {
//     //     std::cout<<std::distance(ivec.begin(),pos)+1;
//     //     pos=std::search(++pos,ivec.end(),checkEvenArgs,checkEvenArgs+3,checkEven);
//     // }

//     return 0;
// }

// // 2020.06.08
// #include <iostream>
// #include <string>
// #include <ostream>
// using namespace std;
// class Quote
// {
// public:
//     Quote() = default;
//     Quote(const std::string &book = "", double sales_price = 0.0) : bookNo(book), price(sales_price)
//     {
//         cout << "Quote constructor is running" << endl;
//     }
//     std::string isbn() const { return bookNo; }
//     //返回给定数量的书籍的销售总额，派生类改写并使用不同的折扣计算方法
//     virtual double net_price(std::size_t n) const
//     {
//         return n * price;
//     }
//     virtual void debug()
//     {
//         cout << "bookNo=" << bookNo << "price=" << price << endl;
//     }
//     virtual ~Quote()
//     {
//         cout << "Qote destructor is running" << endl;
//     }
//     friend ostream &operator<<(ostream &, Quote &);
//     virtual Quote *clone() const & { return new Quote(*this); }
//     virtual Quote *clone() && { return new Quote(std::move(*this)); }

// private:
//     std::string bookNo;

// protected:
//     double price = 0.0;
// };
// ostream &operator<<(ostream &os, Quote &e)
// {
//     os << "\tusing operator(ostream & ,Quote &)" << endl;
//     return os;
// }
// class Bulk_quote : public Quote
// {
//     friend ostream &operator<<(ostream &, Bulk_quote &);

// public:
//     Bulk_quote(const string &book = "", double sales_price = 0.0, size_t qty = 0, double disc = 0.0) : Quote(book, sales_price), min_qty(qty), discount(disc)
//     {
//         cout << "Bul_quote_constructor is running" << endl;
//     }
//     double net_price(size_t cnt) const
//     {
//         if (cnt > min_qty)
//             return cnt * (1 - discount) * price;
//         else
//         {
//             return cnt * price;
//         }
//     }
//     ~Bulk_quote()
//     {
//         cout << "Bulk_quote destructor is ruuning" << endl;
//     }
//     Bulk_quote *clone() const & { return new Bulk_quote(*this); }
//     Bulk_quote *clone() && { return new Bulk_quote(std::move(*this)); }

// private:
//     size_t min_qty;
//     double discount;
// };
// ostream &operator<<(ostream &os, Bulk_quote &bq)
// {
//     os << "\tUsing operator<<(ostream &,Bulk_quote &" << endl;
//     return os;
// }
// // #include<vector>
// // #include<memory>
// // int main()
// // {
// //     Quote base("C++ primer ",128.0);
// //     Bulk_quote bulk("Core Python Programming",89,5,0.19);
// //     std:vector<std::shared_ptr<Quote>>q_vec;
// //     shared_ptr<Quote> qp=make_shared<Quote>(base);
// //     shared_ptr<Quote>bp=make_shared<Bulk_quote>(bulk);
// //     q_vec.push_back(qp);
// //     q_vec.push_back(bp);
// //     cout<<base<<endl;
// //     cout<<bulk<<endl;
// //     q_vec[1]->net_price(5);
// //     return 0;
// // }

// // #include <vector>
// // #include <numeric>
// // int main()
// // {
// //     std::vector<std::vector<double>> dvec(10, std::vector<double>(10, 2));
// //     std::vector<double> dvec1(10, 3);
// //     auto sum = std::inner_product((*dvec.begin()).begin(), (*dvec.begin()).end(), dvec1.begin(), 0.0);
// //     return 0;
// // }

// //2020.06.09
// #include <memory>
// #include <set>
// using namespace std;

// class Basket
// {
// public:
//     // Basket 使用默认合成的默认构造函数和拷贝控制成员
//     void add_item(const std::shared_ptr<Quote> &sale)
//     {
//         items.insert(sale);
//     }
//     void add_item(const Quote&sale)
//     {
//         items.insert(std::shared_ptr<Quote>(sale.clone()));
//     }
//     void add_item( Quote&&sale)//移动给定对象
//     {
//         items.insert(
//             std::shared_ptr<Quote>(std::move(sale).clone())
//         );
//     }
//     double total_receipt(std::ostream &) const;

// private:
//     //该函数用于比较shared_ptr，multiset成员会用到t
//     static bool compare(const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs)
//     {
//         return lhs->isbn() < rhs->isbn();
//     }
//     //multiset 保存多个报价，按照compare成员排序
//     std::multiset<std::shared_ptr<Quote>, decltype(compare) *> items{compare};
// };

// double Basket::total_receipt(ostream &os) const
// {
//     double sum = 0.0; //保存实时计算出的价格
//     //iter指向ISBN相同的一批元素中的第一个
//     //upper_bound返回一个迭代器，该迭代器指向这批元素的尾后位置
//     for (auto iter = items.cbegin();
//          iter != items.cend();
//          iter = items.upper_bound(*iter))
//     {
//         //我们知道在当前的basket中至少有一个关键字的元素
//         //打印该书籍对应的项目
//         sum += print_total(os, **iter, items.count(*iter));
//     }
//     os << "Total Sale" << sum << endl;
//     return sum;
// }

// //计划6月剩下来的日子再把c++primer看一遍

// #include <iostream> //modern c++
// #include <string>
// #include <regex>
// int main()
// {
//     std::string fnames[] = {"foo.txt", "bar.txt", "test", "a0.txt", "AAA.txt"};
//     //在c++中\会被当做转义字符，为使\.作为正则表达式传递进去生效，需要对\进行二次转义，从而有\\.
//     std::regex txt_regex("[a-z]+\\.txt");
//     for (const auto &fname : fnames)
//         std::cout << fname << ": " << std::regex_match(fname, txt_regex) << std::endl;

//     std::regex base_regex("([a-z]+)\\.txt");
//     std::smatch base_match;
//     for (const auto &fname : fnames)
//     {
//         if (std::regex_match(fname, base_match, base_regex))
//         {
//             //std::smatch 的第一个元素匹配整个字符串
//             //std::smatch 的第二个元素匹配了第一个括号表达式
//             if (base_match.size() == 2)
//             {
//                 std::string base = base_match[1].str();
//                 std::cout << "sub-match[0]:" << base_match[0].str() << std::endl;
//                 std::cout << fname << " sub-match[1]: " << base << std::endl;
//             }
//         }
//     }
//     return 0;
// }

// //智能指针 modern c++
// #include <memory>
// #include <iostream>
// int main()
// {
//     auto pointer = std::make_shared<int>(10);
//     auto pointer2 = pointer; //引用计数加1
//     auto pointer3 = pointer; //引用计数+1

//     int *p = pointer.get();                                                 //这样不会增加引用计数
//     std::cout << "pointer.use_count=" << pointer.use_count() << std::endl;  //3
//     std::cout << "pointer3.use_count" << pointer3.use_count() << std::endl; //3
//     pointer2.reset();                                                       //减少了一个引用计数
//     std::cout << "reset pointer2" << std::endl;
//     std::cout << "pointer.use_count" << pointer.use_count() << std::endl;   //2
//     std::cout << "pointer2.use_count" << pointer2.use_count() << std::endl; //0,piter_2已经reset
//     pointer3.reset();
//     std::cout << "pointer3.use_count()=" << pointer3.use_count() << std::endl; //0
// }

// #include <iostream>
// #include <memory>
// struct Foo
// {
//     /* data */
//     Foo() { std::cout << "Foo::Foo" << std::endl; }
//     ~Foo() { std::cout << "Foo::~Foo" << std::endl; }
//     void foo() { std::cout << "Foo::foo" << std::endl; }
// };
// void f(const Foo &)
// {
//     std::cout << "f(const Foo&)" << std::endl;
// }
// int main()
// {
//     std::unique_ptr<Foo> p1(std::make_unique<Foo>());
//     //p1不空，输出
//     if (p1)
//         p1->foo();
//     {
//         std::unique_ptr<Foo> p2(std::move(p1));
//         //p2不空，输出
//         f(*p2);
//         //p2不空，输出
//         if (p2)
//             p2->foo();
//         //p1为空，无输出
//         if (p1)
//             p1->foo();
//         p1 = std::move(p2);
//         //p2为空，无输出
//         if (p2)
//             p2->foo();
//         std::cout << "p2被销毁" << std::endl;

//     }
//     //p1不空，输出
//     if(p1)p1->foo();
//     //Foo的实例会在离开作用域时销毁
// }

// #include <memory>
// #include <iostream>
// struct A;
// struct B;

// //智能指针失效的例子
// struct A
// {
//     /* data */
//     std::shared_ptr<B> pointer;
//     ~A()
//     {
//         std::cout << "A被销毁" << std::endl;
//     }
// };
// struct B
// {
//     std::shared_ptr<A> pointer;
//     ~B()
//     {
//         std::cout << "B被销毁" << std::endl;
//     }
// };
// int main()
// {
//     auto a = std::make_shared<A>();
//     auto b = std::make_shared<B>();
//     a->pointer = b;
//     b->pointer = a;
//     auto a_count = a.use_count(); //2
//     auto b_count = b.use_count(); //2
//     return 0;
// }

// 2020.06.09结束
// 2020.06.10由于加班回来晚，今日无更新

// //2020.06.11
// #include<tuple>
// #include<iostream>
// auto  get_student(int id)
// {
//     //返回类型被推断为std:: tuple<double,char,std::string?
//     if(id==0)
//     return std::make_tuple(3.8,'A',"张三");
//     if(id==1)
//     return std:: make_tuple(2.9,'C',"李四");
//     if(id==2)
//     return std::make_tuple(1.7,'D',"王五");
//     return std::make_tuple(0.0,'D',"null");
//     //如果只写0会出现推断错误，编译失败
// }

// int main(){
//     auto student=get_student(0);
//     std::cout<<"ID:0,"
//     <<"GPA"<<std::get<0>(student)<<", "
//     <<"成绩"<<std::get<1>(student)<<", "
//     <<"姓名"<<std::get<2>(student)<<'\n';
//     double gpa;
//     char grade;
//     std::string name;

//     //元组拆包
//     std::tie(gpa,grade,name)=get_student(1);
//     std::cout<<"ID:1"
//     <<"GPA"<<gpa<<", "
//     <<"姓名"<<name<<'\n';
//     return 0;
// }

// #include <iostream>
// void lambda_value_capture() //值捕获只是在变量lambda时被捕获
// {
//     int value = 1;
//     auto copy_value = [value] {
//         return value;
//     };
//     value = 100;
//     auto stored_value = copy_value();
//     std::cout << "stored_value= " << stored_value << std::endl;
// }

// //引用捕获 moder c++
// void lambda_reference_capture()
// {
//     int value = 1;
//     auto copy_value = [&value] { return value; };

//     value = 100;
//     auto stored_value = copy_value();
//     std::cout << "stored_value: " << stored_value << std::endl;
//     //这时，stored_value=100,value=100;
//     //因为copy_value保存的是引用
// }

// int main()
// {
//     lambda_value_capture();

//     lambda_reference_capture();
//     return 0;
// }

//捕获右值，c++14以上特性
#include <iostream>
#include <utility>

//突破8000行啦，分割线 -_>
int main()
{
    auto important = std::make_unique<int>(1);
    auto add = [v1 = 1, v2 = std::move(important)](int x, int y) -> int { return x + y + v1 + (*v2); };
    std::cout << add(3, 4) << std::endl;
    return 0;
}