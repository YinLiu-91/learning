////ָ��λ�ú��� p99,Ŀ��������ִ�е��ٶȡ�2020��01��19
//#include<iostream>
//using namespace std;
//inline int max(int, int, int); //��Ҫ�ں�������ʱ����inline
//int main()
//{
//	int i = 100, j = 20, k = 30, m;
//	m = max(i, j, k);
//	cout << "max=" << m << endl;
//	return 0;
//}
//
//inline int max(int a, int b, int c)//�����inline�ɼӻ��߲���
//{
//	if (b > a) a = b;
//	if (c > a)a = c;
//	return a;
//
//}

////����������p101,2020,01��19
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

////��̬�ֲ�����//
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

////�ⲿ������ʹ��p114
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

//�ַ�����p137
////ָ�����p157
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	int *pointer_1, *pointer_2;  //�����*��ֻ�𵽶��������
//	a = 100; b = 10;
//	pointer_1 = &a;//�����������ȡ��ַ
//	pointer_2 = &b;
//	cout << a << " " << b << endl;
//	cout << *pointer_1 << "" << *pointer_2 << endl;//�����*����ȡֵ������
//	return 0;
//}

////�������ý�������p187
//#include<iostream>
//using namespace std;
//int main()
//{
//	void sort(int&, int&, int&);
//	int a, b, c;
//	cout << "������3������";
//	cin >> a >> b >> c;
//	sort(a, b, c);
//	cout << "������ֵΪ��" << a << b << c << endl;
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
////�ṹ���ʹ�� p194
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

////�ṹ�����͵�������Ϊ��������
////�����ַ���1���ṹ�����. ȱ�㣺�ڴ�ռ�ô������Ӻ����м���ֵ�ı䣬�޷�����
////2����ָ��ṹ�������ָ����Ϊ�����βΡ� ȱ�㣺��ʽ����
////3���ýṹ�������������Ϊ�����β�   ��á�
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
//	void print(Student);//�����������βνṹ������Ϊ�ṹ��Student
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

////�ڶ��� ����ַ
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

////�ڶ��� ����ַ
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

//ö����������
//��ν��ö�����ݾ��ǽ�������ֵһһ�оٳ�����������ֵֻ�����оٳ�����ֵ�ĵķ�Χ��

////2020.01.29 p246 ���ù��캯��ʵ�ֳ�ʼ��
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
//void Time :: set_time() //��Ҫ������ ��Time ::��
//{
//	cout << "������ʱ���֣���" << endl;
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
//	t1.set_time();//��������ǵô�����
//	t1.show_time();
//	Time t2;
//	t2.show_time();
//	while (1);
//	return 0;
//}

////���ö�������ʵ�ּ������ p260
//#include<iostream>
//using namespace std;
//class Box
//{
//public:
//	Box(int h = 10,int w= 12,int len =15):height(h),width(w),length(len){}
//	//������Ĭ�ϲ����Ĺ��캯�����ò�����ʼ��������ݳ�Ա���г�ʼ��
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
//	//����������˶�����������ʼ���ķ���
//	Box a[3] = {
//		Box(10,12,15),
//		Box(15,18,20),
//		Box(16,20,26)
//	};
//	cout << "a[0]�����:" << a[0].volume() << endl;
//	cout << "a[1]�����:" << a[1].volume() << endl;
//	cout << "a[2]�����:" << a[2].volume() << endl;
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

////С����16,17�� �̳л����еĹ�����
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
////��������еĺ���
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
//	std::cout << "�Һܶ�����������ˮ��" << std::endl;
//}
//
////���������еĺ���
//void Pig::climb()
//{
//	std::cout << "�һ�������" << std::endl;
//}
//
//void Turtle::swim()
//{
//	std::cout << "�һ���Ӿ��" << std::endl;
//
//}
//
////Animal�Ĺ��캯��
//Animal::Animal(std::string theName)
//{
//	name = theName;
//}
//
////Pig�Ĺ��캯��
//Pig::Pig(std::string theName) :Animal(theName)
//{
//}
////Turtle�Ĺ��캯��
//Turtle::Turtle(std::string theName) : Animal(theName)
//{
//
//}
//
//
//int main()
//{
//	Pig pig("С����");
//	Turtle turtle("С����");
//
//	std::cout << "���������:" << pig.name << std::endl;
//	std::cout << "�ڹ��������:" << turtle.name << std::endl;
//	pig.eat();
//	turtle.eat();
//	pig.climb();
//	turtle.swim();
//
//	while (1);
//	return 0;
//}

////С����17����������ʹ������
//#include<iostream>
//#include<string>
//class BaseClass
//{
//public:
//	BaseClass();
//	~BaseClass();
//	void doSomething();
//};
////����
//class SubClass :public BaseClass
//{
//public:
//	SubClass();
//	~SubClass();
//};
//
////���л���ĺ����Ķ���
////�Ի���Ĺ��캯������
//
//BaseClass::BaseClass()
//{
//	std::cout << "������๹����\n";
//	std::cout << "���ڻ����и��ˡ���������\n\n";
//
//}
//BaseClass::~BaseClass()
//{
//	std::cout << "��������������\n";
//	std::cout << "���ڻ���������Ҳ���ˡ�������\n\n";
// }
//
//
//void BaseClass::doSomething()
//{
//	std::cout << "gansha \n";
//}
////������������������������
//SubClass::SubClass()
//{
//	std::cout << "��������������\n";
//	std::cout << "���������������и���...\n";
//
//}
//
//SubClass::~SubClass()
//{
//	std::cout << "��������������\n";
//	std::cout << "������������������\n\n";
//}
//
//int main()
//{
//	SubClass subclass;
//	subclass.doSomething();
//	std::cout << "���£��ֹ�\n";
//	//while (1);
//
//
//	return 0;
//
//
//
//}

//// 20�����̳еĹ��У�˽�У�����
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
//class Pig : public Animal {  //��public Animal Ϊ�̳�
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
////��������еĺ���
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
//	std::cout << "�Һܶ�����������ˮ��" << std::endl;
//}
//
////���������еĺ���
//void Pig::climb()
//{
//	std::cout << "�һ�������" << std::endl;
//}
//
//void Turtle::swim()
//{
//	std::cout << "�һ���Ӿ��" << std::endl;
//
//}
//
////Animal�Ĺ��캯��
//Animal::Animal(std::string theName)
//{
//	name = theName;
//}
//
////Pig�Ĺ��캯��
//Pig::Pig(std::string theName) :Animal(theName)
//{
//}
////Turtle�Ĺ��캯��
//Turtle::Turtle(std::string theName) : Animal(theName)
//{
//
//}
//
//
//int main()
//{
//	Pig pig("С����");
//	Turtle turtle("С����");
//	// pig.name
//	std::cout << "���������:" << pig.name << std::endl;
//	std::cout << "�ڹ��������:" << turtle.name << std::endl;
//	pig.eat();
//	turtle.eat();
//	pig.climb();
//	turtle.swim();
//
//	while (1);
//	return 0;
//}

////��̬���ݳ�Աp 281
//#include<iostream>
//using namespace std;
//class Box
//{
//public:
//	Box(int, int);//�������캯��
//	int volume();
//	static int height;
//	int width;
//	int length;
//
//};
//
//Box::Box(int w, int len) //���幹�캯��
//{
//	width = w;
//	length = len;
//}
//
//int Box::volume()  //���巽��
//{
//	return(height*width*length);
//
//}
//
//int Box::height = 10;
//int main()
//{
//	Box a(15, 20), b(20, 30);
//	cout << a.height << endl;		//ͨ�� ���� �������þ�̬���ݳ�Ա����
//	cout << b.height << endl;		//ͨ�� ���� ��
//	cout << Box::height << endl;	//ͨ�� ��   ������
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
//	static double sum; //static������sumʵ���ۼӣ���̬������
//	//�����������������Ч
//	static int count; //ͬ����static
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
//	return(Student::sum/Student::count);//����ֱ�ӵ��þ�̬���ݳ�Ա������Ҫ������
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
//	cout << "������ѧ��������";
//	cin >> n;
//	for (int i = 0; i < n; ++i)
//	{
//		stud[i].total();
//
//	}
//	cout << n << "��ѧ����ƽ�����ǣ�" << Student::average() << endl;
//	while (1);
//	return 0;
//}

//// p 287ҳ�� ��Ԫ��Ա����
//#include<iostream>
//using namespace std;
//class Date;  //��������������
//class Time
//{
//public:
//	Time(int, int, int);
//	void display(Date &); //display �ǳ�Ա�������β���date����������
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
//	friend void Time::display(Date &);//����Time�е�displayΪ��Ԫ����
//private:
//	int month;
//	int day;
//	int year;
//};
//Time::Time(int h,int m,int s) { //����Time�Ĺ��캯��
//	hour = h;
//	minute = m;
//	sec = s;
//}
//
//void Time::display(Date &d) {   // �����������õ����õĵ�ַ
//
//	// month��Ҫ�� d. ��Ϊ��Ҫ��Ҫ֪�����������
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

