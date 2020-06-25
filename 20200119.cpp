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
//	//������Ĭ�ϲ����Ĺ��캯�����ò�����ʼ���������ݳ�Ա���г�ʼ��
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
//	std::cout << "����������:" << pig.name << std::endl;
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
//	std::cout << "����������:" << pig.name << std::endl;
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
//		deque1.push_back(buf);//���׼����������Ԫ��
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
//	//����24��Ԫ��
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
//	auto it = back_inserter(vec);//ͨ������ֵ�ὫԪ�����ӵ�vec��
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
// #include <vector>
// #include <string>
// #include <memory>
// using namespace std;
// class StrBlob
// {
//     friend bool operator==(const StrBlob &lhs, const StrBlob &rhs);
//     friend bool operator!=(const StrBlob &lhs, const StrBlob &rhs);
//     //��Ҫ�Ƚ�ָ����ָ��v'e'co't'r�Ĵ�С����
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
//     //����ɾ��Ԫ��
//     void push_back(const std::string &t) { data->push_back(t); }
//     void pop_back();
//     std::string &operator[](std::size_t n) { return data[n]; }
//     const std::string &operator[](std::size_t n) const { return data[n]; }
//     //Ԫ�ط���
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
//     //���vectorΪ�գ�check���׳�һ���쳣
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
//     return lhs.data == rhs.data; //��Ӧ����*
// }
// bool operator!=(const StrBlob &lhs, const StrBlob &rhs)
// {
//     return !(lhs == rhs);
// }
// bool operator<(const StrBlob &lhs, const StrBlob &rhs)
// {
//     //�Ƚ�ÿһ��ָ����ָ���ֵ�Ĵ�С�������Ǳ������ʺ���С�ڣ�
//     return *lhs.data < *rhs.data;
// }

// //���ڷ���һ��������Ԫ�صĳ��ԣ�StrBlobPtr���׳�һ���쳣
// #include <memory>
// using namespace std;
// class StrBlobPtr
// {
//     friend bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs);
//     friend bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs);

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
//     string *operator->() const
//     { //��ʵ�ʹ���ί�и��������������
//         return &this->operator*();
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
// StrBlobPtr &StrBlobPtr::operator++(int)
// {
//     //�˴���������Ч�ԣ�����ǣ�Ƶ�������ʱ����Ҫ���
//     StrBlobPtr ret = *this;
//     ++*this;    //��ǰ�ƶ�һ��Ԫ�أ�ǰ��++��Ҫ����������Ч��
//     return ret; //����֮ǰ��¼��״̬kkk
// }
// //�����Լ�
// StrBlobPtr &StrBlobPtr::operator++(int)
// {
//     //�˴���������Ч��,����ǣ�Ƶݼ�����ʱ����Ҫ���
//     StrBlobPtr ret = *this;
//     --*this;
//     return ret;
// }
// bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
// {
//     auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
//     //����ָ�붼Ϊ�գ���ָ����ͬ��vector��currָ����ͬԪ��ʱ����ȣ����򣬲���
//     if (l == r)
//         return (!r || lhs.curr == rhs.curr);
//     else
//         return false;
// }
// //��Ϊ����Ľ������ͷ�

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
// //���Ӻ�ɾ��Ԫ��
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

// //p135 �������ʽ��ʹ�����������,���в��ˣ�������
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
// Sales_data operator+(const Sales_data &lhs,const Sales_data &rhs)
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
//     return !(lhs == rhs);
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
//     //���Ӻ�ɾ��Ԫ��
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
// #include <iostream>
// using namespace std;
// class HasPtr
// {
// public:
//     HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
//     //��psָ���string��ÿ��HasPtr�������Լ��Ŀ���
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
//     auto newp = new string(*rhs.ps); //�����ײ�string������string�����ڱ�ʾps��ָ�Ķ���
//     delete ps;                       //�ͷž��ڴ棬ps�ǿ���ָ��
//     ps = newp;                       // ���Ҳ�������󿽱����ݵ�������
//     i = rhs.i;
//     return *this; //���ر�����
// }
// inline void swap(HasPtr &lhs, HasPtr &rhs)
// {
//     using std::swap;
//     swap(lhs.ps, rhs.ps);
//     swap(lhs.i, rhs.i);
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
//     friend void swap(HasPtr &, HasPtr &);
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
// inline void swap(HasPtr &lhs, HasPtr &rhs)
// {
//     using std::swap;
//     // //     swap(lhs.ps,rhs.ps);
//     swap(lhs.i, lhs.i);
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
//     StrVec() : //allocator ��Ա����Ĭ�ϳ�ʼ��
//                elements(nullptr), first_free(nullptr), cap(nullptr)
//     {
//     }
//     StrVec(const StrVec &); //�������캯��
//     StrVec &operator=(std::initializer_list<std::string>);
//     StrVec &operator=(const StrVec &);   //������ֵ�����
//     ~StrVec();                           //��������
//     void push_back(const std::string &); //����Ԫ��
//     void push_back(std::string &&);      //�ƶ�Ԫ��
//     size_t size() const { return first_free - elements; }
//     void reserve(size_t &);
//     size_t capacity() const { return cap - elements; }
//     std::string *begin() const { return elements; }
//     std::string *end() const { return first_free; }
//     size_t capacity() const { return cap - elements; }
//     void resize(size_t &newsize);
//     void reserve(size_t &n);
//     //�±������p501
//     std::string &operator[](size_t n)
//     {
//         return elements[n];
//     };
//     const string &operator[](size_t n) const { return elements[n]; }

// private:
//     static std::allocator<std::string> alloc; //����Ԫ��
//     //������Ԫ�صĺ�����ʹ��
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
//     alloc.construct(first_free++, s);
// }

// void StrVec::push_back(string &&s)
// {
//     chk_n_alloc(); //�����Ҫ�Ļ�ΪStrVec���·����ڴ�
//     alloc.construct(first_free++, std::move(s));
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
// void StrVec::reallocate()
// {
//     //���ǽ�����ǰ���������ĵ��ڴ�ռ�
//     auto newcapacity = size() ? 2 * size() : 1;
//     //�������ڴ�
//     auto newdata = alloc.allocate(newcapacity);
//     //�����ݴӾ��ڴ��ƶ������ڴ�
//     auto dest = newdata;  //ָ������������һ������λ��
//     auto elem = elements; //ָ�����������һ��Ԫ��
//     for (size_t i = 0; i != size(); ++i)
//         alloc.construct(dest++, std::move(*elem++));
//     free(); //һ�������ƶ���Ԫ�ؾ��ͷž��ڴ�ռ�
//     //�������ݽṹ��ִ����Ԫ��
//     elements = newdata;
//     first_free = dest;
//     cap = elements + newcapacity;
// }
// void StrVec::reallocate()//����2
// {
//     //�����С�����ڵ�ǰ��ģ���ڴ�ռ�
//     auto newcapacity = size() ? 2 * size() : 1;
//     auto first = alloc.allocate(newcapacity);
//     //�ƶ�Ԫ��
//     auto last = uninitialized_copy(make_move_iterator(begin()), make_move_iterator(end()), first);
//     free();
//     elements = first;
//     fir_free = last;
//     cap = elements + newcapacity;
// }
// void StrVec::reserve(size_t &size)
// {
//     //����ͬ��д������
//     if (size > capacity())
//         alloc.allocate(size);
// }
// void StrVec::resize(size_t &newsize)
// {
//     if (capacity() > newsize)
//     {
//         //����������reallocate
//         auto newcap = alloc.allocate(newsize);
//         //�����ݴӾɵ�Ǩ�Ƶ��µ�
//         auto dest = newcap;
//         auto elem = elements;
//         for (size_t i = 0; i != size(); ++i)
//             alloc.construct(dest++, std::move(*elem++));
//         free(); //�ͷž��ڴ�
//         //����ʣ���
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
//     //ɾ��������Ԫ��
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
//     //���Ӻ�ɾ��Ԫ��
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
//         add_to_Messages(f);//��folder���ӵ�������message��folders��ȥ
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
//         (*msgs.begin())->remove(*this); //�����folder��������message��ɾ��
// }
// Folder& Folder::operator=(const Folder &f){
//     remove_from_Msgs();//��ÿ��message��ɾ����folder
//     msgs=f.msgs;//���Ҳ�������󿽱�message����
//     add_to_Messages(f);//����folder���ӵ�ÿ����message��ȥ
//     return *this;
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
//     //�Ӹ���folder������ɾ���ı�
//     void save(Folder &);
//     void remove(Folder &);
//     void addFldr(Folder *f) { folders.insert(f); }

// private:
//     string contents;       //ʵ����Ϣ�ı�
//     set<Folder *> folders; //������Message��Folder
//     //�������캯����������ֵ�����������������ʹ�õĵĹ��ߺ���
//     //����Message���ӵ�ָ�������Folder��ȥ
//     void add_to_Folders(const Message &);
//     //��folders�е�ÿ��Folder��ɾ����Message
//     void remove_from_Folders();
// };
// //save ��remove ��Ա
// void Message::save(Folder &f)
// {
//     folders.insert(&f); //������FOlder���ӵ����ǵ�Folder�б���
//     f.addMsg(this);
// }
// void Message::remove(Folder &f)
// {
//     folders.erase(&f); //������Folder�����ǵ�Foler�б���ɾ��
//     f.remMsg(this);    //����Message��f��Message������ɾ��
// }
// //message��Ŀ������Ƴ�Ա
// //����Message���ӵ�ָ��m��Folder��
// void Message::add_to_Folders(const Message &m)
// {
//     for (auto f : m.folders) //��ÿ������m��folder
//         f->addMsg(this);     //���Folder����һ��ָ��Message��ָ��
// }
// //message�Ŀ������캯������������������ݳ�Ա
// Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
// {
//     add_to_Folders(m); //������Ϣ���ӵ�ָ��m��Folder��
// }
// //message ����������
// //�Ӷ�Ӧ��Folder��ɾ����Message
// void Message::remove_from_Folders()
// {
//     for (auto f : folders) //���folders��ÿ��ָ��
//         f->remMsg(this);   //�Ӹ�Folder��ɾ����Message
// }
// //��������
// Message::~Message()
// {
//     remove_from_Folders();
// }

// Message &Message::operator=(const Message &rhs)
// {
//     //ͨ����ɾ��ָ���ٲ��������������Ը�ֵ���
//     remove_from_Folders(); //��������folder
//     contents = rhs.contents;
//     folders = rhs.folders;
//     add_to_Folders(rhs);
//     return *this;
// }

// void swap(Message &lhs, Message &rhs)
// {
//     using std::swap; //�ڱ������ϸ���˵����Ҫ��������һ����ϰ��
//     //��ÿ����Ϣ��ָ�������ԭ�������ڵ�Folder��ɾ��
//     for (auto f : lhs.folders)
//         f->remMsg(&lhs);
//     for (auto f : rhs.folders)
//         f->remMsg(&rhs);
//     //����contens��folderָ��set
//     swap(lhs.folders, rhs.folders);  //ʹ��swap(set&,set&)
//     swap(lhs.contents, rhs.contens); //swap(string&,string&)
//     //��ÿ��Message��ָ�����ӵ����ģ��£�Folder��
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
//     Person() = default; //Ĭ�Ϲ���
//     Person(const string &n, const string &add) : name(n), address(add) {}
//     person(istream &);

//     //friend ostream & print(ostream &os,const  Person& p);
// private:
//     string name;
//     string address;
// };
// //��ȡ��ʽ�Ĺ���
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