////p 292 ��ģ��
//#include<iostream>
//using namespace std;
//template <class numtype>
//class Compare //���ģ������Ϊcompare
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
//	cout << cmpl.max() << "�������" << endl;
//	cout << cmpl.min() << "��С����" << endl;
//	Compare <float> cmpl1(22.3, 33.2);
//	cout << cmpl1.max() <<"��"<< endl;
//	cout << cmpl1.min() << "С" << endl;
//	while (1);
//	return 0;
//}

//// p 344 ������Ա
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
//class Student1 :protected Student		//�����̳�
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
//void Student1::get_value1()				// ::Ϊ�������޶���
//{
//	cout << "����������num��name��sex��age��addr��" << endl;
//	cin >> num >> name >> sex;			//�����̳еõ�����Ĺ��г�Ա������ֱ��ʹ��
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
//	// ����ֻ�������������Ϊ�ǹ��еģ����������ⱻ����
//	stud1.get_value1();
//	stud1.display();
//	while (1);
//	return 0;
//}

//// p 347��������Ĺ��캯��
//#include<iostream>						//	���������
//using namespace std;					// �����ռ�std
//#include<string>
////�������
//class Student
//{
//public:									//����Ϊ������Ա�����������ⱻ����
//	Student(int n, string nam, char s)	// ��ʼ�������캯��
//	{
//		num = n;
//		name = nam;
//		sex = s;
//
//	}
//	~Student(){}						// ��������
//protected:								// �������ĳ�Ա
//	int num;
//	string name;
//	char sex;
//};
////����������
//class Student1:public Student			//�Ի�����й��м̳У�
//										//��ô���๫�еĳ�Ա��ȻΪ���е�
//{
//public:
//	Student1(int n, string nam, char s, int a, string ad) :Student(n, nam, s)
//		// ���캯���ļ̳�
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
//	// ���ֻ�������Ϊ�ǹ��еģ��������������ã�
//	// ���������˽�еĻ��߱����ģ��޷�����������
//	stud1.show();
//	stud2.show();
//	while (1);
//	return 0;
//}

//// p96 �ݹ����
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

//// p97���n�Ľ׳�
//#include<iostream>
//using namespace std;
//double mul(int n);
//int main()
//{
//	int n;
//	double r;
//	cout << "������һ��������" << endl;
//	cin >>n;
//	r = mul( n);
//	cout << "�׳��ǣ�" << r << endl;
//	while (1);
//	return 0;
//}
//double mul(int n)
//{
//	double mul1;
//	if (n < 0)
//		cout << "�������" << endl;
//	else if (n == 0 || n == 1) mul1 = 1;
//	else
//		mul1 = mul(n - 1)*n;
//	return mul1;
//
//}

////���Ӷ����������Ĺ��캯��
//#include<iostream>
//#include<string>
//using namespace std;
//class Student			//��������
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
//	// ע�����������Ĺ��캯���������Ӷ���ʱ�ĳ�ʼ��
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
//	Student monitor;			//ע�⣺****���������Ϊһ������
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

////������� p354
//#include<iostream>
//#include<string>
//using namespace std;
//class Student
//{
//	//��������
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
////��������������
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
//	int age;  //����ageΪprivate��ʽ��
//};
//
////�������������
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

////���ؼ̳�
//#include<iostream>
//#include<string>
//using namespace std;
////������ʦ��
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
////����ѧ����
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

////������Ӧ��p367
//#include<iostream>
//#include<string>
//using namespace std;
////������������
//class Person
//{
//public:
//	Person(string nam, char s, int a)
//	{
//		name = nam; sex = s; age = a;
//	}
//protected: //������Ա
//	string name;
//	char sex;
//	int age;
//};
//
////����person��ֱ��������Teacher
//class Teacher:virtual public Person //�����
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
////����person��ֱ��������student
//class Student :virtual public Person //�����
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
//	//�ڴ˴�����Ҫ�������Ĺ��캯�����ã�Ҳ��������ֱ�ӻ���ĳ�ʼ��
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
////������
//int main()
//{
//	Graduate grad1("wang_li", 'f', 24, "assistant", 89.5, 1200);
//	grad1.show();
//	while (1);
//	return 0;
//}

//// ͨ��������ʵ�ָ������ p 298
//#include<iostream>
//using namespace std;
//class Complex
//{
//public:
//	Complex() { real = 0; imag = 0; }		//���캯��
//	Complex(double r, double i)				//���캯��������
//	{
//		real = r; imag = i;
//	}
//	//Complex complex_add(Complex &c2);		//����������Ӻ���
//	Complex operator +( Complex & c2);
//	void display();
//private:
//	double real;
//	double imag;
//};
////
////Complex Complex::complex_add(Complex &c2)	//�����һ��Complex�Ǳ�
////											//ʾ�����ķ������ͣ��ڶ�����
////											//�����������ⶨ��ĺ�����
////											//��Ҫ˵��������һ����
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

//// ��������12.2 p 381  date:2020.02.03
//#include<iostream>
//using namespace std;
////��������
//class Point
//{
//public:
//	Point(float x = 0, float y = 0);	//����Ĺ��캯��
//	void setPoint(float, float);		//�趨ֵ����
//	float getX()const { return x; }		//��ȡx���꣬getX����Ϊ����Ա����
//	float getY()const { return y; }		//��ȡy���꣬getX����Ϊ����Ա����
//	friend ostream &operator <<(ostream &, const Point &);//��Ԫ���������<<
//
//protected:
//	float x, y;
//};
////����point��ĳ�Ա����
//Point::Point(float a, float b)
//{
//	x = a; y = b;
//}
//// ����x��y������ֵ
//void Point::setPoint(float a,float b)
//{
//	x = a; y = b;
//}
////��������� << ��ʹ֮�ܹ�����������
//ostream & operator <<(ostream &output, const Point &p)
//{
//	output << "[" << p.x << "," << p.y << "]" << endl;
//	return output;
//}
//
////����������circle
//class Circle :public Point
//{
//public:
//	Circle(float x = 0, float y = 0, float r = 0);	//����ֻ��������
//													//����Ҫ�Ի���Ĺ���ɼ������˵��
//	void setRadius(float);
//	float getRadius() const;
//	float area() const;
//	friend ostream &operator<<(ostream &, const Circle &);
//protected:
//	float radius;
//};
//
//Circle::Circle(float a, float b, float r) :Point(a, b), radius(r) {}
////���ð뾶
//void Circle::setRadius(float r)
//{
//	radius = r;
//}
////��ȡ�뾶
//float Circle::getRadius() const { return radius; }
////����Բ���
//float Circle::area() const
//{
//	return 3.14149*radius*radius;
//}
////���������<<��ʹ֮�ܹ����涨����ʽ���Բ����Ϣ
//ostream &operator <<(ostream &output, const Circle &c)
//{
//	output << "Center=[" << c.x << "," << c.y << "],r=" << c.radius << ",area=" << c.area() << endl;
//	return output;
//}
//
////����circle ��������cylinder
//class  Cylinder :public Circle
//{
//public:
//	Cylinder(float x = 0, float y = 0, float r = 0, float h = 0);
//	void setHeight(float);
//	float getHeight()const;
//	float area()const;//����Բ�����
//	float volume() const;
//	friend ostream & operator <<(ostream&, const Cylinder&);//���������<<
//protected:
//	float height;//��������
//};
//// ���幹�캯��
//Cylinder::Cylinder(float a, float b, float r, float h) :Circle(a, b, r), height(h) {}
////��������Բ���ߵĺ���
//void Cylinder::setHeight(float h) { height = h; }
////�����ȡԲ���߶ȵĺ���
//float Cylinder::getHeight()const { return height; }
////�������Բ������ĺ���
//float Cylinder:: area()const		//������ֵ������ֵΪfloat����
//{
//	return 2 * Circle::area() + 2 * 3.14159*radius*height;
//}
////�������Բ��������ĺ���
//float Cylinder::volume()const
//{
//	return Circle::area()*height; //��������Cylinder�޶�˵���Ǵ����͵����
//}
////���������<< �ĺ���
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
//	//Circle c(3.5, 6.4, 5.2);//����circle���󣬲��ƶ�Բ����뾶
//	//cout << "original circle:\nx=" << c.getX() << ",y=" << c.getY() << ",r=" <<
//	//c.getRadius() << ",area=" << c.area() << endl;
//	//c.setRadius(7.5);					//���ð뾶
//	//c.setPoint(5, 5);					//����Բ������
//	//cout << "new circle:\n" << c;		//�����������<<���Բ�������Ϣ
//	//Point &pRef = c;						//pRef��point������ã���c��ʼ��
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