// 2020.05.13����

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
//     { //ֱ�������ļ���������ֹͣ��ȡ
//         if (in.bad())
//             throw runtime_error("io������");
//         if (in.fail())
//         {
//             cerr << "���ݴ���������" << endl;
//             in.clear();
//             in.ignore(100, '\n');
//             continue;
//         }
//         cout << v << endl;
//     }
//     in.clear(); //����ǰ��λ
//     return in;
// }
// int main()
// {
//     cout << "������һЩ��������Ctrl+Z����" << endl;
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
//     of<<"�����ܴ�";
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
//     string line, word; //�ֱ𱣴����������һ�к͵���
//     vector<PersonInfo> people;
//     vector<string> svec;
//     istringstream record;
//     // 8.11
//     while (getline(if1, line))
//     {
//         svec.push_back(line);
//         PersonInfo info;            //����һ������˼�¼�Ķ���
//          record.str(line); //����¼�󶨵��ոն������;
//         record >> info.name;
//         while (record >> word)
//             info.phones.push_back(word); //��������
//         people.push_back(info);          //���˼�¼׷�ӵ�peopleĩβ
//     }
//     if1.close();
//     //p289 8.10
//     vector<string> s_num;
//     for (auto i : svec)
//     {
//         istringstream a(i); //�൱�ڴ��ļ�
//         string s_1;
//         while (a >> s_1)
//             s_num.push_back(s_1);
//     }
//     return 0;
// }
// // 2020.05.14����

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
//         cout << "��������ȷ�ĵ�������Χ" << endl;
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
//         cout << "��������ȷ�ĵ�������Χ" << endl;
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
//     //idou=ivec;//��Ȼ������ͬ���������Ͳ�ͬ���޷�ֱ�ӿ�����ʹ�õ���������
//     idou = vector<double>(idou.begin(), idou.end());//�ұ�������ʱ����
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
//     //auto i2 = ivec.front();//���벻ͨ��
//     //auto i2 = ivec.begin();//���벻ͨ��
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
//         prev = curr; //ǰ����������ǰ�ƽ���
//         curr++;
//     }
//     if(!inserted)
//     sflst.insert_after(prev,s2);//����β��

// }

// //p315 9.29
// #include<vector>
// using namespace std;
// int main(){
// vector<int> ivec(25,3);
// ivec.resize(100);//���ں�������75��0��
// ivec.resize(10);//ֻʣ��ǰ���3;
// return 0;
// }

// //p316 ɵ��ѭ����ɾ��ż��Ԫ�أ�����ÿ������Ԫ��
// #include <vector>
// using namespace std;
// int main()
// {

//     vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     auto iter = vi.begin(); //����begin��cbegin
//     wile(iter != vi.end())
//     {
//         if (*iter % 2)
//         {
//             iter = vi.insert(iter, *iter); //���Ƶ�ǰԪ��
//             iter += 2;                     //��ǰ�ƶ���������������ǰԪ���Լ����뵽��֮ǰ��Ԫ��
//         }
//         else
//         {
//             iter = vi.erase(iter); //ɾ��ż��Ԫ��
//             //��Ӧ����ǰ�ƶ���������iterָ������ɾ����Ԫ��֮���Ԫ��
//         }
//     }
// }

////p316 ɵ��ѭ����ɾ��ż��Ԫ�أ�����ÿ������Ԫ��
// #include <list>
// using namespace std;
// int main()
// {

//     list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     auto iter = vi.begin(); //����begin��cbegin
//     while (iter != vi.end())
//     {
//         if (*iter % 2)
//         {
//             iter = vi.insert(iter, *iter); //���Ƶ�ǰԪ��
//             ++iter ;
//             ++iter ; //list������֧��++�뵽��֮ǰ��Ԫ��
//         }
//         else
//         {
//             iter = vi.erase(iter); //ɾ��ż��Ԫ��
//             //��Ӧ����ǰ�ƶ���������iterָ������ɾ����Ԫ��֮���Ԫ��
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
//     auto prev = iflst.before_begin(); //ǰ���ڵ���Ϊ��ɾ��Ԫ�ص��������õģ�
//     auto curr = iflst.begin();        //�׽ڵ�
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
//         ++begin;//��ǰ�ƶ�begin����Ϊ�����ڴ�Ԫ��֮�����Ԫ�أ�
//         begin=ivec.insert(begin,42);//������ֵ
//         ++begin;//��ǰ�ƶ�begin,�������Ǹոռ����Ԫ��
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
//     string s1(cp);// ��const char *����stringʱ��cp��Ҫ�Կ��ַ���β
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

// //2020.05.16 ���� �����㷨
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

// //p343��������Ԫ��
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// //���Ʋ���p344
// bool isShorter(const string &s1,const string s2)
// {
//     return s1.size()<s2.size();
// }
// void elimDumps(vector<string> &words)
// {
//     //���ֵ�����words���Ա�����ظ�����
//     sort(words.begin(),words.end());
//     //unique�������뷶Χ��ʹ��ÿ������ֻ����һ��
//     //�����ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
//     auto end_unique=unique(words.begin(),words.end());
//     //ʹ����������eraseɾ���ظ�����
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

// //p349 ������biggies
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;
// void elimDumps(vector<string> &words)
// {
//     //���ֵ�����words���Ա�����ظ�����
//     sort(words.begin(), words.end());
//     //unique�������뷶Χ��ʹ��ÿ������ֻ����һ��
//     //�����ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
//     auto end_unique = unique(words.begin(), words.end());
//     //ʹ����������eraseɾ���ظ�����
//     words.erase(end_unique, words.end());
// }
// void biggies(vector<string> &words, vector<string>::size_tpe sz)
// {
//     elimDumps(words); //��words���ֵ�ѭ������ɾ���ظ�����
//     stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size(); });
//     //��ȡһ����������ָ���һ������size()>=sz��Ԫ��
//     auto wc = find_if(words.begin(), words.end(), [sz](const string &a) { return a.size() >= sz; });
//     //��������size>=sz��Ԫ�ص���Ŀ
//     auto count = words.end() - wc;
//     cout << count << " " << make_plural(count, "word", "s")
//          << " of length" << sz << " or longer" << endl;
//     //��ӡ���ȴ��ڸ���ֵ�ĵ��ʣ�ÿ�����ʺ����һ���ո�
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
// int mthan1(const vector<string> &s)//��β�÷��ز���
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
//     auto f=[&v1]() mutable -> bool {//����v1ǰ��&�Ͳ��Ӷ�����
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

// //ͳ��ÿ�������������г��ֵĴ���
// #include <map>
// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     map<string, size_t> word_count; //string ��size_t�Ŀ�map
//     string word;
//     while (cin >> word)
//         ++word_count[word];          //��ȡword�ļ������������1
//     for (const auto &w : word_count) //��map�е�ÿ��Ԫ��
//         //��ӡ���
//         cout << w.first << "occurs" << w.second
//              << ((w.second > 1) ? "times" : "time") << endl;
//     return 0;
// }

// //p376 11.3
// #include <map>
// #include <vector>
// #include <string>
// using namespace std;
// //��ȡ����vectorͳ�����еĵ��ʵ�����
// void word_count(const vector<string> &svec, map<string, size_t> &word_count)
// {
//     //map<string, size_t> word_count;
//     for (auto &i : svec)
//         //++word_count.first->second;
//         ++word_count[i];
// }

// //11.4 �ȶԴ𰸳�д
// #include <iostream>
// #include <fstream>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <vector>
// using namespace std;

// //����string��vector������дתСд�����ҽ������ţ���ֹ��ĩβ��ȥ��
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
//     //����ȥ���������Сд
//     change(svec);
//     //�����ɼ����ȹ���
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

// //p378 11.8 ��д�Ĵ�
// //vector�汾
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
//         cout << "�����ļ�ʧ��" << endl;
//         exit(1);
//     }
//     vector<string> unique_word; //���ظ�����
//     string word;
//     while (in >> word)
//     {
//         trans(word);
//         if (find(unique_word.begin(), unique_word.end(), word))
//             unique_word.push_back(word); //���Ӳ��ظ�����
//     }
//     for (const auto &w : unique_word) //��ӡ���ظ�����
//         //��ӡ���
//         cout << w << " ";
//     cout << endl;
//     return 0;
// }

// //set�汾
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
//         cout << "���������ļ�" << endl;
//         exit(1);
//     }
//     set<string> unique_word;
//     string word;
//     while (in >> word)
//     {
//         trans(word);
//         unique_word.insert(word); //���Ӳ��ظ�����
//     }
//     for (const auto &w : unique_word) //��ӡ���ظ�����
//         //��ӡ���
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
// //ͳ��ÿ�������������г��ִ�����һ�ָ������ķ���
// map<string, size_t> word_count; //��string��size_t�Ŀ�map
// string word;
// while (cin >> word)
// {
//     //����һ��Ԫ�أ��ؼ��ֵ���word��ֵΪ1
//     // ��word����word_count,insertʲôҲ����
//     auto ret = word_count.insert({word, 1});
//     if (!ret.second)         //word����word_count��
//         ++ret.first->second; //����������
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
//         cout<<"���ڴ�multimap��";
//     }

//     return 0;
// }

// //����ת����map p391
// #include <map>
// #include <string>
// #include <fstream>
// #include <sstream>
// #include <iostream>
// using namespace std;
// //��������ļ�������ת��ӳ��
// map<string, string> buildMap(ifstream &map_file)
// {
//     map<string, string> trans_map; //����ת������
//     string key;
//     string value;
//     //��ȡ��һ�����ʴ���key�У�����ʣ�����ݴ���value
//     while (map_file >> key && getline(map_file, value))
//         if (value.size() > 1)                 //����Ƿ���ת������
//             trans_map[key] = value.substr(1); //����ǰ���ո�
//         else
//         {
//             throw runtime_error("nor rule for " + key);
//         }
//     return trans_map;
// }

// const string &transform(const string &s, const map<string, string> &m)
// {
//     //ʵ�ʵ�ת���������˲����ǳ���ĺ���
//     auto map_it = m.find(s);
//     //���������ת��������
//     if (map_it != m.cend())
//         return map_it->second;
//     else
//         return s;
// }
// void word_transform(ifstream &map_file, ifstream &input)
// {
//     auto trans_map = buildMap(map_file); //����ת������
//     string text;                         //���������е�ÿһ��
//     while (getline(input, text))
//     {
//         istringstream stream(text);
//         string word;
//         bool firstword = true; //�����Ƿ��ӡ�ո�
//         while (stream >> word)
//         {
//             if (firstword)
//                 firstword = false;
//             else
//                 cout << " "; //�ڵ��ʼ��ӡһ���ո�
//             //transform�������ĵ�һ����������ת�������ʽ
//             cout << transform(word, trans_map); //��ӡ���
//         }
//         cout << endl; //���һ�е�ת��
//     }
// }
// //2020.05.19
// const string &transform(const string &s, const map<string, string> &m)
// {
//     //ʵ�ʵ�ת���������˲����ǳ���ĺ���
//     auto map_it = m.find(s);
//     //���������ת������map�У�
//     if (map_it != m.cend())
//         return map_it->second; //ʹ���滻����
//     else
//         return s; //���򷵻�ԭstring
// }

// //��ʼ12�¶�̬�ڴ��ѧϰ
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
//     //���Ӻ�ɾ��Ԫ��
//     void push_back(const std::string &t) { data->push_back(t); }
//     void pop_back();
//     //Ԫ�ط���
//     std::string &front();
//     std::string &back();
//     string &operator[](size_t n)
//     {
//         return data[n];
//     }
//     private : std::shared_ptr<std::vector<std::string>> data;
//     //���data[i]���Ϸ����׳�һ���쳣
//     void check��size_type i,const std::string &msg) const;
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
//     //����vectorΪ�գ�check���׳�һ���쳣
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
// //���ڷ���һ��������Ԫ�صĳ��ԣ�StrBlob�׳�һ���쳣
// #include <memory>
// #include <vector>

// using namespace std;
// class StrBlobPtr
// {
// public:
//     StrBlobPtr() : curr(0) {}
//     StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
//     std::string &deref() const;
//     StrBlobPtr &incr(); //ǰ׺����

// private:
//     //�����ɹ���check����һ��ָ��vector��shared_ptr
//     std::shared_ptr<std::vector<std::string>>
//     check(std::size_t, const std::string &) const;
//     //����һ��weak_ptr����ζ�ŵײ�vecttor���ܱ�����
//     std::weak_ptr<std::vector<std::string>> wptr;
//     std::size_t curr; //�������еĵ�ǰλ��
// };