////��12.2 ����������������ͬ������
//#include<iostream>
//#include<string>
//using namespace std;
////��������
//class Student
//{
//public:
//	 Student(int, string, float); //��virtual
//	 virtual void display();
//protected:
//	int num;
//	string name;
//	float score;
//};
//
////Student���Ա��ʵ��
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
////��������������
//class Graduate :public Student
//{
//public:
//	Graduate(int, string, float, float);
//	void display();
//private:
//	float wage;
//};
////������غ���
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
//	Student *pt ; //����һ��ָ������ָ�����������ָ�����
//	pt = &stud1;
//	pt->display();
//	//Graduate *ptr = &grad1;
//	pt = &grad1;
//	//pt = &Graduate::display();
//	pt->display();
//	while (1);
//	return 0;
//}

//// ��12.2 p386 ��д 2020.04.06��
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

//// ���������� p392
//#include<iostream>
//using namespace std;
//class Point
//{
//public:
//	Point() {}
//	virtual ~Point() { cout << "ִ��point������" << endl; }
//};
//class Circle :public Point
//{
//public:
//	Circle(){ }
//	~Circle() { cout << "ִ��circle��������"; }
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

//// p394�麯���ͳ�������Ӧ��  2020.02.04
//#include<iostream>
//using namespace std;
////�����������shape
//class Shape
//{
//public:
//	virtual float area()const { return 0.0; }		//�麯��
//	virtual float volume() const { return 0.0; }	//�麯��
//	virtual void shapeName() const = 0;				//���麯��
//};
//
////����point ��
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
////����point ��ĳ�Ա
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
////����circle��
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
//// ����circle ��ĺ���
//Circle::Circle(float a, float b, float r) : Point(a, b), radius(r) {}
//void Circle::setRadius(float r) { radius = r; }
//float Circle::getRadius() const { return radius; }
//float Circle::area()const { return 3.14159*radius*radius; }
//ostream &operator <<(ostream &output,const Circle &c)
//{
//	output << "[" << c.x << "," << c.y << "],r=" << c.radius;
//	return output;
//}
////����cylinder��
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
////����cylinder���еĺ���
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
////mian����
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
//	//����������
//	pt = &point;
//	pt->shapeName();
//	cout << "x = " << point.getX() << ",y= " << point.getY() << "\narea=0" <<pt->area()
//		<< "\nnvome=" << pt->volume() << "\n\n";//ע�������ʹ�� .��->�Ĳ�ͬ
//	//���Բ������
//	pt = &circle;
//	pt->shapeName();
//	cout << "x = " << circle.getX() << ",y= " << circle.getY() << "\narea" << pt->area()
//		<< "\nnvome=" << pt->volume() << "\n\n";
//	//���Բ��������
//	pt = &cylinder;
//	pt->shapeName();
//	cout << "x = " << cylinder.getX() << ",y= " << cylinder.getY() << "\narea" << pt->area()
//		<< "\nnvome=" << pt->volume() << "\n\n";
//	while (1);
//	return 0;
//
//
//}

//// p409 cerr���÷� cerr �������������  "<<"
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	float a, b, c, disc;
//	cout << "������a,b,c";
//	cin >> a >> b >> c;
//	if (a == 0)
//		cerr << "���󣡣�a ��һ�����������" << endl;
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

////p 411����������ݵĸ�ʽ
//#include<iostream>
//using namespace std;
//#include<iomanip>
//int main()
//{
//	int a = 21;
//	cout.setf(ios::showbase);//��ʾ��������
//	cout << "dec:" << a << endl;//Ĭ����ʮ������ʽ���a
//	cout.unsetf(ios::dec);//��ֹʮ���Ƹ�ʽ����
//	cout.setf(ios::hex);//����16λ������ʽ���
//	cout << "hex" << a << endl;
//
//	while (1);
//	return 0;
//}

////����ascii�ļ��Ĳ��� p423
//#include<fstream>
//using namespace std;
//#include<iostream>
//int main()
//{
//	int a[10];
//	ofstream outfile("f1.dat", ios::out);//�����ļ������󣬴򿪴����ļ�f1.dat
//	if (!outfile)//������ʧ�ܣ�����0ֵ
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
//	//printf("%d,%d\n", a, *a);//�׵�ַ���׵�ַ
//	//printf("%d,%d\n", a[0], *(a + 0));// �׵�ַ���׵�ַ
//	//printf("%d,%d\n", &a[0], &a[0][0]);//�׵�ַ���׵�ַ
//	//printf("%d,%d\n", a[1], a + 1);//�ڶ����׵�ַ���ڶ����׵�ַ
//	//printf("%d,%d\n", &a[1][0], *(a + 1) + 0);//�ڶ����׵�ַ���ڶ����׵�ַ
//	//printf("%d,%d\n", a[2], *(a + 2));// �������׵�ַ
//	//printf("%d,%d\n", &a[2], a + 2);//�������׵�ַ
//	//printf("%d,%d\n", a[1][0], *(*(a + 1) + 0));//��2�еĵ�һ��ֵ
//	//printf("%d,%d\n", *(a +2), *(*(a + 2) + 0));//�������׸��ĵ�ַ�������е�ֵ
//	//printf("%d,%d\n", *a[2], *(*(a + 2) + 0));//�������׸��ĵ�ַ�������е�ֵ
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

////���������
//// p299 ��10.2
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

////����˫Ŀ�����
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

//// ���ص�Ŀ�����
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
//// p314 ����������������ȡ
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
//	// ����ͬʱ����������غ�����ת��
//	//���ǿ���ͬʱ������ת����ת�����죬������ת�����ȼ����ߣ����ÿ������ʲôֵ��
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
//	c3  = c1 + 2.5;// (0,5.5)����������ת��c1ת����3,3+2.5��5.5��Ȼ����ߣ�
//	/***********************************************************
//
//							1������ת�������������ͬ��������ͬʱ���ڡ�
//							2��������ת��ʱ����ʹ������ת��������Ҫʱ ����Ҫת�����졣
//							3������������أ�������ʹ��ת�����캯��
//
//	*********************************************************************************************/
//	//�Ǹ�������Ҫ����ת�����Զ�ת����Ȼ��������ת�����죬
//	double d = c1 + 2.5;// �����ұ�����������ת���������ʵ��������Ҫ��������ת����
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
//	if (s.begin() != s.end())//�ж��Ƿ�Ϊ��
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
//	list<string> list2(authors);//��ȷ������ƥ��,ͬΪlist
//	//deque<string> authList(authors);//�����������Ͳ�ƥ��
//	deque<string> authList(authors.begin(), authors.end());
//	//vector<string>words(articles);//�����������ͱ���ƥ�䣻
//	vector<string>words(articles.begin(),articles.end());// ��ȷ���������Ͳ�ƥ�䣬����ʹ�õ��ǿ���һ����Χ
//	//��ȷ�����Խ�const char* Ԫ��ת��Ϊstring
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
//	//names = oldstyle;//�����������Ͳ�ƥ��
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

////p309 ��ϰ9.3.1
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
//		deque1.push_back(buf);//���׼���������Ԫ��
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
//		// val1��val2��v�е�һ��Ԫ�صĿ���
//		auto val1 = *v.begin(), val2 = v.front();
//		// val3��val4��c�����һ��Ԫ�صĿ���
//		auto last = v.end();
//		auto val3 = *(--last);// ���ܵݼ�forward_list������
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

//// p 318ҳ��
//#include<vector>
//#include<iostream>
//using std::vector;
//using namespace std;
//int main()
//{
//	vector<int> ivec;
//	//sizeӦ��Ϊ0��capacity��ֵ�����ھ���ʵ�֣�
//	cout << "ivec:size:" << ivec.size() << endl;
//	cout << "ivec:capacity:" << ivec.capacity() << endl;
//	//���24��Ԫ��
//	for (vector<int>::size_type ix = 0; ix != 24; ++ix)
//		ivec.push_back(ix);
//
//	// sizeӦ��Ϊ24��capacityӦ�ô���24��������������ʵ��
//	cout << "ivec:size:" << ivec.size() << endl;
//	cout << "ivec:capacity" << ivec.capacity() << endl;//capacity��СΪ28
//
//	// Ԥ����һЩ�ռ�
//	ivec.reserve(50);		// ��capacity�����趨50�����ܻ����
//	//sizeӦ��Ϊ24��capacityӦ�ô���50�����������ڱ�׼��ʵ��
//	cout << "capacity:" << ivec.capacity() << endl;
//	// �������ù�
//	while (ivec.size() != ivec.capacity())
//		ivec.push_back(0);
//	cout << "ivec:size" << ivec.size() << endl;//50
//	cout << "ivec:capacity" << ivec.capacity() << endl;//��size���
//	ivec.push_back(32);
//	cout << "ivec:size" << ivec.size() << endl;//51
//	cout << "ivec:capacity" << ivec.capacity() << endl;//75����ʱ��������Ϊԭ����1.5����������2��
//	// ����shirink_to_fit�˻�
//	ivec.shrink_to_fit();//�黹�ڴ�
//	//sizeӦ��δ�ı䣬capacity��ֵ����������ʵ��
//	cout << "ivec:capacity" << ivec.capacity() << endl;//51�����ڴ���ȫ�˻ظ�����
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
//	stack<int> stk(deq);				//��deq����Ԫ�ص�stk
//	while (1);
//	return 0;
//
//}

////�����㷨
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
//	//���ҵ���val��ȵ�Ԫ�أ��򷵻ؽ��ָ���������򷵻ؽ��Ϊvec.cendl
//	auto result = find(vec.cbegin(), vec.cend(), val);
//	cout << "the value" << val
//		<< (result == vec.cend() ? "is not present" : "is present") << endl;
//	while (1);
//	return 0;
//}

////p 337 10.1�����㷨,count����ֵ��ͬ�ĸ���
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
//	//���ҵ���val��ȵ�Ԫ�أ��򷵻ؽ��ָ���������򷵻ؽ��Ϊvec.cendl
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
//	auto it = back_inserter(vec);//ͨ������ֵ�ὫԪ����ӵ�vec��
//	*it = 42;// vec ������һ��Ԫ�أ�ֵΪ42
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
//	//���ֵ�����words���Ա�����ظ�����
//	sort(words.begin(), words.end());
//	//unique�������뷶Χ��ʹ��ÿ������ֵ����һ��
//	// �����ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
//	auto end_unique = unique(words.begin(), words.end());
//	//ʹ����������eraseɾ���ظ�����
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
//	//���ֵ�����words���Ա�����ظ�����
//	//sort(words.begin(), words.end(),isShorter);
//	sort(words.begin(), words.end());
//	//unique�������뷶Χ��ʹ��ÿ������ֵ����һ��
//	// �����ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
//	auto end_unique = unique(words.begin(), words.end());
//	//ʹ����������eraseɾ���ظ�����
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
//	//ͳ��ÿ�������������г��ֵĴ���
//	map<string, size_t>word_count; //string��size_t�Ŀ�map
//	string word;
//	for (int i = 0; i < 3; ++i)
//	{
//		cin >> word;
//		++word_count[word]; //��ȡword�ļ������������һ,[
//	}
//	for (const auto &w : word_count)
//		// ��ӡ���
//		cout << w.first << "occurs" << w.second << ((w.second > 1) ? "times" : "time") << endl;
//	while (1);
//	return 0;
//}

//// ʹ��set
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
//	map<string, size_t> word_count; //string��size_t�Ŀ�map
//	set<string> exclude = { "The","But","And","Or","An" };
//	string word;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> word;
//		if (exclude.find(word) == exclude.end())	//����find�������ʣ�����ؼ�����set�У�
//																							// ������ָ��ؼ��֣�����find����β�������
//			++word_count[word]; // ��ȡ������word�ļ�����
//	}
//}

//// p377
//#include<vector>
//#include<set>
//#include<iostream>
//using namespace std;
//int main()
//{
//	// ����һ������20��Ԫ�ص�vector������0-9ÿ����������������
//	vector<int> ivec;
//	for (vector<int>::size_type i = 0; i != 10; ++i)
//	{
//		ivec.push_back(i);
//		ivec.push_back(i);
//	}
//	//iset��������ivec�Ĳ��ظ���Ԫ�أ�miset��������ivec���ظ���Ԫ�أ�miset��������20��Ԫ��
//	set<int> iset(ivec.cbegin(), ivec.cend());//��������������������Ĺ��죬��p295
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
//	// map�Ķ���
//	map<string, vector<string>> family;
//
//	string first_name, child_name;
//
//	// ��while��ʹ��lambda��䣬���Դ����������������������Ҫ������������Ҳ��������
//
//}

//// p
//int main()
//{
//	int (*p1)[4]=new int[1][4];//��ֵδ����
//	int(*p2)[4] = new int[1][4]();// ֵ��ʼ��Ϊ0****
//	while (1);
//	return 0;
//}

////p 409
//int main()
//{
//	int i, *pi1 = &i, *pi2 = nullptr;
//	double *pd = new double(33), *pd2 = pd;
//	//delete i;		//����i����һ��ָ�룻
//	//delete pi1;		//δ���壺pi1ָ��һ���ֲ�����
//	delete pd;			//��ȷ
//	//delete pd2;		//δ����:pd2ָ����ڴ��Ѿ����ͷ���
//	delete pi2;		// ��ȷ���ͷ�һ����ָ������û�д����
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
//	// ���p1��Ϊ�գ�������Ƿ�ָ��һ����string
//	if (p1&& p1->empty())
//		*p1 = "hi";
//	auto p = make_shared<int >(43);
//	auto q(p);
//	//p402
//	auto r = make_shared<int >(42);
//	r = q;		//��r��ֵ������ָ����һ����ַ��
//					// ����qָ��Ķ�������ü�����
//					// �ݼ�rԭ��ָ��ĵĶ�������ü���
//					// rԭ��ָ��Ķ�����û�������ߣ����Զ��ͷ�
//	vector<string> v1; //
//	{//��������
//		vector<string>v2 = { "a","an","the" };
//		v1 = v2; // ��v2����Ԫ�ص�v1��
//
//	}//v2�����٣����е�Ԫ��Ҳ������
//	 // v1������Ԫ�أ���ԭ��v2��Ԫ�صĿ���
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

////p94ҳ 3.17
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
//			svec[i1][j] = toupper(svec[i1][j]);//ֻ�ܶ�ÿ���ַ���д
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
//	vector<string> svec { "thisis","","a" };// ���ַ���������"   ",����"".
//	for (auto it = svec.begin(); it != svec.end() && !it->empty(); ++it)//ע��it->empty()ǰ��ģ�
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
//	vector<string> test{ "jlskjflsl ","", "jkljfksjlf","" };//�ڶ���Ϊ�ա�
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
//	ac = { 0 };//���ԣ�p302��Ϊʲô˵�����أ���
//	while (1);
//	return 0;
//}

////p309 9.18��
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
//		sde.push_front(s);//push_front���԰����������з�����
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
//	//����һ������20��Ԫ�ص�vector������0��9ÿ����������������
//	vector<int>ivec;
//	for (vector<int>::size_type i = 0; i != 10; ++i)
//	{
//		ivec.push_back(i);
//		ivec.push_back(i);//ÿ�������ظ�����2��
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

////p381 11.12
//#include<utility>
//#include<vector>
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	vector<pair<string, int>> pvec;
//	for (int i = 0; i < 5; ++i)
//	{
//		string first;
//		int second;
//		cin >> first;
//		cin >> second;
//		pair<string, int> p(first, second);
//		pvec.push_back(p);
//	}
//	while (1);
//	return 0;
//}

////p382set�Ĺؼ�����const��
//#include<set>
//#include<iostream>
//using namespace std;
//int main()
//{
//	set<int> iset = { 1,2,3,4,5,6 };
//	set<int>::iterator set_it = iset.begin();
//	if (set_it != iset.end())
//	{
//		//*set_it=32;//����
//		cout << *set_it << endl;
//	}
//	while (1);
//	return 0;
//}

//#define TPA_OPT  TPA_OPT1
//int main()
//{
//	int a = 010;//8��8����
//	int b = 010.99;//,10��10���ƣ�double->int
//	int  TPA_OPT1 = 5;
//	while (1);
//	return 0;
//
//}

////2020.04.12 ţ����ĿT3
//#include<iostream>
//using namespace std;
//void fun(char ch, float x[])
//{
//
//	cout << "��������" << endl;
//
//}
//int main()
//{
//	float a[10] = { 0 };
//	fun(32, a);
//	//fun('65', 2.8);//������ʾ����double������ʵ����"float*"���Ͳ�����
//	//t = fun('D', A);
//	//fun("abc", a[]);//"const char *" ���͵�ʵ���� "char" ���͵��ββ�����
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
//		cout << "ִ��strcmp(b, a)" << endl;
//	}
//	if (strcmp(a, b))
//	{
//		cout << "ִ��strcmp(a, b)" << endl;
//	}
//	if (strcmp(a, b)>0)
//	{
//		cout << "ִ��strcmp(a, b)>0" << endl;
//	}
//
//	while (1);
//	return 0;
//
//}

// //p405
// #include<vector>
// #include<string>
// #include<memory>
// using namespace std;
// class StrBlob
// {
// public:
// 	typedef std::vector<std::string > ::size_type size_type;
// 	StrBlob();
// 	StrBlob(std::initializer_list < std::string> il);
// 	size_type size()const { return data->size(); }
// 	bool empty() const { return data->empty(); }
// 	//���ɾ��Ԫ��
// 	void push_back(const std::string &t) { data->push_back(t); }
// 	void pop_back();
// 	//Ԫ�ط���
// 	std::string& front();
// 	std::string& back();
// private:
// 	std::shared_ptr<std::vector<std::string>>data;
// 	void check(size_type i, const std::string &msg)const;