// int main()
// {
//     StrBlob s1;
//     s1.push_back("huhua");
// }

// // 2020.05.20 ��ʼ����ѧϰ
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
//     //���Ӻ�ɾ��Ԫ��
//     void push_back(const string &s) { data->push_back(s); }
//     void pop_back();
//     //Ԫ�ط���
//     string &front();
//     const string &front() const;
//     string &back();
//     const string &back() const;

// private:
//     shared_ptr<vector<string>> data;
//     //���data[i]���Ϸ����׳�һ���쳣
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
//     //���vectorΪ�գ�check���׳�һ���쳣
//     check(0, "front on empty strblob");
//     return data->front();
// }
// //const�汾��front
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

// //���������ȷ��
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
//     auto const p=alloc.allocate(n);//������n��δ��ʼ���Ķ���
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
//         //ֱ�������ļ�����ʱֹͣ
//         if (in.bad())

//             throw runtime_error("IO������");
//         if (in.fail())
//         {
//             cerr << "���ݴ���������" << endl;
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
//     cout<<"������һ����"<<endl;
//     f(cin);
//     return  0 ;
// }

// // p285 8.4
// #include <iostream>
// #include <string>
// #include <fstream>
// #include <vector>
// using namespace std;
// void inputfile(ifstream &file, vector<string> &svec, vector<string> &svec1) //fileǰΪʲô��Ҫ������
// {
//     string s;
//     while (file >> s)
//     {
//         svec.push_back(s);
//     }
//     file.clear(); //��Ҫ��������
//     file.seekg(0, ios::beg);
//     while (getline(file, s))
//         svec1.push_back(s);
// }
// int main()
// {
//     std::ifstream ifile("�����ַ���.txt");
//     //ifile("�����ַ���.txt");
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
// //p289 ostringstream δ����

// //2020.05.22
// #include<forward_list>
// #include<iterator>
// using namespace std;
// int main()
// {
//      forward_list<int> il;
//      auto it=front_inserter(il);//Ҳ��back_inserter

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
// //���������򣬳�����ͬ�ĵ���ά��˳��
// stable_sort(words.begin(),words.end(),[](const string &a,const string &b){return a.size()<b.size();});
// //��ȡһ����������ָ���һ������size()>=sz��Ԫ��
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
//     //p360ʹ���������� p362 10.29
//     ifstream in("phonelist.txt");
//     istream_iterator<string> in_iter(in), eof;
//     vector<string> vec(in_iter, eof);
//     string s_sum = accumulate(vec.begin(), vec.end(), string(""));
//     //p361 ʹ��
//     ostream_iterator<int> out_iter(cout, " ");
//     vector<int> vec1 = {1, 2, 3, 4, 5};
//     for (auto e : vec1)
//         *out_iter++ = e; //��ֵ���ʵ���Ͻ�Ԫ��д��cout
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
//     all=vector<int>(int_iteri, eof1); //��ȡ������
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
//         cout << *it << " "; //���ﲻ�Ὣ34��ӡ��43��
//     vector<string> svec = {"erwr", "123"};
//     //cout<<string(svec.cbegin(),svec.crend())<<endl;//�޷����룿
//     for (auto it = svec.crbegin(); it != svec.crend() + 1; ++it)
//         cout << *it << " ";
//     for (auto it = svec.end(); it != svec.begin();)//�ֺŲ�����
//         cout << *(--it) << " "; //������ݼ�������
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
//     X() { cout << "���캯��X()"; }
//     X(const X &) { cout << "�������캯��X(const X&)" << endl; }
//     X &operator=(const X &rhs)
//     {
//         cout << "������ֵ�����" << endl;
//         return *this;
//     }
//     ~X() { cout << "��������" << endl; }
// };
// void f1(X x) {}
// void f2(X &x) {}
// int main()
// {
//     cout << "�ֲ�����" << endl;
//     X x;
//     cout << endl;

//     cout << "�����ò�������:" << endl;
//     f1(x);
//     cout << endl;

//     cout << "���ò�������" << endl;
//     f2(x);
//     cout << endl;

//     cout << "��̬����" << endl;
//     X *px = new X;
//     cout << endl;

//     cout << "���ӵ�������" << endl;
//     vector<X> vx;
//     vx.push_back(x);
//     cout << endl;

//     cout << "�ͷŶ�̬�������" << endl;
//     delete px;
//     cout << endl;

//     cout << "��ӳ�ʼ���͸�ֵ" << endl;
//     X y = x;
//     y = x;
//     cout << endl;

//     cout << "���������" << endl;
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
//     // //Ϊ13.19���忽������Ϳ�����ֵ
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

// //p453 ��Ϊ��ֵ����
// #include <string>
// using namespace std;
// class HasPtr
// {
// public:
//     HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
//     //��psָ���string��ÿ��hasptr�������Լ��Ŀ���
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
//     auto newp = new string(*rhs.ps); //�����ײ�string
//     delete ps;                       //�ͷž��ڴ�
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
//     //���Ӻ�ɾ��Ԫ��
//     void push_back(const string &s) { data->push_back(s); }
//     void pop_back();
//     //Ԫ�ط���
//     string &front();
//     const string &front() const;
//     string &back();
//     const string &back() const;

//     //�ṩ��strblobptr�Ľӿ�
//     StrBlobPtr begin() const; //����strblobptr����ܶ�������������
//     StrBlobPtr end() const;
//     //const �汾
//     StrBlobPtr begin() const;
//     StrBlobPtr end() const;

// private:
//     shared_ptr<vector<string>> data;
//     //���data[i]���Ϸ����׳��쳣
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
//     //���vectorΪ�գ�check���׳�һ���쳣
//     check(0,"front on empty strblob");
//     return data->front();
// }
// inline string &StrBlob ::back()
// {
//     check(0,"back on empty strblob");
//     return data->back();
// }
// //const�汾check
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

// //����ͼ����һ�������ڵ�Ԫ��ʱ��strblobptr�׳�һ���쳣
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
//     StrBlobPtr &incr(); //ǰ׺����
//     StrBlobPtr &decr(); //��׺�ݼ�
//     StrBlobPtr &operator*() const;
//     {
//         auto p = check(curr, "dereference of past end");
//         return (*p)[curr];
//     }
//     StrBlobPtr *operator->() const
//     {
//         //��ʵ�ʹ���ί�и������������
//         return &this->operator*();
//     }

// private:
//     //�����ɹ���check�Ż�һ��ָ��vecotr��shared_ptr
//     shared_ptr<vector<string>> check(size_t, const string &) const;
//     //����һ��weak_ptr����ζ�ŵײ�vector���ܻᱻ����
//     weak_ptr<vector<string>> wptr;
//     size_t curr; //�����еĵ�ǰλ��
// };               //����
// StrBlobPtr &StrBlobPtr::operator++()
// {
//     //���curr�Ѿ�ָ����������β��λ�ã����޷�������
//     check(curr, "increment past end of strblobptr");
//     //
//     ++curr;
//     return *this;
// }
// StrBlobPtr &StrBlobPtr::operator--()
// {
//     //���curr��0,���������������һ����Ч�±�
//     //�ȵݼ����飻
//     --curr;
//     check(curr, "decrement past begin of sr");
//     return *this;
// }
// StrBlobPtr &StrBlobPtr::operator++(int)
// {
//     StrBlobPtr ret = *this; //��¼��ǰֵ
//     ++*this;                //��ǰ�ƶ�һ��Ԫ�أ�ǰ��++��Ҫ����������Ч��
//     return ret;
// }
// StrBlobPtr &StrBlobPtr::operator--(int)
// {
//     //��������Ч�ԣ�����ǰ�õݼ�����ʱ������Ҫ���
//     StrBlobPtr ret = *this;
//     --*this;    //�Ⱥ��ƶ�һ��Ԫ�أ�ǰ��--��Ҫ���ݼ�����Ч��
//     return ret; //����֮ǰ��¼��״̬
// }
// //p456
// #include <string>
// using namespace std;
// class HasPtr
// {
// public:
//     //���캯�������µ�string���µļ�����������������Ϊ1
//     HasPtr(const string &s = string()) : ps(new string(s)), i(0), use(new size_t(1)) {}
//     //�������캯�����������������ݳ�Ա��������������
//     HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) { ++*use; }
//     HasPtr &operator=(const HasPtr &);
//     ~HasPtr();

// private:
//     string *ps;
//     int i;
//     size_t *use; //������¼�ж��ٸ�������*ps��Ա
// };
// HasPtr::~HasPtr()
// {
//     if(--*use==0)
//     {
//         delete ps;//�ͷ�string�ڴ�
//         delete use ;//�ͷż������ڴ�
//     }

// }
// HasPtr& HasPtr::operator=(const HasPtr &rhs)
// {
//     ++*rhs.use;//�����Ҳ������������ü���
//     if(--*use==0){
//         delete ps;
//         delete use;
//     }
//     ps=rhs.;
//     i=rhs.i;
//     use=rhs.use;
//     return *this;//���ض���
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
// //�������캯��
// BinStrTree::BinStrTree(const BinStrTree &bst) : root(bst.root)
// {
//     //����������
//     root->CopyTree(); //Ӧ�������������������Ǹ��ڵ�
// }
// void TreeNode::CopyTree(void)
// {
//     if (left)
//         left->CopyTree();
//     if (right)
//         right->CopyTree();
//     count++;
// }
// //��ĳ���ڵ㿪ʼ��������
// TreeNode::TreeNode(const TreeNode &tn) : value(tn->value), count(1), left(tn->left), right(tn->right)
// {
//     if (left)
//         left->CopyTree();
//     if (right)
//         right->CopyTree();
// }

// //��������
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

// BinStrTree::~BinStrTree() //�ͷ�������
// {
//     if (!root->ReleaseTree())
//         delete root;
//     delete root;
// }
// TreeNode::~TreeNode()
// {
//     //count Ϊ0��ʾ��Դ�Ѿ����ͷţ���delete������������������ôҲ����
//     if (count)
//         ReleaseTree();
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

//     //��c++17֮ǰ
//     const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);//itr��const�ģ�������������ٶ�����ظ�����
//     if (itr != vec.end())
//     {
//         *itr = 3;
//     }

//     // //��Ҫ���¶���һ���µı���
//     // const std::vector<int>::iterator itr1 = std::find(vec.begin(), vec.end(), 3);//
//     // if (itr1 != vec.end())
//     // {
//     //     *itr1 = 4;
//     // }

//     //c++17����
//     if(const std::vector<int>::iterator itr=std::find(vec.begin(),vec.end(),3);itr != vec.end())
//     {
//         *itr=4;
//     }
//     //�����1��4,3,4(��Ϊfind���ص�һ��ֵ���ڲ���ֵ�ĵ�����)
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
// //���Ϸ�
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

// //p2020.05.25 ��ʼ����ѧϰ
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
//     cout << "����" << *lhs.ps << "��" << *rhs.ps << endl;
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
//     int n = 17;

//     for (int i = 0; i < n; ++i)
//         vh.push_back(to_string(n - i));
//     for (auto p : vh)
//         cout << *p << " ";
//     cout << endl;
//     sort(vh.begin(), vh.end());
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
// }// ����ʹ�ô����͵Ķ������粻����������

// //16.5  ***
// #include<iostream>
// #include<string>
// using namespace std;

// template<typename T,size_t N>
// void print(const T(&a)[N])
// {
//     //begin,end����ͨ����תΪ������
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
//     //���캯��
//     Blob();
//     Blob(std::initializer_list<T> i1);
//     //blob�е�Ԫ����Ŀ
//     size_type size() const { return data->size(); }
//     bool empty() const { return data->empty(); }
//     //���Ӻ�ɾ��Ԫ��
//     void push_back(const T &t) { data->push_back(t); }
//     //�ƶ��汾
//     void push_back(const T &&t) { data->push_back(std::move(t)); }
//     void pop_back();

//     //Ԫ�ط���
//     T &back();
//     T &operator[](size_type i); //��14.5��

// private:
//     std::shared_ptr<std::vector<T>> data;
//     //��data[i]��Ч�����׳�msg
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
//     //���i̫��check���׳��쳣����ֹ����һ�� �����ڵ�Ԫ��
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
//     //����display ����ͨ�汾��const�汾
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
//     //ʵ�������ʾ�ĺ���
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
//     int row = r * W;  //������λ��
//     cursor = row + c; //������ƶ�������ָ����
//     return *this;      //���ص�ǰ������ֵ)
// }
// template<int H,int W>
// char Screen<H,W>::get(int r,int c)const{
//     int row=r*W;
//     return contents[row+c];//������ƶ�������ָ��lie
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
//     //������ƶ����ض�λ�ã�������������
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

//     //����temp��sceen<5,3>����screen<5,3>
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
// //ģ�����һ���ɵ��ö��������������������������ת���������ø����Ŀɵ��ö���
// template <typename F, typename T1, typename T2>
// void flip(F f, T1 &&t1, T2 &&t2)
// {
//     f(std::forward<T2>(t2), std::forward<T1>(t1));
// }

// void f(int v1, int &v2) //ע�⣬v2��һ������
// {
//     cout << v1 << ++v2 << endl;
// }
// void g(int &&i, int &j)
// {
//     cout << i << " " << j << endl;
// }
// //flip1ʵ�ֲ�����������const�����ö�������
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
//     // ���ֶ��Ʋ�������ʽ
//     // ��ʽ1 bind��ʽ�������
//     for_each(ivec.begin(), ivec.end(), bind(print, ref(cout), _1, ' '));
//    // ��ʽ2 lambda��ʽ
//     for_each(ivec.begin(), ivec.end(), [c](const int &i) -> ostream & { return cout << i << c; });
//     // ��ʽ3���׾
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
//     foo(i, s, 42, d); //��������������

//     foo(s, 42, "hi"); //��������������
//     foo(d, s);        //һ������
//     foo("hi");        //0������

//     return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;

// template <typename T>
// ostream &print(ostream &os, const T &t)
// {
//     return os << t; //�������һ��Ԫ��֮�󲻴�ӡ�ָ���

// }
// //���д������һ��Ԫ��֮�������Ԫ�ض����������汾��print
// template<typename T ,typename... Args>
// ostream  &print(ostream &os,const T&t,const Args&...rest)
// {
//     os << t << ", ";           //��ӡ��һ��ʵ��
//     return print(os, rest...); //...�ں��棬�ݹ���ã���ӡ����ʵ��
// }
// int main(){
//     int i=4;
//     string s="ss";
//     print(cout,i,s,42);
//     return 0;
// }

// //2020.06.06
// //stl��׼������ֵ�㷨��ѧϰ
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
//     // //accumulate����
//     // //�����
//     // std::cout
//     //     << "sum:" << std::accumulate(coll.begin(), coll.end(), 0) << std::endl;
//     // //����˻�
//     // std::cout << "product" << std::accumulate(coll.begin(), coll.end(), 2, std::multiplies<int>());
//     // //�����
//     // std::cout << "product" << std::accumulate(coll.begin(), coll.end(), 0, std::plus<int>());

//     // //innerproduct���ڻ�
//     // //���ض�Ӧ�ĳ˻��ĺ� 0+a1*b1+a2*b2...
//     // auto sum1 = std::inner_product(coll.begin(), coll.end(), coll1.begin(), 0);
//     // //���ض�Ӧ�ĺ͵ĳ˻� 1*(a1+b1)*(a2*b2)....
//     // auto sum2 = std::inner_product(coll.begin(), coll.end(), coll1.begin(), 1, std::multiplies<int>(), std::plus<int>());

//     // //partial_sum������к;�������֮���ת��
//     // std::vector<int> ivec{2, 2, 3}, ivec1{2, 3, 4};
//     // //a1,a1+a2,a1+a2,a1+a2+a3
//     // auto it1 = std::partial_sum(ivec.begin(), ivec.end(), ivec.begin());

//     // //������ֵ�ĳ����ֵ
//     // auto it3 = std::adjacent_difference(ivec.begin(), ivec.end(), ivec.begin());

//     // //a1,a1*a2,a1*a2,a1*a2*a3
//     // auto it2 = std::partial_sum(ivec.begin(), ivec.end(), ivec.begin(), std::multiplies<int>());
//     // //partial_sum��adjacent_difference����
//     // auto it4 = std::adjacent_difference(ivec.begin(), ivec.end(), ivec.begin(), std::divides<int>());
//     // std::for_each(ivec.begin(), ivec.end(), [](int &i)  {  i *= i; });
//     // std::for_each(ivec.begin(),ivec.end(),[=](int &i){i*=*ivec.begin();});

//     // std::vector<int> ivec{1, 2, 3, 4, 5}; //p525
//     // auto num = std::count_if(ivec.begin(), ivec.end(), b4);
//     // auto unm1 = std::count_if(ivec.begin(), ivec.end(), [](const int &i) { return i > 4; });
//     // auto num2 = std::count_if(ivec.begin(), ivec.end(), std::bind(bn, 4, std::placeholders::_1));

//     // //search_n ����ǰn��--����--ƥ��ֵ
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
//     // //����ѭ��
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
//     //���ظ����������鼮�������ܶ�������д��ʹ�ò�ͬ���ۿۼ��㷽��
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
//     // Basket ʹ��Ĭ�Ϻϳɵ�Ĭ�Ϲ��캯���Ϳ������Ƴ�Ա
//     void add_item(const std::shared_ptr<Quote> &sale)
//     {
//         items.insert(sale);
//     }
//     void add_item(const Quote&sale)
//     {
//         items.insert(std::shared_ptr<Quote>(sale.clone()));
//     }
//     void add_item( Quote&&sale)//�ƶ���������
//     {
//         items.insert(
//             std::shared_ptr<Quote>(std::move(sale).clone())
//         );
//     }
//     double total_receipt(std::ostream &) const;

// private:
//     //�ú������ڱȽ�shared_ptr��multiset��Ա���õ�t
//     static bool compare(const std::shared_ptr<Quote> &lhs, const std::shared_ptr<Quote> &rhs)
//     {
//         return lhs->isbn() < rhs->isbn();
//     }
//     //multiset ���������ۣ�����compare��Ա����
//     std::multiset<std::shared_ptr<Quote>, decltype(compare) *> items{compare};
// };

// double Basket::total_receipt(ostream &os) const
// {
//     double sum = 0.0; //����ʵʱ������ļ۸�
//     //iterָ��ISBN��ͬ��һ��Ԫ���еĵ�һ��
//     //upper_bound����һ�����������õ�����ָ������Ԫ�ص�β��λ��
//     for (auto iter = items.cbegin();
//          iter != items.cend();
//          iter = items.upper_bound(*iter))
//     {
//         //����֪���ڵ�ǰ��basket��������һ���ؼ��ֵ�Ԫ��
//         //��ӡ���鼮��Ӧ����Ŀ
//         sum += print_total(os, **iter, items.count(*iter));
//     }
//     os << "Total Sale" << sum << endl;
//     return sum;
// }

// //�ƻ�6��ʣ�����������ٰ�c++primer��һ��

// #include <iostream> //modern c++
// #include <string>
// #include <regex>
// int main()
// {
//     std::string fnames[] = {"foo.txt", "bar.txt", "test", "a0.txt", "AAA.txt"};
//     //��c++��\�ᱻ����ת���ַ���Ϊʹ\.��Ϊ�������ʽ���ݽ�ȥ��Ч����Ҫ��\���ж���ת�壬�Ӷ���\\.
//     std::regex txt_regex("[a-z]+\\.txt");
//     for (const auto &fname : fnames)
//         std::cout << fname << ": " << std::regex_match(fname, txt_regex) << std::endl;

//     std::regex base_regex("([a-z]+)\\.txt");
//     std::smatch base_match;
//     for (const auto &fname : fnames)
//     {
//         if (std::regex_match(fname, base_match, base_regex))
//         {
//             //std::smatch �ĵ�һ��Ԫ��ƥ�������ַ���
//             //std::smatch �ĵڶ���Ԫ��ƥ���˵�һ�����ű���ʽ
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

// //����ָ�� modern c++
// #include <memory>
// #include <iostream>
// int main()
// {
//     auto pointer = std::make_shared<int>(10);
//     auto pointer2 = pointer; //���ü�����1
//     auto pointer3 = pointer; //���ü���+1

//     int *p = pointer.get();                                                 //���������������ü���
//     std::cout << "pointer.use_count=" << pointer.use_count() << std::endl;  //3
//     std::cout << "pointer3.use_count" << pointer3.use_count() << std::endl; //3
//     pointer2.reset();                                                       //������һ�����ü���
//     std::cout << "reset pointer2" << std::endl;
//     std::cout << "pointer.use_count" << pointer.use_count() << std::endl;   //2
//     std::cout << "pointer2.use_count" << pointer2.use_count() << std::endl; //0,piter_2�Ѿ�reset
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
//     //p1���գ����
//     if (p1)
//         p1->foo();
//     {
//         std::unique_ptr<Foo> p2(std::move(p1));
//         //p2���գ����
//         f(*p2);
//         //p2���գ����
//         if (p2)
//             p2->foo();
//         //p1Ϊ�գ������
//         if (p1)
//             p1->foo();
//         p1 = std::move(p2);
//         //p2Ϊ�գ������
//         if (p2)
//             p2->foo();
//         std::cout << "p2������" << std::endl;

//     }
//     //p1���գ����
//     if(p1)p1->foo();
//     //Foo��ʵ�������뿪������ʱ����
// }

// #include <memory>
// #include <iostream>
// struct A;
// struct B;

// //����ָ��ʧЧ������
// struct A
// {
//     /* data */
//     std::shared_ptr<B> pointer;
//     ~A()
//     {
//         std::cout << "A������" << std::endl;
//     }
// };
// struct B
// {
//     std::shared_ptr<A> pointer;
//     ~B()
//     {
//         std::cout << "B������" << std::endl;
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

// 2020.06.09����
// 2020.06.10���ڼӰ�������������޸���

// //2020.06.11
// #include<tuple>
// #include<iostream>
// auto  get_student(int id)
// {
//     //�������ͱ��ƶ�Ϊstd:: tuple<double,char,std::string?
//     if(id==0)
//     return std::make_tuple(3.8,'A',"����");
//     if(id==1)
//     return std:: make_tuple(2.9,'C',"����");
//     if(id==2)
//     return std::make_tuple(1.7,'D',"����");
//     return std::make_tuple(0.0,'D',"null");
//     //���ֻд0������ƶϴ��󣬱���ʧ��
// }

// int main(){
//     auto student=get_student(0);
//     std::cout<<"ID:0,"
//     <<"GPA"<<std::get<0>(student)<<", "
//     <<"�ɼ�"<<std::get<1>(student)<<", "
//     <<"����"<<std::get<2>(student)<<'\n';
//     double gpa;
//     char grade;
//     std::string name;

//     //Ԫ����
//     std::tie(gpa,grade,name)=get_student(1);
//     std::cout<<"ID:1"
//     <<"GPA"<<gpa<<", "
//     <<"����"<<name<<'\n';
//     return 0;
// }

// #include <iostream>
// void lambda_value_capture() //ֵ����ֻ���ڱ���lambdaʱ������
// {
//     int value = 1;
//     auto copy_value = [value] {
//         return value;
//     };
//     value = 100;
//     auto stored_value = copy_value();
//     std::cout << "stored_value= " << stored_value << std::endl;
// }

// //���ò��� moder c++
// void lambda_reference_capture()
// {
//     int value = 1;
//     auto copy_value = [&value] { return value; };

//     value = 100;
//     auto stored_value = copy_value();
//     std::cout << "stored_value: " << stored_value << std::endl;
//     //��ʱ��stored_value=100,value=100;
//     //��Ϊcopy_value�����������
// }

// int main()
// {
//     lambda_value_capture();

//     lambda_reference_capture();
//     return 0;
// }