// };
// StrBlob::StrBlob() :data(make_shared<vector<string>>) {}
// StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}
// void StrBlob::check(size_type i, const string &msg)const
// {
// 	if (i >= data->size())
// 		throw out_of_range(msg);
// }
// string& StrBlob:: front()
// {
// 	//���vectorΪ�գ�check���׳�һ���쳣
// 	check(0, "front on empty StrBlob");

// }
// string& StrBlob::back()
// {
// 	check(0, "back on empty StrBlob");
// 	return data->back();
// }
// void StrBlob::pop_back()
// {
// 	check(0, "pop_back on empty StrBlob");
// 	data->pop_back();
// }

// //���ڷ���һ��������Ԫ�صĳ��ԣ�StrBlobPtr���׳�һ���쳣
// #include <memory>
// using namespace std;
// class StrBlobPtr
// {
// public:
//     StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
//     std::string &deref() const;
//     StrBlobPtr &incr(); //ǰ׺����
//     //�����͵ݼ������
//     StrBlobPtr &operator++();
//     StrBlobPtr &operator--();
//     //���õ���
//     StrBlobPtr &operator++(int);
//     StrBlobPtr &operator--(int);
//     //*
//     string &operator*() const
//     {
//         auto p = check(curr, "dereference past end");
//         return (*p)[curr]; //(*p)�Ƕ�����ָ��vector
//     }
//     string* operator->()const
//     {//��ʵ�ʹ���ί�и��������������
//     return & this->operator*();

//     }

// private:
//     //�����ɹ���check����һ��ֽ��vector��shared_ptr
//     std::shared_ptr<std::vector<string>>;
//     check(size_t, const std::string &) const;
//     //����һ��weak_ptr,��ζ�ŵײ�vector���ܱ�����
//     weak_ptr<vector<string>> wptr;
//     size_t curr;
// };
// //ǰ�õ���
// StrBlobPtr &StrBlobPtr::operator++()
// {
//     //���curr�Ѿ�ָ����������β��λ�ã����޷�������
//     check(curr, "increment past end of strblobstr");
//     ++curr;
//     return *this;
// }
// //
// StrBlobPtr &StrBlobPtr::operator--()
// {
//     //���curr��0��������ݼ���������һ����Ч�±�
//     --curr;
//     check(curr, "decrement past begin of strblobptr");
//     return *this;
// }
// //��������
// //������������֮ǰ��Ҫ���ȼ�¼����ԭֵ
// StrBlobPtr StrBlobPtr::operator++(int)
// {
//     //�˴���������Ч�ԣ�����ǣ�Ƶ�������ʱ����Ҫ���
//     StrBlobPtr ret = *this;
//     ++*this;    //��ǰ�ƶ�һ��Ԫ�أ�ǰ��++��Ҫ����������Ч��
//     return ret; //����֮ǰ��¼��״̬
// }
// //�����Լ�
// StrBlobPtr StrBlobPtr::operator++(int)
// {
//     //�˴���������Ч��,����ǣ�Ƶݼ�����ʱ����Ҫ���
//     StrBlobPtr ret = *this;
//     --*this;
//     return ret;
// }
//��Ϊ����Ľ������ͷ�

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
//	//����1
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
//	////����2
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
// //����vectorָ��
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
//     cout<<"���������ݣ�";
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
//		//����ָ������delete
//		shared_ptr<int> p1;
//
//		shared_ptr<int> p2(new int(33));
//		//shared_ptr<vector<int>>p3 = new vector<int>;//���󣬲��ܽ�����ָ����ʽ��ת��������ָ��
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
//     //������Ա�͹��캯���Ķ��壬��ǰ
//     // ��ϳɵĿ���
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
//ostream  &operator <<(ostream&out, const Complex& com)//��һ��������const
//{
//	out << "(" << com.real << "," << com.imag << ")" << endl;
//	return out;
//}
//int main()
//{
//	Complex com;				//��ȷ�����޲�����ʽ��
//	//Complex com();		//������ʽ;
//	//Complex com(3, 4);
//	cout << com << endl;
//	while (1);
//	return 0;
//}

//���Էŵ���vs code ��2020.04.18���������Ϻ�������
/* 
#include<iostream>
int main()
{
    std::cout<<"Hello World"<<std::endl;
    std::system("pause");
    return 0;
} */

//����16��ģ���뷺�ͱ�̵�ѧϰ

////p578
////���庯��ģ��
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
//     //����������ʵ�����Ĳ������������int����ʵ��
//     cout << compare(1, 0) << endl;
//     //vector����
//     vector<int>vec1{1,2,4};
//     vector<int>vec2{1,2,3};
//     cout<<"vector: "<<compare(vec1,vec2);
//     return 0;
// }

// //p 584 ��ģ��
// #include<vector>
// template<typename T>class Blob
// {
// public:
// typedef T value_type;
// typedef typename std::vector<T>::size_type size_type;
// //���캯��
// Blob();
// Blob(std::initializer_list<T> i1);
// //Blob�е�Ԫ����Ŀ
// size_type size() const{return data->size();}
// bool empty()const{return data->empty();}
// //��Ӻ�ɾ��Ԫ��
// void push_back(const T&t){data->empty();}
// //�ƶ��汾���μ�13.6.3��
// void push_back(T &&t){data->push_back(std::move());}
// void pop_back();
// //Ԫ�ط���
// T& back();
// T& operator[](size_type i);
// private:
//     /* data */
//     std::shared_ptr<std::vector<T>> data;
// // ��data[i]��Ч�����׳�msg
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
//     int _Bed=3;//���»��߽�����д��ĸ��ͷ����
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
//     //            ����ѭ������             ||
//     //======================================
//     //��Χfor���
//     //for(auto &c:a)
//     //c=toupper(c);
//     //�����±�ѭ��
//     //for(decltype(a.size()) index=0;index!=a.size()&&!isspace(a[index]);++index)
//     //a[index]=toupper(a[index]);
//     // ���õ�����
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
//     for(char &c:s)//�˴�char����auto������
//     c='X';//��������
//     //c="X";//���д������ַ������ַ���
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

//     //��������ŵ�������
//     for(decltype(ivec.size()) it=0;it!=ivec.size()-1;++it)
//     cout<<ivec[it]+ivec[it+1]<<endl;
//     //�����һ�������һ���ͣ���������
//     for(decltype(ivec.size()) it=0;it!=ivec.size()&&(it!=ivec.size()/2);++it)
//     cout<<ivec[it]+ivec[ivec.size()-1-it]<<endl;
//     return 0;

// }

// //p135 ������ʽ��ʹ�����������,���в��ˣ�������
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
//     //ΪSales-data��ķǳ�Ա������������Ԫ����
//     //Sales_data�ķǳ�Ա����
//     friend Sales_data add(const Sales_data &, const Sales_data &);
//     friend std::ostream &print(std::ostream &, const Sales_data &);
//     friend std::istream &read(std::istream, Sales_data &);
//     friend Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs);
//     friend bool operator==(const Sales_data &, const Sales_data &);
//     friend bool operator!=(const Sales_data &, const Sales_data &);
//     Sales_data &operator+=(const Sales_data &rhs);

// public: //public�Ǳ����
//     friend ostream &operator<<(ostream &, const Sales_data &);

//     friend istream &operator>>(istream &, const Sales_data &);
//     /* data */
//     Sales_data() = default;
//     Sales_data(const std::string &s) : bookNo(s) {}
//     Sales_data(const std::&s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}
//     Sales_data(std::istream &);
//     //�³�Ա������Sale_data�Ķ������
//     std::string isbn() const { return bookNo; }
//     Sales_data &combine(const Sales_data);

// private:
//     double
//     avg_price() const
//     {
//         return units_sold ? revenue / units_sold : 0;
//     };
//     //���ݳ�Ա��2.6.1��
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
// //2020.05.1��һ���ڴ��
// //���巵��this����ĺ���
// Sales_data &Sales_data::combine(const Sales_data &rhs)
// {
//     units_sold += rhs.units_sold;
//     revenue += rhs.revenue;
//     return *this; //���ص��øú����Ķ���
// }
// //��ĸ�������
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
// //����add����
// Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
// {
//     Sales_data sum = lhs; //��lhs�����ݳ�Ա������sun
//     sum.combine(rhs);
//     return sum;
// }
// //���ⶨ��Ĺ��캯��
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
//     double price; //����Ҫ��ʼ������Ϊ���ǽ��ȶ������ݵ�price��֮���ʹ����
//     is >> item.bookNo >> item.units_sold >> price;
//     if (is)
//         item.revenue = item.units_sold * price;
//     else
//         item = Sales_data(); //����ʧ�ܣ����󱻸���Ĭ�ϵ�״̬
//     return is;
// }
// Sales_data operator+
// { // ����Ԫ���� ����ģ���Ϊ���ص�ֵ����߶����޹أ���һ����ֵ
//     Sales_data sum = lhs;
//     sum += rhs;
//     return sum;
// }
// //�����������ж�
// bool operator==(const Sales_data &lhs, const Sales_data &rhs)
// {
//     return lhs.isbn() == rhs.isbn() &&
//            lhs.units_sold == rhs.units_sold &&
//            lhs.revenue == rhs.revenue;
// }
// //���岻�� p497
// bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
// {
//     return !(lhs = rhs);
// }
// //+=
// Sales_data &Sales_data::operator+=(const Sales_data &rhs)
// {
//     units_sold += rhs.units_sold;
//     revenue += rhs.revenue;
//     return *this;
// }
// //p627 hash���������汾
// //��std�����ռ䣬�Ա�������std::hash
// namespace std
// {
// template <> //�������ڶ���һ���������汾��ģ�����ΪSales_data
// struct hasn<Sales_data>
// {
//     //����ɢ��һ���������������ͱ���Ҫ��������leixing
//     typedef size_t resul_type;
//     typedef Sales_data argument_type; //Ĭ������£���������Ҫ==
//     size_t operator()(const Sales_data &s) const;
//     //���ǵ���ʹ�úϳɵĿ������Ƴ�Ա��Ĭ�Ϲ��캯��
// };
// size_t
// hash<Sales_data>::operator()(const Sales_data &s) const
// {
//     return hasn<string>()(s.bookNo) ^
//            hash<unsigned>()(s.units_sold) ^
//            hash<double>()(s.revenue);
// }
// } // namespace std

// //����Screen��
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
// // ����move����
// inline
// Screen &Screen::move(pos r,pos c)
// {
//     pos row=r*width;        //�����е�λ��
//     cursor =row+c;          //�����ڽ�����ƶ���ָ������
//     return *this;           //����ֵ����ʽ���ض���
// }
// char Screen::get(pos r,pos c)const{
//     pos row =r*width;       //�����е�λ��
//     return contents[row+c]; //���ظ����е��ַ�
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

// //io��
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
//         PersonInfo info; //��������
//         istringstream record(line);
//         record >> info.name;
//         while (record >> word)
//             info.phones.push_back(word);
//         people.push_back(info);
//     }

//     //ʹ��ostringstream
//     //ȱ��valid��fomatted����
//     for (const auto &entry : people)
//         ostringstream formatted, badNums; //ÿ��ѭ���������Ķ���
//     for (const auto &nums : entry.phones)
//     { //��ÿ����
//         if (!valid(nums))
//         {
//             badNums << " " << nums; //�������ַ�����ʽ����badNums
//         }
//         else
//             //����ʽ�����ַ���д��formatted
//             formatted << " " << format(nums);
//     }
//     if(badNums.str().empty())   //û�д������
//     cout<<entry.name<<" "         //��ӡ����
//     <<formatted.str()<<endl;    // �͸�ʽ�� ��
//     else
//     cerr<<"input error:"<<entry.name
//     <<"invalid number(s)"<<badNums.str()<<endl;

//     return 0;
// }

// // ��̬�ڴ�
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

// //p405 StrBlob��
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
//     //��Ӻ�ɾ��Ԫ��
//     void push_back(const std::string &t) { data->push_back(t); }
//     void pop_back();
//     // Ԫ�ط���
//     std::string &front();
//     std::string &back();

// private:
//     std::shared_ptr<std::vector<std::string>> data;
//     //���data[i]���Ϸ����׳�һ���쳣
//     void check(size_type i, const std::string &msg) const;
// };

// //Ԫ�ع��캯��
// StrBlob ::StrBlob() : data(make_shared<vector<string>>()) {}
// StrBlob::StrBlob(initializer_list<string> i1) : data(make_shared<vector<string>>(i1)) {}
// //Ԫ�ط��ʹ��캯��
// void StrBlob::check(size_type i, const string &msg) const
// {
//     if (i >= data->size())
//         throw out_of_range(msg);
// }

// string &StrBlob::front()
// {
//     //���fontΪ�գ�check���׳�һ���쳣
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
//     allocator<string> alloc;          //���Է���strin��allocator����
//     auto const p = alloc.allocate(n); //����n��δ��ʼ����string
//     auto q = p;
//     alloc.construct(q++);
//     alloc.construct(q++, 10, 'c');
//     cout<<"3rrr"<<endl;
//      return 0;
// }

// #include <string>
// //p 441�ϳɿ������캯��
// class Sales_data
// {

// public:
//     //������Ա�Ķ�����ǰ
//     // ��ϳɵĿ������캯���ȼ۵Ŀ������캯��������
//     Sales_data(const Sales_data &);

// private:
//     std::string bookNo;
//     int units_sold = 0;
//     double revenue = 0.0;
// };
// Sales_data::Sales_data(const Sales_data &orig) : bookNo(orig.bookNo), units_sold(orig.units_sold), revenue(orig.revenue) {}

// //p 453��ֵ�汾��HasPtr����Ϊ��ֵ����
// #include <string>
// #include<iostream>
// using namespace std;
// class HasPtr
// {
// public:
//     HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
//     //��psָ���string��ÿ��HasPtr�������Լ��Ŀ���
//     HasPtr(const HasPtr &p) : ps(new std::string(*p.ps)), i(p.i) {}
//     HasPtr &operator=(const HasPtr &);
//     ~HasPtr() { delete ps; }

// private:
//     std::string *ps;
//     int i;
// };
// HasPtr &HasPtr::operator=(const HasPtr &rhs)
// {
//     auto newp = new string(*rhs.ps); //�����ײ�string������string�����ڱ�ʾps��ָ�Ķ���
//     delete ps;                       //�ͷž��ڴ�
//     ps = newp;                       // ���Ҳ�������󿽱����ݵ�������
//     i = rhs.i;
//     return *this; //���ر�����
// }

// //p455 ��Ϊ��ָ�����
// //p456 ����һ��ʹ�����ü�������
// #include <string>
// using namespace std;
// class HasPtr
// {
// public:
//     //���캯�������µ�string���µļ�����������������Ϊ1
//     HasPtr(const string &s = std::string()) : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
//     //��걱����캯�����������������ݳ�Ա��������������
//     HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) { ++*use; }
//     HasPtr &operator=(const HasPtr &);
//     // �����Լ���swap����
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
//         delete ps;  //�ͷ�string �ڴ�
//         delete use; //�ͷż������ڴ�
//     }
// }

// HasPtr &HasPtr::operator=(const HasPtr &rhs)
// {
//     ++*rhs.use; //�����Ҳ������������ü���
//     if (--*use == 0)
//     {               //Ȼ��ݼ�����������ü���
//         delete ps;  //����û�������û�
//         delete use; //�ͷű��������ĳ�Ա
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
// public:
//     StrVec() : //allocator ��Ա����Ĭ�ϳ�ʼ��
//                elements(nullptr), first_free(nullptr), cap(nullptr)
//     {
//     }
//     StrVec(const StrVec &); //�������캯��
//     StrVec &operator=(std::initializer_list<std::string>);
//     StrVec &operator=(const StrVec &);   //������ֵ�����
//     ~StrVec();                           //��������
//     void push_back(const std::string &); //����Ԫ��
//     void push_back(std::string &&);//�ƶ�Ԫ��
//     size_t size() const { return first_free - elements; }
//     size_t capacity() const { return cap - elements; }
//     std::string *begin() const { return elements; }
//     std::string *end() const { return first_free; }
//     //�±������p501
//     std::string &operator[](size_t n)
//     {
//         return elements[n];
//     };
//     const string &operator[](size_t n) const { return elements[n]; }

// private:
//     static std::allocator<std::string> alloc; //����Ԫ��
//     //�����Ԫ�صĺ�����ʹ��
//     void chk_n_alloc()
//     {
//         if (size() == capacity())
//             reallocate();
//     }
//     //���ߺ��������������캯������ֵ�����������������ʹ��
//     std::pair<std::string *, std::string *>
//     alloc_n_copy(const std::string *, const std::string *);
//     void free();             //����Ԫ�ز��ͷ��ڴ�
//     void reallocate();       //��ø����ڴ沢��������Ԫ��
//     std::string *elements;   // ָ��������Ԫ�ص�ָ��
//     std::string *first_free; //ָ�������һ������Ԫ�ص�ָ��
//     std::string *cap;        //ָ������β��λ�õ�ָ��
// };
// //ʹ��construct
// void StrVec::push_back(const std::string &s)
// {
//     chk_n_alloc(); //ȷ���пռ�����Ԫ��
//     //��first_freeָ���Ԫ���й���s�ĸ���
//     alloc.construct(f irst_free++, s);
// }