// //������ֵ��c++14��������
// #include <iostream>
// #include <utility>

// //ͻ��8000�������ָ��� -_>
// int main()
// {
//     auto important = std::make_unique<int>(1);
//     auto add = [v1 = 1, v2 = std::move(important)](int x, int y) -> int { return x + y + v1 + (*v2); };
//     std::cout << add(3, 4) << std::endl;
//     return 0;
// }

// #include <ranges> // #include <ranges> in c++20
// #include <iostream>
// #include <vector>
// #include <string>
// #include <string_view>
// namespace std {
//     namespace views = ranges::views;
// }
// using namespace std;
// namespace vw = ::ranges::views; // std::views in c++20
// namespace vw1=::ranges::views::zip;

// string convert(string str, int n)
// {
//     vector<string> vec(n);
//     auto chars = str | vw::all;
//     auto index = vw::concat(vw::iota(0, n), vw::iota(1, n - 1) | vw::reverse) | vw::cycle;
//     for (auto &&[i, c] : vw::zip(index, chars))
//     {
//         vec[i].push_back(c);
//     }
//     return vec | vw::join("") | ranges::to<string>;
// }

// int main()
// {
//     string s = convert(string("LEETCODEISHIRING"), 4);
//     cout << s << "\n"; // should output LDREOEIIECIHNTSG
//     return 0;
// }

// #include <vector>
// #include <ranges>
// #include <iostream>
// #include <cmath>
// int main()
// {
//     std::vector<int> ints{0, 1, 2, 3, 4, 5};
//     auto even = [](int i) { return 0 == i % 2; }; //lambda ����
//     auto square = [](int i) { return i * i; };

//     for (int i : ints | std::views::filter(even) | std::views::transform(square))
//     {
//         std::cout << i << ' ';
//     }

//     return 0;
//     system("pause");
// }

// #include <format>
// #include <iostream>
// #include <iterator>
// #include <string>

// auto main() -> int
// {
//     std::string buffer;

//     std::format_to(
//         std::back_inserter(buffer), //< OutputIt
//         "Hello, C++{}!\n",          //< fmt
//         "20");                      //< arg
//     std::cout << buffer;
//     buffer.clear();

//     std::format_to(
//         std::back_inserter(buffer), //< OutputIt
//         "Hello, {0}::{1}!{2}",      //< fmt
//         "std",                      //< arg {0}
//         "format_to()",              //< arg {1}
//         "\n",                       //< arg {2}
//         "extra param(s)...");       //< ��ʹ��
//     std::cout << buffer;

//     std::wstring wbuffer;
//     std::format_to(
//         std::back_inserter(wbuffer),//< OutputIt
//         L"Hello, {2}::{1}!{0}",     //< fmt
//         L"\n",                      //< arg {0}
//         L"format_to()",             //< arg {1}
//         L"std",                     //< arg {2}
//         L"...is not..."             //< ��ʹ��
//         L"...an error!");           //< ��ʹ��
//     std::wcout << wbuffer;
// }

// //2020.06.13��ʼ����
// //p443 13.5
// #include <string>
// class HasPtr
// {
// public:
//     HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
//     HasPtr(const HasPtr &h) : ps(new std::string(*(h.ps))), i(h.i) {}

// private:
//     std::string *ps;
//     int i;
// };
// int main()
// {
//     HasPtr has;
//     return 0;
// }

// //p443 13.5
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// struct X
// {
//     /* data */
//     X() { std::cout << "���캯��" << std::endl; }
//     X(const X &x) { std::cout << "�������캯��" << std::endl; }
//     X &operator=(const X &x)
//     {
//         std::cout << "������ֵ����" << std::endl;
//         return *this;
//     }
//     ~X() { cout << "��������" << endl; }
// };

// void f1(X x)
// {
// }
// void f2(X &x)
// {
// }

// int main()
// {
//     cout << "�ֲ�����" << endl;
//     X x;
//     cout << endl;

//     cout << "�����ò���" << endl;
//     f1(x);
//     cout << endl;

//     cout << "���ò���" << endl;
//     f2(x);
//     cout << endl;

//     cout << "��̬����:" << endl;
//     X *px = new X;
//     cout << endl;

//     cout << "���ӵ�������" << endl;
//     vector<X> vx;
//     vx.push_back(x);
//     cout<<endl;

//     cout<<"�ͷŶ�̬�������"<<endl;
//     delete px;
//     cout<<endl;

//     cout<<"��ӳ�ʼ���͸�ֵ"<<endl;
//     X y=x;
//     y=x;
//     cout<<endl;

//     cout<<"�������"<<endl;
//     return 0;
// }

// #include <string>
// class Employee
// {
// public:
//     Employee() { id += 1;idnum=id; }
//     Employee(const Employee &e)
//     {
//         name = e.name;
//         id += 1;
//         idnum=id;
//     }
//     Employee &operator=(const Employee &lhs)
//     {
//         name = lhs.name;
//         // id += 1;
//         // idnum=id;
//         return *this;
//     }

// private:
//     std::string name;
//     int idnum;
//     static int id;
// };

//  int Employee:: id = 0;

// int main()
// {
//     Employee e;
//     Employee e1=e;
//     Employee e2;
//     e2=e1;
//     return 0;
// }

// //p453��Ϊ��ֵ����
// #include <string>
// class HasPtr
// {
// public:
//     HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
//     //��psָ���string��ÿ��HasPtr�������Լ��Ŀ���
//     HasPtr(const HasPtr &p) : ps(new std::string(*p.ps)), i(p.i) {}
//     HasPtr &operator=(const HasPtr &lhs);
//     ~HasPtr();

// private:
//     std::string *ps;
//     int i;
// };

// HasPtr &HasPtr::operator=(const HasPtr &lhs)
// {
//     std::string *newp = new std::string(*lhs.ps);
//     delete ps;
//     ps = newp;
//     i = lhs.i;
//     return *this;
// }
// HasPtr::~HasPtr()
// {
//     delete ps;
// }

// //��Ϊ��ָ�����
// //ֻ�е�ָ���������һ��ָ���������ʱ��string����Żᱻ����+
// #include <string>

// class HasPtr
// {
// public:
//     //���캯�������µļ�������string������������Ϊ1
//     HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
//     //�������캯�����������������ݳ�Ա��������������
//     HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) { ++*use; }
//     HasPtr &operator=(const HasPtr &);
//     ~HasPtr();

// private:
//     std::string *ps;
//     int i;
//     std::size_t *use;
// };

// HasPtr::~HasPtr()
// {
//     if (--*use == 0) //��1ͬʱ�ж�
//     {
//         delete ps;
//         delete use;
//     }
// }

// HasPtr &HasPtr::operator=(const HasPtr &rhs)
// {
//     ++*rhs.use;
//     if (--*use == 0)
//     {
//         //Ȼ��ݼ�����������ü���
//         delete ps;
//         delete use;
//     }
//     ps = rhs.ps;
//     i = rhs.i;
//     use = rhs.use;
//     return *this;
// }

// int main()
// {
//     HasPtr *hp = new HasPtr("sf");
//     HasPtr h2 = *hp;
//     return 0;
// }

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
//     friend void swap(HasPtr &, HasPtr &);

// public:
//     HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
//     HasPtr(const HasPtr &p) : ps(new string(*p.ps)), i(p.i) {}
//     HasPtr &operator=(const HasPtr &);
//     HasPtr &operator=(const string &);    //������string
//     string &operator*();                  //��yinyon
//     bool operator<(const HasPtr &) const; //�Ƚ�����
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
//     auto newp = new string(*rhs.ps);
//     delete ps;
//     ps = newp;
//     i = rhs.i;
//     return *this;
// }

// // HasPtr &HasPtr::operator=(const string &rhs)
// // {
// //     *ps = rhs;
// //     return *this;
// // }
// inline void swap(HasPtr &lhs, HasPtr &rhs) //�������ò�����const��
// {
//     cout << "����" << *lhs.ps << *rhs.ps << endl;
//     using std::swap;
//     swap(lhs.ps, rhs.ps);
//     swap(lhs.i, rhs.i);
// }

// bool HasPtr::operator<(const HasPtr &rhs) const
// {
//     return *ps < *rhs.ps;
// }

// string &HasPtr::operator*() //��Ϊ�����н����õ�����
// {
//     return *ps;
// }

// int main()
// {
//     vector<HasPtr> vh;
//     int n = 16;
//     for (int i = 0; i < n; ++i)
//         vh.push_back(to_string(n - i));
//     for (auto &p : vh)
//         cout << *p << " ";
//     cout << endl;
//     sort(vh.begin(), vh.end());
//     for (auto &p : vh)
//         cout << *p << " ";
//     cout << endl;
//     return 0;
// }

// struct S
// {
//     /* data */
//     int i:3=0;
//     int j:5=0;
// };
// int main()
// {
//     auto a= sizeof(S);
//     return 0;
// }

// #include <string>
// #include <memory>

// using namespace std;

// using std::allocator::construct;

// class StrVec
// {
// public:
//     StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
//     StrVec(const StrVec &);
//     StrVec &operator=(const StrVec &);
//     ~StrVec();
//     void push_back(const std::string &);
//     size_t size() const { return first_free - elements; }
//     size_t capacity() const { return cap - elements; }
//     std::string *begin() const { return elements; }
//     std::string *end() const { return first_free; }
//     string &private : static std::allocator<std::string> alloc; //����Ԫ��
//     string &operator[](size_t n) return { elements[n]; }
//     const string &operator[](size_t n) const { return elements[n]; }
//     StrVec &operator=(std::initializer_list<std::string>);

//     //������Ԫ�صĺ�����ʹ��
//     // void chk_n_alloc()
//     // {
//     //     if (size() == capacity())
//     //         reallocate();
//     // }
//     //���ߺ��������������캯������ֵ�����������������ʹ��
//     //std::pair<std::string *, std::string *> alloc_n_copy(const std::string *, const std::string *);
//     void free();        //����Ԫ�ز��ͷ��ڴ�
//     void reallocate();  //��ø����ڴ沢��������Ԫ��
//     string *elements;   //ָ��������Ԫ�ص�ָ��
//     string *first_free; //ָ�������һ�����е�Ԫ��
//     string *cap;        //ָ������β��λ�õ�ָ��
// };
// StrVec & ::StrVec::operator=(std::initializer_list<std::string> i1)
// {
//     //alloc_n_copy�����ڴ�ռ䲢�Ӹ�����Χ�ڿ���Ԫ��
//     auto data = alloc_n_copy(i1.begin(), i1.end());
//     free(); //���ٶ����е�Ԫ�ز��ͷ��ڴ�ռ�
//     elements = data.first;
//     first_free = cap = data.second;
//     return *this;
// }
// void StrVec::push_back(const std::string &s)
// {
//     chk_n_alloc(); //�_�������Ŀ��g�ݼ{��Ԫ��
//     //��first_freeָ���Ԫ���й���s�ĸ���
//     alloc.construct(first_free++, s);
// }
// std::pair<std::string *, std::string *>
// StrVec::alloc_n_copy(const std::string *b, const std::string *e)
// {
//     //����ռ䱣�������Χ�е�Ԫ��
//     auto data = alloc.allocate(e - b);
//     //��ʼ��������һ��pair��̫pair��data��uninitialized_copy�ķ���ֵ����
//     return {data, uninitialized_copy(b, e, data)};
// }
// void StrVec::free()
// {
//     //���ܴ��ݸ�deallocateһ����ָ�룬���elementsΪ0������ʲôҲ����
//     if (elements)
//     {
//         //�������پ�Ԫ��
//         for (auto p = first_free; p != elements; /**/) //��Ϊ������--�������if�ж����Բ��ý����ж�
//             alloc.destroy(--p);
//         alloc.deallocate(elements, cap - elements);
//     }
// }
// StrVec::StrVec(const StrVec &s)
// {
//     //����alloc_n_copy����ռ���������s��һ�����Ԫ��
//     auto newdata = alloc_n_copy(s.begin(), s.end());
//     elements = newdata.first;
//     first_free = cap = newdata.second;
// }

// #include <memory>
// #include <string>

// using namespace std;

// int main()
// {
//     // int n = 3;
//     // allocator<string> alloc;
//     // auto const p = alloc.allocate(n);
//     // auto q=p;
//     // alloc.construct(q++,"hi");
//     return 0;
// }

// //p461 ��������ʵ��
// #include <string>
// #include <set>
// class Folder;//��������message�ſ���ʹ��
// class Message
// {
//     friend class Folder;
//     friend void swap(Message &lhs, Message &rhs);

// public:
//     //folders����ʽ��ʼ��Ϊ�ռ���
//     explicit Message(const std::string &str = "") : contents(str) {}
//     //�������Ƴ�Ա����������ָ��message��ָ��
//     Message(const Message &);
//     Message &operator=(const Message &);
//     ~Message();
//     //�Ӹ���folder����������/ɾ���ı�
//     void save(Folder &);
//     void remove(Folder &);

//     //void addFldr(Folder *f){folders.insert(f);}

// private:
//     std::string contents;       //ʵ����Ϣ�ı�
//     std::set<Folder *> folders; //������message��folder
//     //�������캯��\������ֵ�����������������ʹ�õĹ��ߺ���
//     //����message���ӵ�ָ������е�Folder��
//     void add_to_Folders(const Message &);
//     //��folers�е�ÿ��Folder��ɾ����Message
//     void remove_from_Folders();
// };

// class Folder
// {
//     friend class Message;

// public:
//     void addMsg(Message *m) { mesgs.insert(m); }
//     void remMsg(Message *m) { mesgs.erase(m); }
//     Folder(const Folder &f);
//     Folder &operator=(const Folder &);
//     ~Folder();

// private:
//     void add_to_Messages(const Folder &f);
//     void remove_from_Msgs();

//     set<Message *> mesgs;
// };
// //��foler��Ϣ���ӵ�message��ȥ
// void Folder::add_to_Messages(const Folder &f)
// {
//     for (auto &msg : f.mesgs)
//         msg->save(*this);
// }
// void Folder::remove_from_Msgs()
// {
//     while (!mesgs.empty())
//         (*mesgs.begin())->remove(*this);
// }
// Folder::Folder(const Folder &f) : mesgs(f.mesgs)
// {
//     add_to_Messages(f);
// }
// Folder &Folder::operator=(const Folder &f)
// {
//     remove_from_Msgs();
//     mesgs = f.mesgs;
//     add_to_Messages(f);
//     return *this;
// }

// Folder::~Folder()
// {
//     remove_from_Msgs();
// }

// //message�ľ���ʵ����Ҫ���ں��棨��Ϊ��FOLDER�й�ϵ��
// void Message::save(Folder &f)
// {
//     //˫���
//     folders.insert(&f); //������Folder���ӵ����ǵ�Folder�б���
//     f.addMsg(this);     //����Message���ӵ�f��message������
// }

// void Message::remove(Folder &f)
// {
//     folders.erase(&f); //������Folder�����ǵ�Folder�б���ɾ��
//     f.addMsg(this);
// }

// //����Message���ӵ�ָ��m��Folder��
// void Message::add_to_Folders(const Message &m)
// {
//     for (auto f : m.folders) //��ÿ������m��Folder
//         f->remMsg(this);     //���Folder����һ��ָ��Message��ָ��
// }
// Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
// {
//     add_to_Folders(m); //������Ϣ���ӵ�ָ��m��Folder��
// }

// //���幫�������Ӷ�Ӧ��Folder��ɾ����Message
// void Message::remove_from_Folders()
// {
//     for (auto f : folders)
//         f->addMsg(this);
// }
// Message::~Message()
// {
//     remove_from_Folders();
// }
// Message &Message::operator=(const Message &rhs)
// {
//     //ͨ��ɾ��ָ���ٲ��������������Ը�ֵ״��
//     remove_from_Folders();   //��������folder
//     contents = rhs.contents; //��rhs������Ϣ
//     folders = rhs.folders;   //��rhs����ָ��
//     add_to_Folders(rhs);     //���� message���ӵ���Щfolder��
//     return *this;
// }
// void swap(Message &lhs, Message &rhs)
// {
//     using std::swap; //�ڱ������ϸ���˵������Ҫ��������һ����ϰ��
//     //��ÿ����Ϣ��ָ�����ԭ�����ڵ�folderɾ��
//     for (auto f : lhs.folders)
//         f->remMsg(&lhs);
//     for (auto f : rhs.folders)
//         f->remMsg(&lhs);
//     //����contonts��foldersָ��set
//     swap(lhs.folders, rhs.folders);   //ʹ��swap(set&,set&)
//     swap(lhs.contents, rhs.contents); //ʹ��swap(string&,string&)
//     //��message��ָ�����ӵ�����(��)Folder��
//     for (auto f : lhs.folders)
//         f->addMsg(&lhs);
//     for (auto f : rhs.folders)
//         f->addMsg(&rhs);
// }

// int main()
// {
//     Message m;
//     return 0;
// }

// //����Դ��  p470 13.44
// #ifndef STRING_H
// #define STRING_H
// #endif
// #include <cstring>
// using std::strlen;
// #include <algorithm>
// using std::copy;
// #include <cstddef>
// using std::size_t;
// #include <iostream>
// using std::ostream;

// #include <utility>
// using std::swap;

// #ifdef INITIALIZER_LIST
// #include <initializer_list>
// #endif

// #include <iostream>
// #include <memory>
// using std::uninitialized_copy;

// //define the static allocator member

// class String
// {
//     friend String operator+(const String &, const String &);
//     friend String add(const String &, const String &);
//     friend std::ostream &operator<<(std::ostream &, const String &);
//     friend std::ostream &print(std::ostream &, const String &);

// public:
// #if defined(IN_CLASS_INITS) && defined(DEFAULT_FCNS)
//     String() = default;
// #else
//     String() : sz(0), p(nullptr)
//     {
//     }
// #endif
//     //cp points to a null terminated array;
//     //allocate new memory & copy the array
//     String(const char *cp) : sz(std::strlen(cp)), p(a.allocate(sz)) { std::uninitialized_copy(cp, cp + sz, p); }

//     //copy constructor::allocate a new copy of the characters in s
//     String(const String &s) : sz(s.sz), p(a.allocate(s.sz)) { std::uninitialized_copy(s.p, s.p + sz, p); }

// //move  constructor::allocate a new copy of the characters in s
// //no memory allocation or deallocation
// #ifdef NOEXCEPT
//     String(String &&s) noexcept : sz(s.size()), p(s.p)
// #else
//     String(String &&s) throw() : sz(s.size()), p(s.p)
// #endif
//     {
//         s.p = 0;
//         s.sz = 0;
//     }
//     String(size_t n, char c) : sz(n), p(a.allocate(n)) { std::uninitialized_fill_n(p, sz, c); }

//     //allocate a new copy of the data in the right-hand operand;
//     //delete the memory used by the left-hand operand
//     String &operator=(const String &);
// //move pointers front right- to left-hand operand
// #ifdef NOEXCEPT
//     String &operator=(String &&) noexcept;
// #else
//     String &operator=(String &&) throw();
// #endif

// //uncontionally delete the memory because each String has its own
// #ifdef NOEXCEPT
//     ~String() noexcept
//     {
//         if (p)
//             a.deallocate(p, sz);
//     }
// #else
//     ~String() throw()
//     {
//         if (p)
//             a.deallocate(p, sz);
//     }
// #endif

//     //additional assignment operators
//     String &operator=(const char *); //car="Studebaker"
//     String &operator=(char);         //model='T'
// #ifdef INITIALIZER_LIST
//     String &operator=(std::initializer_list<char>);
// #endif

//     const char *begin()
//     {
//         return p;
//     }
//     const char *begin() const
//     {
//         return p;
//     }
//     const char *end()
//     {
//         return p + sz;
//     }
//     const char *end() const
//     {
//         return p + sz;
//     }

//     size_t size() const { return sz; }
//     void swap(String &s)
//     {
//         auto tmp = p;
//         p = s.p;
//         s.p = tmp;
//         auto cnt = sz;
//         sz = s.sz;
//         s.sz = cnt;
//     }
//     char &operator[](size_t n) { return (char)p[n]; }
//     const char &operator[](size_t n) const { return (char)p[n]; }

// private:
// #ifdef IN_CLASS_INITS
//     std::size_t sz = 0;
//     char *p = nullptr;
// #else
//     std::size_t sz;
//     char *p;
// #endif
//     static std::allocator<char> a;
// };

// std::allocator<char> String::a;
// //����
// String &String ::operator=(const String &rhs)
// {
//     auto newp = a.allocate(rhs.sz);
//     uninitialized_copy(rhs.p, rhs.p + sz, newp);

//     if (p)
//         a.deallocate(p, sz); //free memory used by the left-hand
//     p = newp;                //p now points to the newly allocated string
//     sz = rhs.sz;
//     return *this;
// }

// //move assinment operator
// #ifdef NOEXCEPT
// String &String ::operator=(String &&rhs) noexcept
// #else
// String &String::operator=(String &&rhs) throw()
// #endif
// {
//     //explicit check for self-assignment
//     if (this != &rhs)
//     {
//         if (p)
//             a.deallocate(p, sz); //
//         p = rhs.p;
//         sz = rhs.sz;
//         rhs.p = 0; //delete rhs.p is safe;
//         rhs.sz = 0;
//     }
//     return *this;
// }

// String &String::operator=(const char *cp)
// {
//     if (p)
//         a.deallocate(p, sz);
//     p = a.allocate(sz = strlen(cp));
//     uninitialized_copy(cp, cp + sz, p);
//     return *this;
// }
// String &String::operator=(char c)
// {
//     if (p)
//         a.deallocate(p, sz);
//     p = a.allocate(sz = 1);
//     *p = c;
//     return *this;
// }

// #ifdef INITIALIZER_LIST
// String &String::operator=(initializer_list<char> il)
// {
//     //no need to check for self_assinment
//     if (p)
//         a.deallocate(p, sz);
//     p = a.allocate(sz = il.size());
//     uninitialized_copy(il.begin(), il.end(), p);
//     return *this;
// }
// #endif

// //named functions for operators
// ostream &print(ostream &os, const String &s)
// {
//     auto p = s.begin();
//     while (p != s.end())
//         os
//             << *p++;
//     return os;
// }
// String add(const String &lhs, const String &rhs)
// {
//     String ret;
//     ret.sz = rhs.size() + lhs.size();   //String�ĺ�
//     ret.p = String::a.allocate(ret.sz); //allocate new space
//     uninitialized_copy(lhs.begin(), lhs.end(), ret.p);
//     uninitialized_copy(rhs.begin(), rhs.end(), ret.p + lhs.sz);
//     return ret;
// }

// //return plural version of word if ctr isn't 1
// String make_plural(size_t ctr, const String &word, const String &ending)
// {
//     return (ctr != 1) ? add(word, ending) : word;
// }

// //
// ostream &operator<<(ostream &os, const String &s)
// {
//     return print(os, s);
// }
// String operator+(const String &lhs, const String &rhs)
// {
//     return add(lhs, rhs);
// }

// int main()
// {
//     String s;
//     return 0;
// }

//p514

// #include<stdexcept>
// class SmallInt{
//     public:
//     SmallInt(int i=0):val(i)
//     {
//         if(i<0||i>255)
//         throw std:: out_of_range("Bad SmallInt value");

//     }
//     operator int()const {return val;}
//     private:
//     std::size_t val;
// };

// int main()
// {
//     SmallInt si;
//     si=4;
//     si+3;
//     return 0;
// }

// #include<string>
// #include<iostream>
// class PrintSting{
//     public:
//     PrintSting(ostream&o=cout,char c=' '):os(o),sep(c){}
//     void operator()(const string &s)const {os<<s<<sep;}

//     private:
//     ostream &os;
//     char sep;
// };