// void StrVec::push_back(string &&s)
// {
//     chk_n_alloc();//�����Ҫ�Ļ�ΪStrVec���·����ڴ�
//     alloc.construct(first_free++,std::move(s));
// }
// pair<string *, string *>
// StrVec::alloc_n_copy(const string *b, const string *e)
// {
//     //����ռ䱣�������Χ�е�Ԫ��
//     auto data = alloc.allocate(e - b);
//     //��ʼ��������һ��pair����pair��data��uninitialized_copy�ķ���ֵ����
//     return {data, uninitialized_copy(b, e, data)};
// }
// //free��Ա
// void StrVec::free()
// {
//     //���ܴ��ݸ�deallocateһ����ָ�룬���elementsΪ0������ʲôҲ����
//     if (elements)
//     {
//         //�������پ�Ԫ��
//         for (auto p = first_free; p != elements; /*��ѭ������*/)
//             alloc.destroy(--p); //p������--
//         alloc.deallocate(elements, cap - elements);
//     }
// }

// //�������Ƴ�Ա
// StrVec::StrVec(const StrVec &s)
// {
//     //����alloc_n_copy ����ռ���������s��һ�����Ԫ��
//     auto newdata = alloc_n_copy(s.begin(), s.end());
//     elements = newdata.first;
//     first_free = cap = newdata.second;
// }
// // ��������free
// StrVec::~StrVec() { free(); }
// //��ֵ����
// StrVec &StrVec::operator=(const StrVec &rhs)
// {
//     //����alloc_n_copy�����ڴ棬��С��rhs��Ԫ��ռ�ÿռ�һ����
//     auto data = alloc_n_copy(rhs.begin(), rhs.end());
//     free();
//     elements = data.first;
//     first_free = cap = data.second;
//     return *this;
// }

// //reallocate��Ա
// void StrVec::reallocate()
// {
//     //���ǽ����䵱ǰ��С�������ڴ�ռ�
//     auto newcapacity = size() ? 2 * size() : 1;
//     //�������ڴ�
//     auto newdata = alloc.allocate(newcapacity);
//     //�����ݴӾ��ڴ��ƶ������ڴ�
//     auto dest = newdata;  // ָ������������һ������λ��
//     auto elem = elements; //ָ�����������һ��Ԫ��
//     for (size_t i = 0; i != size(); ++i)
//         alloc.construct(dest++, std::move(*elem++));
//     free(); //һ�������ƶ���Ԫ�ؾ��ͷž��ڴ�ռ�
//     //�������ǵ����ݽṹ��ִ����Ԫ��
//     elements = newdata;
//     first_free = dest;
//     cap = elements + newcapacity;
// }

// //�ƶ����캯��
// StrVec::StrVec(StrVec &&s) noexcept //�ƶ�������Ӧ���׳��κ��쳣
//     //��Ա��ʼ�����ӹ�s�е���Դ
//     : elements(s.elements), first_free(s.first_free), cap(s.cap)
// {
//     //��s����������״̬-�����������������ǰ�ȫ��
//     s.elements = s.first_free = s.cap = nullptr;
// }
// //
// StrVec &StrVec::operator=(initializer_list<stirng> i1)
// {
//     //alloc_n_copy�����ڴ�ռ䲢�Ӹ�����Χ�ڿ���Ԫ��
//     auto data = alloc_n_copy(i1.begin(), i1.end());
//     free();
//     elements = data.first;
//     first_free = cap = data.second;

//     return *this;
// }
// //�ƶ������������p474�����ƶ�����ĺ������������𣿣�
// StrVec &StrVec::operator=(StrVec &&rhs) noexcept
// {
//     //ֱ�Ӽ���Ը�ֵ
//     if (this != &rhs)
//     {
//         free();                  //�ͷ�����Ԫ�أ�
//         elements = rhs.elements; //��rhs�ӹ���Դ
//         first_free = rhs.first_free;
//         cap = rhs.cap;
//         //��rhs���ڿ�����״̬
//         rhs.elements = rhs.first_free = rhs.cap = nullptr;
//     }
//     return *this;
// }

// //p 494 ��������
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

// //p514����ר�������
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

// //p528 ������
// #include <string>
// using namespace std;
// #include <set>
// class Quote
// {
// public:
//     Quote() = default; //����=default
//     Quote(const string &book, double sales_price) : bookNo(book), price(sales_price) {}
//     string isbn() const { return bookNo; }
//     //���ظ����������鼮�������ܶ�
//     //�����ฺ���д��ʹ�ò�ͬ���ۿۼ����㷨
//     virtual double net_price(size_t n) const { return n * price; }
//     virtual ~Quote() = default; //�������������ж�̬��,
//     //���麯�����ص�ǰ�����һ�ݶ�̬����Ŀ���
//     //��Щ��Ա�޶����������޶���13.6.3��

//     virtual Quote *clone() const & { return new Quote(*this); }
//     virtual Quote *clone() && { return new Quote(std::move(*this)); }

// private:
//     string bookNo;

// protected:
//     double price = 0.0;
// };

// //p541 ���崿�����
// //���ڱ����ۿ�ֵ�͹��������࣬��������ʹ����Щ���ݿ���ʵ�ֲ�ͬ�ļ۸����
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
//     size_t quantity = 0;   //�ۿ����õĹ�����
//     double discount = 0.0; //��ʾ�ۿ۵�С��ֵ
// };

// class Bulk_quote final : public Disc_quote //��final��ʾ��ϣ��������̳д���
// {                                          //Bulk_quote �̳���
// public:
//     Bulk_quote() = default;
//     Bulk_quote(const string &book, double price, size_t qty��double disc) : Disc_quote(book, qty, double disc) {}
//     double print_total(ostream &os, const Quote &item, size_t n);
//     //���ǻ���ĺ����汾��ʵ�ֻ��ڴ���������ۿ�zhengce;
//     double net_price(size_t) const override;
//     Bulk_quote *clone() const & { return new Bulk_quote(*this); }
//     Bulk_quote *clone() && {return new Bulk_quote(std::move(*this); }

// private:
//     size_t min_qty = 0;    //�����ۿ����ߵ���͹�����
//     double discount = 0.0; //��С����ʾ���ۿ۶�
// };

// //������ʹ�û���ĳ�Ա
// //����ﵽ�˹����鼮��ĳ���������ֵ���Ϳ��������ۿ�
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
//     //���ݴ���item�βεĵĶ������͵���Quote::net_price
//     //����bulk_quote::net_price
//     double ret = item.net_price(n);
//     os << "ISBN:" << item.isbn() //����Quote��isbn
//        << "#sold:" << n << "total due:" << ret << endl;
//     return ret;
// }

// //p559 ��дbasket��
// class Basket
// {
// public:
//     //Basket ʹ�úϳɵ�Ĭ�Ϲ��캯���Ϳ������Ƴ�Ա
//     void add_iem(const std::shared_ptr<Quote> &sale)
//     {
//         items.insert(sale);
//     }
//     //��ӡÿ������ܼۺ͹���������������ܼ�
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
//     //�ú������ڱȽ�shared_ptr��multiset��Ա���õ���
//     static bool compare(const std::shared_ptr<Quote> &lhs,
//                         const std::shared_ptr<Quote> &rhs)
//     {
//         return lhs->isbn() < rhs->isbn();
//     }
//     //multiset����������,����compare��Ա����
//     std::multiset<std::shared_ptr<Quote>, decltype(compare) *> items{compare};
// };
// double Basket::total_receipt(ostream &os) const
// {
//     double sum = 0.0; //����ʵʱ������ļ۸�
//     //iter ָ��ISBN��ͬ��һ��Ԫ���еĵ�һ��
//     //upper_bound����һ�����������õ�����ָ������Ԫ�ص�β��λ��
//     for (auto iter = items.cbegin();
//          iter != items.cend();
//          iter = items.upper_bound(*iter))
//     {
//         //����֪���ڵ�ǰ��Basket��������һ���ùؼ��ֵ�Ԫ��
//         //��ӡ���鼮��Ӧ����Ŀ
//         sum += print_total(os, **iter, items.cout(*iter));
//     }
//     os << "Total sale:" << sum << endl; //��ӡ���ռ۸�
//     return sum;
// }

// // p579 ģ��
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

// // ��ģ��p584
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
//     //���캯��
//     Blob();
//     Blob(std::initializer_list<T> i1);
//     //Blob�е�Ԫ����Ŀ
//     size_type size() const { return data->size(); }
//     bool empty() const { return data->empty(); }
//     //ɾ�������Ԫ��
//     void push_back(T &&t) { data->push_back(std::move(t)); }
//     void pop_back();
//     //Ԫ�ط���
//     T &back();
//     T &operator[](size_type i); //
//     T &front();
//     // T &operator[](size_t i);

// private:
//     std::shared_ptr<std::vector<T>> data;
//     //��data[i]��Ч�����׳�msg
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
//     //���vectorΪ�գ�check���׳�һ���쳣
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
//     //���i̫��check���׳��쳣����ֹ����һ�������ڵ�Ԫ��
//     check(i, "subscript out of range");
//     return (*data)[i];
// }