// int main()
// {
//     std::string s="ddd";
//     PrintSting printer;
//     printer(s);
//     PrintSting errors(cerr,'\n');
//     errors(s);
//     return 0;
// }

// class IfThemElse
// {
// public:
//   IfThemElse(){}
//     IfThemElse(int a , int b , int c ) : A(a), B(b), C(c) {}
//     int operator()(int a, int b, int c) const
//     {
//         if (a > 3)
//             return b;
//         else
//             return c;
//     }

// private:
//     int A;
//     int B;
//     int C;
// };

// int main()
// {
//     IfThemElse i;
//     auto a = i(1, 2, 4);
//     return 0;
// }

// #include <string>
// #include <iostream>
// class ReadString
// {
// public:
//     ReadString(istream &is = cin) : is(is) {}
//     std::string operator()()
//     {

//         std::string line;
//         if (!getline(is, line))
//         {
//             line = " ";
//         }
//         return line;
//     }

// private:
//     istream &is;
// };
// #include<vector>
// #include<iostream>
// int main()
// {
//     std::string s;
//     std::vector<std::string> svec;
//     while(cin>>s)
//     {
//     ReadString rs(cin);
//      svec.push_back(rs());
//     }
//     return 0;
// }

// class IntCompare{
//     public:
//     IntCompare(int v):val(v){}
//     bool operator()(int v){return val==v;}
//     private:
//     int val;
// };

// #include<algorithm>
// #include<vector>
// int main()
// {
//     std::vector<int>vec={1,2,3,4};
//     const int oldValue=2;
//     const int newValue=200;
//     IntCompare icmp(oldValue);
//     std::replace_if(vec.begin(),vec.end(),icmp,newValue);

//     return 0;

// }

// #include <ctime>
// #include <vector>
// #include <iostream>
// struct A
// {
//     /* data */
//     double a;
//     double b;
//     double c;
//     double d;
//     A() : a(1.0), b(1.0), c(1.0), d(1.0) {}
//     A(double a1, double b1, double c1, double d1) : a(a1),
//                                                     b(b1), c(c1), d(d1) {}
// };
// struct B
// {
//     /* data */

//     std::vector<double> B1;
//     B() : B1(std::vector<double>(4, 1.0)) {}
// };
// inline B operator*(const double &d, const B &b)
// {
//     B b1;
//     b1.B1[0] = d * b.B1[0];
//     b1.B1[1] = d * b.B1[1];
//     b1.B1[2] = d * b.B1[2];
//     b1.B1[3] = d * b.B1[3];
//     return b1;
// }
// inline A operator*(const B &b1, const A &a1)
// {
//     return A(b1.B1[0] * a1.a, b1.B1[1] * a1.b, b1.B1[2] * a1.c, b1.B1[3] * a1.d);
// }
// int main()
// {
//     // A a;
//     std::vector<std::vector<A>> avec;
//     // std::vector<std::vector<std::vector<double>>> avec1;
//     int as = 3000;
//     B B2;
//     std::clock_t start, end;
//     start = std::clock();
//     avec.resize(as);
//     for (int i = 0; i < as; ++i)
//         avec[i].resize(as);
//     for (int i = 0; i < as; ++i)
//         for (int j = 0; j < as; ++i)
//             auto a23 = B2 * avec[i][j];
//     // avec1.resize(as);
//     // for (size_t i = 0; i < as; ++i)
//     // {
//     //     avec1[i].resize(as);
//     //     for (size_t j = 0; j < as; ++j)
//     //         avec1[i][j].resize(4);
//     // }
//     // end = std::clock();
//     double time_dura = double(end - start);
//     std::cout << time_dura << std::endl;
//     std::system("pause");

//     return 0;
// }

// //��ʼ����
// #include<iostream>
// #include<functional>
// using std::function;
// int main()
// {

//      function<int(int,int)> f1=add;//����ָ��
//      function<int(int,int)>f2=divides();//����������Ķ���
//      function<int(int,int)>f3=[](int i,int j){return i*j;}
//      std::cout<<f1(4,2)<<std::endl;
//      std::cout<<f2(4,2)<<std::endl;
//      std::cout<<f3(4,2)<<std::endl;

//      return 0;

// }

// #include<memory>
// #include<string>
// #include<unordered_map>
// int main()
// {
//     using UPtrMapSS=std::unique_ptr<std::unordered_map<std::string,std::string>>;
//     return 0;
// }

// #include<vector>
// #include<algorithm>
// #include<iostream>
// using namespace std;
// int main()
// {
//     vector<vector<double>> dvec={{1,2,3},{2,3,4}};
//     auto de=min_element(dvec.begin(),dvec.end(),[](const vector<double>&v1,const vector<double>&v2){return });
//     auto de1=min_element((*de).begin(),(*de).end());
//     auto dev=*de1;

//     auto dev=1+1;
//     return 0;
// }

// // ����ѧϰ��12�£���̬�ڴ�
// //ʹ��padԶ�̵��Բ���
// #include <string>
// #include <memory>
// #include <vector>
// #include <stdexcept>
// using namespace std;
// class StrBlob
// {
// public:
//     typedef std::vector<std::string>::size_type size_type;
//     StrBlob();
//     StrBlob(std::initializer_list<std::string> i1);
//     size_type size() const { return data->size(); }
//     bool empty() const { return data->empty(); }
//     //����Ԫ��
//     void push_back(const std::string &t) { data->push_back(t); }
//     void pop_back();
//     std::string &front();
//     std::string &back();
//     const std::string& front()const;
//     const std::string &back()const ;
// private:
//     std::shared_ptr<std::vector<std::string>> data;
//     //���data[i]���Ϸ����׳�һ���쳣
//     void check(size_type i, const std::string &msg) const;
// };
// StrBlob::StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}
// StrBlob::StrBlob(std::initializer_list<std::string> i1) : data(std::make_shared<std::vector<std::string>>(i1)) {}
// void StrBlob::check(size_type i, const std::string &msg) const
// {
//     if (i >= data->size())
//         throw out_of_range(msg);
// }
// std::string &StrBlob::front()
// {
//     check(0, "front on empty strblob");
//     return data->front();
// }
// std::string &StrBlob::back()
// {
//     check(0, "back on empty strblob");
//     return data->back();
// }

// const std::string &StrBlob::front()const
// {
//     check(0, "front on empty strblob");
//     return data->front();
// }
// const std::string &StrBlob::back()const
// {
//     check(0, "back on empty strblob");
//     return data->back();
// }
// void StrBlob::pop_back()
// {
//     check(0, "pop_back on empty strblob");
//     data->pop_back();
// }

// int main()
// {
//     StrBlob s, s1;
//     s.push_back("rer");
//     s1 = s;
//     s.push_back("is");
//     auto size = s1.size();
//     return 0;
// }

// #include <memory>
// #include <string>
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     // int n = 10;
//     // allocator<string> alloc;
//     // auto const p = alloc.allocate(n);
//     // auto q = p;
//     // alloc.construct(q++, "ss");
//     // auto ss = *(q - 1);
//     // cout << ss << endl;
//     vector<double> ivec(4, 3);
//     allocator<int> alloc;
//     auto p = alloc.allocate(ivec.size() * 2);
//     auto q = uninitialized_copy(ivec.begin(), ivec.end(), p);
//     auto end = uninitialized_fill_n(q, ivec.size(), 3);
//     while (end != p)
//     {
//         alloc.destroy(--end) ;
//     }
//     auto maxs=alloc.max_size();

//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     const char *c1="hello";
//     const char *c2="world";
//     //�ַ�������ռ�����ַ���+1
//     char *r=new char[strlen(c1)+strlen(c2)+1];

//     strcpy(r,c1);
//     strcat(r,c2);
//     cout<<r<<endl;

//     string s1="hello";
//     string s2="world";
//     strcpy(r,(s1+s2).c_str());//�������ӽ��
//     cout <<r<<endl;

//     delete[]r;
//     return 0;
// }

// //p430 �ı���ѯ����
// #include<iostream>
// #include<fstream>
// #include <string>
// #include<vector>
// #include<map>
// #include<set>
// using namespace std;
// class TextQuery{
//     public:
//     private:
//     vector<string> file_content;

// };

// void runQueries(ifstream &infile)
// {
//     //infile��һ��ifstream��ָ������Ҫ�������ļ�
//     TextQuery tq(infile);//�����ļ���������ѯmap
//     //���û���������ʾ�û�����Ҫ��ѯ�ĵ��ʣ���ɲ�ѯ����ӡ���
//     while(true){
//         cout<<"enter word to look for ,or q to quit:";
//         string s ;
//         //�������ļ�β���û������ˡ�q'ʱ��ֹ
//         if(!(cin>>s)||s=='q') break;
//         //ָ���ѯ����ӡ���
//         print(cout,tq.query(s))<<endl;
//     }
// }

// //c++��׼�� �㷨
// #include <algorithm>
// #include <vector>
// #include <iostream>
// using namespace std;
// int main()
// {
//     vector<int> coll = {1, 2, 3, 4, 5, 5, 6, 6};
//     int num;
//     //����4������
//     num = count(coll.cbegin(), coll.cend(), 4);
//     cout << "���� 4 ��Ԫ����Ŀ" << num << endl;

//     num = count_if(coll.cbegin(), coll.cend(), [](int elem) { return elem % 2 == 0; });
//     cout << "ż����������" << num << endl;

//     return 0;
// }

// #include <cstdlib>
// #include <deque>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     deque<int> coll{-3, -1, 2, 3, 4, 5, 5, 6, 66779, 342, 66779};

//     cout << "��Сֵ" << *min_element(coll.cbegin(), coll.cend()) << endl;
//     cout << "���ֵ" << *max_element(coll.cbegin(), coll.cend()) << endl;

//     auto mm = minmax_element(coll.cbegin(), coll.cend());
//     cout << "��Сֵ" << *mm.first << "���ֵ" << *mm.second << endl;
//     cout << "���ֵ����Сֵ��ľ���" << distance(mm.first, mm.second) << endl;
//     cout << "����ֵ�е���Сֵ" << *min_element(coll.cbegin(), coll.cend(), [](int ele1, int ele2) { return abs(ele1) < abs(ele2); });

//     return 0;
// }

// #include <list>
// #include <algorithm>
// #include <iostream>
// #include <iterator>
// using namespace std;

// int main()
// {
//     //�ҵ���ͷ�ͽ�β��Ϊ4������
//     list<int> coll{1, 2, 3, 4, 5, 5, 6, 4, 6};
//     list<int>::iterator pos1;
//     pos1 = find(coll.cbegin(), coll.cend(),4);

//     //���ֵ�2������4��λ��
//     list<int>::iterator pos2;
//     if (pos1 != coll.end())
//         pos2 = find(++pos1, coll.end(), 4); //����������ʹ��auto����pos2

//     //����4��4���������ӡ������������ͷ�ͽ�β)
//     if (pos1 != coll.end() && pos2 != coll.end())
//     {
//         copy(--pos1, ++pos2, ostream_iterator<int>(cout, " "));
//     }
//     return 0;
// }

// #include <boost/lambda/lambda.hpp>
// #include <iostream>
// #include <iterator>
// #include <algorithm>

// int main()
// {
//     using namespace boost::lambda;
//     typedef std::istream_iterator<int> in;

//     std::for_each(
//         in(std::cin), in(), std::cout << (_1 * 3) << " " );
//         return 0;
// }

// template <typename It> //����β�÷�������
// auto fcn(It beg, It end) -> decltype(*beg)
// {
//     //
//     return *beg;
// }