// //����ͼ����һ�������ڵ�Ԫ�أ�BlobPtr���׳�һ���쳣
// template <typename T>
// class BlobPtr
// {
// public:
//     BlobPtr() : curr(0) {}
//     BlobPtr(Blob<T> &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
//     T &operator*() const
//     {
//         auto p = check(curr, "dereference past end");
//         return (*p)[curr]; //(*p)Ϊ������ָ���vector
//     }
//     // �����͵ݼ�
//     BlobPtr &operator++(); //
//     BlobPtr &operator--();

// private:
//     //�����ɹ�,check����һ��ָ��vector��shared_ptr
//     std::shared_ptr<std::vector<T>>
//     check(std::size_t, const std::string &) const;
//     //����һ��weak_ptr,��ʾ�ײ�vector���ܱ�����
//     std::weak_ptr<std::vector<T>> wptr;
//     std::size_t curr; //�����еĵ�ǰλ��
// };

// //���ã�����/�ݼ����󵫷���ԭֵ
// template <typename T>
// BlobPtr<T> BlobPtr<T>::operator++(int)
// {
//     //�˴������飬����ǰ�õ���ʱ����м��
//     BlobPtr ret = *this; //���浱ǰֵ
//     ++*this;             //�ƽ�һ��Ԫ�أ�ǰ��++�������Ƿ�Ϸ�
//     return ret;          //���ر����״̬
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

//p460 ��������ʵ��
////2020.05��һ���ڽ���

//2020.05.06 ģ���뷺�ͱ��
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
//     typedef typename std::vector<T>::size_type size_type; //Ϊʲô��typename����
//     //���캯��
//     Blob();
//     Blob(std::initializer_list<T> i1);
//     //Blob�е�Ԫ����Ŀ
//     size_type size() const { return data->size(); }
//     //��Ӻ�ɾ��Ԫ��
//     void push_back(const T &t) { data->push_back(t); }
//     //�ƶ��汾
//     void push_back(const T &&t) { data->push_back(std::move(t)); }
//     void pop_back();
//     //Ԫ�ط���
//     T &back();
//     T &operator[](size_type i); //
// private:
//     std::shared_ptr<std::vector<T>> data;
//     //��data[i]��Ч�����׳�msg
//     void check(size_type i, const std::string &msg) const;
// };
// //����check
// template <typename T>
// void Blob<T>::check(size_type i, const string &msg) const
// {
//     if (i >= data->size())
//         throw std::out_of_range(msg);
// }
// //�±�
// template <typename T>
// T &Blob<T>::operator[](size_type i)
// {
//     //���i̫��check���׳��쳣����ֹ����һ�������ڵ�Ԫ��
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
// //Blob���캯��
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

// //��������ʵ�� 13.4 p460
// #include <string>
// #include <set>
// using namespace std;
// class Message;
// class Folder
// {
//     friend class Message;
// public:
//     void addMsg(Message &);
//     void remMsg(Message &);
// };
// void Message::addMsg(Message & m)
// {

// }
// void Message::remMsg(Message & m)
// {

// }

// class Message
// {
//     friend class Folder;

// public:

//     //folders ����ʽ��ʼ��Ϊ�ռ���
//     explicit Message(const std::string &str = "") : contents(str) {}
//     //�������Ƴ�Ա����������ָ��Message��ָ��
//     Message(const Message &);            //�������캯��
//     Message &operator=(const Message &); //������ֵ
//     ~Message();
//     //�Ӹ���folder�����ɾ���ı�
//     void save(Folder &);
//     void remove(Folder &);

// private:
//     std::string contents;       //ʵ����Ϣ�ı�
//     std::set<Folder *> folders; //������Message��Folder
//     //�������캯����������ֵ�����������������ʹ�õĵĹ��ߺ���
//     //����Message��ӵ�ָ�������Folder��ȥ
//     void add_to_Folders(const Message &);
//     //��folders�е�ÿ��Folder��ɾ����Message
//     void remove_from_Folders();
// };
// //save ��remove ��Ա
// void Message::save(Folder &f)
// {
//     folders.insert(&f); //������FOlder��ӵ����ǵ�Folder�б���
//     f.addMsg(this);
// }
// void Message::remove(Folder &f)
// {
//     folders.erase(&f); //������Folder�����ǵ�Foler�б���ɾ��
//     f.remMsg(this);    //����Message��f��Message������ɾ��
// }
// //message��Ŀ������Ƴ�Ա
// //����Message��ӵ�ָ��m��Folder��
// void Message::add_to_Folders(const Message &m)
// {
//     for (auto f : m.folders) //��ÿ������m��folder
//         f->addMsg(this);     //���Folder���һ��ָ��Message��ָ��
// }
// //message�Ŀ������캯������������������ݳ�Ա
// Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
// {
//     add_to_Folders(m); //������Ϣ��ӵ�ָ��m��Folder��
// }
// //message ����������
// //�Ӷ�Ӧ��Folder��ɾ����Message
// void Message:: remove_from_Folders()
// {
//     for(auto f:folders)//���folders��ÿ��ָ��
//     f->remMsg(this);//�Ӹ�Folder��ɾ����Message
// }
// //��������
// Message::~Message()
// {
//     remove_from_Folders();
// }

// Message& Message::operator=(const Message &rhs)
// {
//     //ͨ����ɾ��ָ���ٲ��������������Ը�ֵ���
//     remove_from_Folders();//��������folder
//     contents=rhs.contents;
//     folders=rhs.folders;
//     add_to_Folders(rhs);
//     return *this;
// }

// void swap(Message &lhs,Message &rhs)
// {
//     using std::swap;//�ڱ������ϸ���˵����Ҫ��������һ����ϰ��
//     //��ÿ����Ϣ��ָ�������ԭ�������ڵ�Folder��ɾ��
//     for(auto f:lhs.folders)
//     f->remMsg(&lhs);
//     for(auto f:rhs.folders)
//     f->remMsg(&rhs);
//     //����contens��folderָ��set
//     swap(lhs.folders,rhs.folders);//ʹ��swap(set&,set&)
//     swap(lhs.contents,rhs.contens);//swap(string&,string&)
//     //��ÿ��Message��ָ����ӵ����ģ��£�Folder��
//     for(auto f:lhs.folders)
//     f->addMsg(&lhs);
//     for(auto f:rhs.folders)
//     f->addMsg(&rhs);
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
//     vstr.push_back("asdfdasf������2020��05��13�ţ��������ʣ���Ҫ����Ŭ��ѽ��ԽŬ��Խ���ˣ�");
//     vstr.push_back("");
//     vstr.push_back("���ںź��ܼ���һ����");
//     //ע�⣺���������±�Ĳ�ͬ
//     for (vector<string>::iterator it = vstr.begin(); it != vstr.end() && !it->empty(); ++it)
//         for (string::iterator it1 = (*it).begin(); it1 != (*it).end(); ++it1)
//          //for (string::iterator it1 = 0; it1 != (*it).end(); ++it1) //����д��������ʽ
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
//     cout<<"����1:��Χfor"<<endl;
//     for(auto & i:ivec)
//     {
//         i*=i;
//         cout<<i<<"\n";
//     }
//     cout<<"����2:�±�"<<endl;
//     for(vector<int>::size_type it=0;it!=ivec.size();++it)
//     {
//         ivec[it]*=ivec[it];
//         cout<<ivec[it]<<"\n";
//     }
//     cout<<"����3��iterator"<<endl;
//     for(vector<int>::iterator it=ivec.begin();it!=ivec.end();++it)
//     {
//         *it*=*it;
//         cout<<*it<<"\n";
//     }
//      return 0;
// }

//p 100 ��������
//text �����������
// //beg ��end��ʾ���������ķ�Χ
// #include <vector>
// using std::vector;
// int main()
// {
//     int sought = 3;
//     vector<int> text = {1, 2, 3, 4, 5, 6, 7, 8};
//     auto beg = text.begin(), end = text.end();
//     auto mid = text.begin() + (end - beg) / 2; //��ʼ״̬�м��
//     //��Ԫ����δ��鲢�����ǻ�û���ҵ�soughtʱִ��ѭ��
//     while (mid != end && *mid != sought)
//     {
//         if (sought < *mid)
//             end = mid;
//         else
//             beg = mid + 1;
//         mid = beg + (end - beg) / 2;
//     }
// }

//p 233 7.5
#include <string>
#include <iostream>
using std::string;
class Person
{
public:
    string name;
    string address;
    string re_name() const { return name; }
    string re_add() const { return address; }
    Person() = default; //Ĭ�Ϲ���
    Person(const string &n, const string &add) : name(n), address(add) {}
    person(istream &);
    //friend ostream & print(ostream &os,const  Person& p);
};
//��ȡ��ʽ�Ĺ���
Person::Person(istream &is)
{
    is >> name >> address;
}
istream &read(istream &ia, Person &p)
{
    ia >> p.name >> p.address;
    return is;
}
ostream &print(ostream &os, const Person &p)
{
    os << p.name << p.address;
    return os;
}
int main()
{
    Person p;
}


// 2020.05.13����