// #include <string>
// #include <sstream>
// #include <iostream>
// template <typename T>
// std::string debug_rep(const T &t)
// {
//     std::ostringstream ret;
//     ret << t;
//     return ret.str(); //����ret�󶨵�string��һ������
// }
// //��ӡָ���ֵ�����ָ��ָ��Ķ���
// //ע��˺�����������char*
// template <typename T>
// std::string debug_rep(T *p)
// {
//     std::ostringstream ret;
//     ret << "pointer" << p;
//     if (p)
//     {
//         ret << " " << debug_rep(*p); //��ӡpָ���ֵ
//     }
//     else
//         ret << "null pointer"; //  ��ָ��pΪ��
//     return ret.str();
// }
// std::string debug_rep(const std::string &s)
// {
//     return '"' + s + '"';
// }
// std::string debug_rep(char *p)
// {
//     return debug_rep(std::string(p));
// }
// std::string debug_rep(const char *p)
// {
//     return debug_rep(std::string(p));
// }
// int main()
// {
//     //std::string s("hi");
//     std::cout << debug_rep("hi world") << std::endl;
//     //std::cout<<debug_rep(s)<<std::endl;
//     //std::cout<<debug_rep(&s)<<std::endl;

//     return 0;
// }

// //������ֹ�ݹ鲢��ӡ���һ��Ԫ�صĺ���
// //�˺��������ڿɱ�����汾��print����֮ǰ����
// #include<iostream>
// using namespace std;
// template<typename T>
// std::ostram &print(ostream& os,const T&t)
// {
//     return os<<t;//�������һ��Ԫ��֮�󲻴�ӡ�ָ���
// }
// //���г������һ��Ԫ��֮�������Ԫ�ض����������汾��print

// template<typename T,typename... Args>
// ostream &print(ostream&os,const T&t,const Args&...rest)
// {
//     os<<t<<", ";//��ӡ��һ��ʵ��
//     return print(os,rest...);//�ݹ���ã���ӡ����ʵ��
// }

// //p375��������
// #include<map>
// #include<string>
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"dfdss"<<endl;
//     map<string,size_t> word_count;//string ��size_t�Ŀ�map
//     string word;
//     while(cin>>word)
//     ++word_count[word];
//     for(const auto &w:word_count)
//     cout<<w.first<<" occurs"<<w.second<<((w.second>1)?" times":"time")<<endl;
//     system("pause");
//     return 0;
// }

// //p381 11.12 11.13
// #include <utility>
// #include <string>
// #include <vector>
// #include <iostream>
// using namespace std;
// int main()
// {
//     string s;
//     int i;
//     pair<string, int> si;
//     vector<pair<string, int>> vsi;
//     while (cin >> s >> i)
//     {
//         si = make_pair(s, i);//����1
//         si = {s, i};//����2
//         vsi.push_back(si);
//         vsi.push_back({s, i}); //����3
//     }
//     std::system("pause");
//     return 0;
// }

// #include<new>
// #include<iostream>
// int main()
// {
//     auto * buf=new int[3];
//     auto * pc=new(buf+1)int(1);
//     std::cout<<*pc<<std::endl;
//     return 0;
// }
// #include <memory>
// #include <cstdlib>
// #include <string>
// #include<iostream>
// class allocator
// {
// private:
//     struct obj
//     {
//         /* data */
//         struct obj *next; //嵌入式指针
//     };

// public:
//     void *allocate(std::size_t);
//     void deallocate(void *, std::size_t);

// private:
//     obj *freeStore = nullptr;
//     const int CHUNK = 5;
// };
// void *allocator::allocate(std::size_t size)
// {
//     obj *p;
//     if (!freeStore)
//     {
//         //linked list为空，于是申请一大块
//         std::size_t chunk = CHUNK * size;

//         freeStore = p = (obj *)std::malloc(chunk);
//         //将分配的来的一大块内存当作linked list般
//         //小块小块串联起来
//         for (int i = 0; i < (CHUNK - 1); ++i)
//         {
//             p->next = (obj *)((char *)p + size);
//             p = p->next;
//         }
//         p->next = nullptr; //last
//     }
//     p = freeStore;
//     freeStore = freeStore->next;
//     return p;
// }
// void allocator::deallocate(void *p, size_t)
// {
//     //将*p收回插入free_list 前端
//     ((obj *)p)->next = freeStore;
//     freeStore = (obj *)p;
// }

// //foo
// class Foo
// {
// public:
//     long L;
//     std::string str;
//     static allocator myAlloc;

// public:
//     Foo(long I) : L(I) {}
//     static void *operator new(size_t size)
//     {
//         return myAlloc.allocate(size);
//     }
//     static void operator delete(void *pdead, size_t size)
//     {
//         return myAlloc.deallocate(pdead, size);
//     }
// };
// allocator Foo::myAlloc;

// #include<memory>
// int main()
// {
//     Foo* p[100];
//     std::cout<<"sizeof(Foo)="<<sizeof(Foo)<<std::endl;
//     for(int i=0;i<23;++i)
//     {
//         p[i]=new Foo(i);
//         std::cout<<p[i]<<' '<<p[i]->L<<std::endl;
//     }
//     for(int i=0;i<23;++i)
//     delete p[i];

//     return 0;
// }

// #include <ctime>
// #include <vector>
// #include<memory>
// #include <iostream>
// struct A
// {
//     /* data */
//     double a;
//     double b;
//     double c;
//     double d;
//     A() : a(0.0), b(0.0), c(0.0), d(0.0) {}
//     A(double a1, double b1, double c1, double d1) : a(a1),
//         b(b1), c(c1), d(d1) {}
// };
// int main()
// {
//     A a;
//     std::vector<std::vector<A>> dvec0;
//     std::vector<std::vector<std::vector<double>>> dvec1;
//     std::vector<std::vector<std::vector<double>>> dvec2;
//     int size = 5000;
//     std::clock_t start, end;
//     start = std::clock();

//     //案例dvec0,大小为[5000][5000][A]，共25,000,000*A共一亿个double数据
//     // dvec0.resize(size);
//     // for (int i = 0; i < size;++i)
//     //     dvec0[i].resize(size);

//     //案例dvec1,大小为[5000][5000][4]，共25,000,000*4共一亿个double数据
//     dvec1.resize(size);
//     for (std::vector<std::vector<double>>::size_type i = 0; i < size; ++i)
//     {
//        dvec1[i].resize(size);
//        for (std::vector<double>::size_type j = 0; j < size; ++j)
//            dvec1[i][j].resize(4);
//     }

//     ////案例dvec2,大小为[4][5000][5000]，共4*25,000,000共一亿个double数据
//     //dvec2.resize(4);
//     //for (std::vector<std::vector<double>>::size_type i = 0; i < 4; ++i)
//     //{
//     //    dvec2[i].resize(size);
//     //    for (std::vector<double>::size_type j = 0; j < size; ++j)
//     //        dvec2[i][j].resize(size);
//     //}

//     //案例4 dvec0,直接初始化

//     //std::vector<std::vector<A>>dvec0(size, std::vector<A>(size, a));
//     end = std::clock();
//     double time_dura = double(end - start);
//     std::cout << time_dura << std::endl;
//     std::system("pause");
//     return 0;
// }

// #include <map>
// #include <string>
// #include <fstream>
// #include <iostream>
// #include <sstream>
// using namespace std;

// const string &
// tranform(const string &s, const map<string, string> &m)
// {
//     //实际的转换工作，此部分是程序的核心
//     auto map_it = m.find(s);
//     //如果单词在转换规则中
//     if (map_it != m.end())
//         return map_it->second;
//     else
//         return s;
// }
// map<string, string> buildMap(ifstream &map_file)
// {
//     map<string, string> trans_map; //保存转换规则
//     string key;
//     string value;
//     //读取第一个单词存入key中，剩余部分存入value中
//     while (map_file >> key && getline(map_file, value))
//         if (value.size() > 1)                 //检出是否有转换规则
//             trans_map[key] = value.substr(1); //跳过前导空格
//         else
//             throw runtime_error("no rule for" + key);
//     return trans_map;
// }
// void word_transform(ifstream &map_file, ifstream &input)
// {
//     auto trans_map = buildMap(map_file); //保存转换规则
//     string text;                         //保存输入中的每一行
//     while (getline(input, text))
//     {
//         istringstream stream(text); //读取一行输入
//         string word;
//         bool firstword = true;
//         while (stream >> word)
//         {
//             if (firstword)
//                 firstword = false;
//             else
//                 cout << " "; //在单词间打印一个空格
//             //transform返回它第一个参数或其转换之后的形式
//             cout << tranform(word, trans_map); //打印输出
//         }
//         cout << endl;
//     }
// }
// int main()
// {

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// struct Xy
// {
//     /* data */
//     double x;
//     double y;
//     Xy():x(0.0),y(0.0){}
//     Xy(double x1,double y1):x(x1),y(y1){}
//     bool operator==( const Xy& rhs)const;
// };
// bool Xy::operator==(const Xy& rhs)const
// {
//     return (x==rhs.x&&y==rhs.y);
// }
// // bool operator==(const Xy&lhs,const Xy&rhs)
// // {
// //     return (lhs.x==rhs.x&&lhs.y==rhs.y);
// // }

// int main()
// {
//     Xy xy1,xy2;
//     //auto b1=xy1==xy2;
//     std::vector<Xy> xyv;
//     xyv.resize(4);
//     auto it=std::find_if(xyv.begin(),xyv.end(),[xy1] (const Xy& rhs) {return xy1==rhs;} );
    
//     std::vector<int>ivec={1,2,3};
//     std::vector<int> ivec0 = {1, 2, 3, 4, 4, 4, 5, 6, 7};
//     int des = 4;
//     for(auto it=ivec0.begin();it!=ivec0.end();++it)
//     {
//         if(*it==des)
//         ivec0.erase(it);
//     }

//     return 0;
// }

// #include <boost/numeric/ublas/vector.hpp>
// #include <boost/numeric/ublas/io.hpp>

// int main () {
//     using namespace boost::numeric::ublas;
//     for (int i = 0; i < 3; ++ i) {
//         unit_vector<double> v (3, i);
//         std::cout << v << std::endl;
//     }
// }

// // Copyright 2008 Gunter Winkler <guwi17@gmx.de>
// // Distributed under the Boost Software License, Version 1.0. (See
// // accompanying file LICENSE_1_0.txt or copy at
// // http://www.boost.org/LICENSE_1_0.txt)

// // switch automatic singular check off
// #define BOOST_UBLAS_TYPE_CHECK 0

// #include <boost/numeric/ublas/io.hpp>
// #include <boost/numeric/ublas/lu.hpp>
// #include <boost/cstdlib.hpp>

// #include "common/testhelper.hpp"

// #include <iostream>
// #include <sstream>

// using namespace boost::numeric::ublas;
// using std::string;

// static const string matrix_IN = "[3,3]((1,2,2),(2,3,3),(3,4,6))\0";
// static const string matrix_LU = "[3,3]((3,4,6),(3.33333343e-01,6.66666627e-01,0),(6.66666687e-01,4.99999911e-01,-1))\0";
// static const string matrix_INV= "[3,3]((-3,2,-7.94728621e-08),(1.50000012,0,-5.00000060e-01),(4.99999911e-01,-1,5.00000060e-01))\0";
// static const string matrix_PM = "[3](2,2,2)";

// int main () {

//   typedef float TYPE;

//   typedef matrix<TYPE> MATRIX;

//   MATRIX A;
//   MATRIX LU;
//   MATRIX INV;
  
//   {
//     std::istringstream is(matrix_IN);
//     is >> A;
//   }
//   {
//     std::istringstream is(matrix_LU);
//     is >> LU;
//   }
//   {
//     std::istringstream is(matrix_INV);
//     is >> INV;
//   }
//   permutation_matrix<>::vector_type temp;
//   {
//     std::istringstream is(matrix_PM);
//     is >> temp;
//   }
//   permutation_matrix<> PM(temp);

//   permutation_matrix<> pm(3);
    
//   std::size_t result = lu_factorize<MATRIX, permutation_matrix<> >(A, pm);

//   assertTrue("factorization completed: ", 0 == result);
//   assertTrue("LU factors are correct: ", compare(A, LU));
//   assertTrue("permutation is correct: ", compare(pm, PM));

//   MATRIX B = identity_matrix<TYPE>(A.size2());

//   lu_substitute(A, pm, B);

//   assertTrue("inverse is correct: ", compare(B, INV));    

//   return (getResults().second > 0) ? boost::exit_failure : boost::exit_success;
// }

