/*
 * @Author: your name
 * @Date: 2020-07-30 20:33:12
 * @LastEditTime: 2020-07-30 20:41:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \20200119-1\20200119.cpp
 */
 //#include <string>
 //#include <iostream>
 //#include<regex>
 //int main()
 //{
	 ////���Ҳ����ַ�c֮����ַ���ei
	 //std::string pattern("[^c]ei");
	 ////������Ҫ����pattern����������
	 //pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	 //std::regex r(pattern);//����һ�����ڲ���ģʽ��regex
	 //std::smatch results;//����һ�����󱣴��������
	 ////����һ��string������ģʽƥ��Ͳ�ƥ����ı�
	 //std::string  test_str = "receipt friend theif receive";
	 ////��r��test_str�в�����patternƥ����Ӵ�
	 //if (std::regex_search(test_str, results, r));
	 //std::cout << results.str() << std::endl;//��ӡƥ��ĵ���

	 ////һ�����߶����ĸ���������ַ����һ��'.'�ٽӡ�cpp����cxx������cc"
	 //std::regex r("[[:alpha:]]+\\.(cpp|cxx|cc)$", std::regex::icase);
	 //std::smatch results;
	 //std::string filename=std::string("F:\\personal\\course\\c-plus\\20200119-1\\20200119.cpp");
	 ////while (std::cin >> filename)
	 //	if (std::regex_search(filename, results, r))
	 //		std::cout << results.str() << std::endl;



	 ////���Ҳ����ַ�c֮����ַ���ei
	 //std::string pattern("[^c]ei");
	 ////������Ҫ����pattern����������
	 //pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	 //std::regex r(pattern);//����һ�����ڲ���ģʽ��regex
	 //std::smatch results;//����һ�����󱣴��������
	 ////����һ��string������ģʽƥ��Ͳ�ƥ����ı�
	 //std::string test_str;
	 //while (1)
	 //{
	 //	std::cout << "Enter a word ,or q to quit";
	 //	std::cin >> test_str;
	 //	if (test_str == "q")
	 //		break;

	 //	//��r��test_str�в�����patternƥ����Ӵ�
	 //	if (std::regex_search(test_str, results, r))
	 //		std::cout << results.str() << std::endl;
	 //}



 //	return 0;
 //}
 //
 //
 //#include<random>
 //#include<iostream>
 //#include<vector>
 //std::vector<unsigned> goog_randVec()
 //{
 //	//��������ϣ������ͷֲ����󱣳�״̬�����Ӧ��tamen
 //	//����Ϊstatic�ģ��Ӷ�ÿ�ε��ö������µ���
 //	static std::default_random_engine e;
 //	static std::uniform_int_distribution<unsigned> u(0, 9);
 //	std::vector<unsigned> ret;
 //	for (size_t i = 0; i < 100; ++i)
 //		ret.push_back(u(e));
 //	return ret;
 //}
 //int main()
 //{
 //	//std::uniform_int_distribution<unsigned> u(0, 9);
 //	//std::default_random_engine e;//��������޷�����
 //	//for (size_t i = 0; i < 10; ++i)
 //	//	//��u��Ϊ�����Դ
 //	//	//ÿ�����÷�����ָ����Χ�ڲ����Ӿ��ȷֲ���ֵ
 //	//	std::cout << u(e) << " ";
 //
 //
 //
 //
 //
 //
 //	return 0;
 //}



//	 /* The following code example is taken from the book
//  * "The C++ Standard Library - A Tutorial and Reference, 2nd Edition"
//  * by Nicolai M. Josuttis, Addison-Wesley, 2012
//  *
//  * (C) Copyright Nicolai M. Josuttis 2012.
//  * Permission to copy, use, modify, sell and distribute this software
//  * is granted provided this copyright notice appears in all copies.
//  * This software is provided "as is" without express or implied
//  * warranty, and with no claim as to its suitability for any purpose.
//  */
//#include <future>
//#include <thread>
//#include <chrono>
//#include <random>
//#include <iostream>
//#include <exception>
//using namespace std;
//
//void doSomething(char c)
//{
//	// random-number generator (use c as seed to get different sequences)
//	default_random_engine dre(c);
//	uniform_int_distribution<int> id(10, 1000);
//
//	// loop to print character after a random period of time
//	for (int i = 0; i < 10; ++i) {
//		this_thread::sleep_for(chrono::milliseconds(id(dre)));
//		cout.put(c).flush();
//	}
//}
//
//int main()
//{
//	cout << "starting 2 operations asynchronously" << endl;
//
//	// start two loops in the background printing characters . or +
//	auto f1 = async([] { doSomething('.'); });//��������
//	auto f2 = async([] { doSomething('+'); });
//
//	// if at least one of the background tasks is running
//	if (f1.wait_for(chrono::seconds(0)) != future_status::deferred ||
//		f2.wait_for(chrono::seconds(0)) != future_status::deferred) {
//		// poll until at least one of the loops finished
//		while (f1.wait_for(chrono::seconds(0)) != future_status::ready &&
//			f2.wait_for(chrono::seconds(0)) != future_status::ready) {
//			//...;
//			this_thread::yield();  // hint to reschedule to the next thread
//		}
//	}
//	cout.put('\n').flush();
//
//	// wait for all loops to be finished and process any exception
//	try {
//		f1.get();
//		f2.get();
//	}
//	catch (const exception& e) {
//		cout << "\nEXCEPTION: " << e.what() << endl;
//	}
//	cout << "\ndone" << endl;
//}

//#include <future>
//#include <list>
//#include <iostream>
//#include <exception>
//using namespace std;
//
//void task1()
//{
//	// endless insertion and memory allocation
//	// - will sooner or later raise an exception
//	// - BEWARE: this is bad practice
//	list<int> v;
//	while (true) {
//		for (int i = 0; i < 1000000; ++i) {
//			v.push_back(i);
//		}
//		cout.put('.').flush();
//	}
//}
//
//int main()
//{
//	cout << "starting 2 tasks" << endl;
//	cout << "- task1: process endless loop of memory consumption" << endl;
//	cout << "- task2: wait for <return> and then for task1" << endl;
//
//	auto f1 = async(task1);  // start task1() asynchronously (now or later or never)
//
//	cin.get();  // read a character (like getchar())
//
//	cout << "\nwait for the end of task1: " << endl;
//	try {
//		f1.get();  // wait for task1() to finish (raises exception if any)
//	}
//	catch (const exception& e) {
//		cerr << "EXCEPTION: " << e.what() << endl;
//	}
//}



//#include<thread>
//#include<iostream>
//using namespace std;
//void myprint()
//{
//	std::cout << "�ҵ��߳�ִ����" << std::endl;
//	std::cout << "�ҵ��߳̽�����" << std::endl;
//}

//class TA {
//public:
//	int& m_i;
//
//	TA(int& i) :m_i(i) {}
//	void operator()()
//	{
//		cout << "m_i" << m_i << endl;
//		std::cout << "�ҵ��߳�ִ����" << std::endl;
//			std::cout << "�ҵ��߳̽�����" << std::endl;
//		
//	}
//};

//void myprint(const int& i, char* pmybuf)
//{
//	cout << i << endl;
//	cout << pmybuf << endl;
//}
//int main()
//{
//	/*thread myobj(myprint);
//	thread myobj1(myprint);*/
//
//	//myobj1.join();
//	//myobj.join();//���߳�����������ȴ����߳�ִ����
//	/*myobj.detach();
//	myobj1.detach();*/
//	/*int myi = 6;
//	TA ta(myi);
//	thread myobj3(ta);
//	myobj3.detach();
//	cout << "I love China";*/
//
//	//������ʱ����
//	int mvar = 1;
//	int& mvary = mvar;
//	char mybuf[] = "this is a test";
//	thread mytobj(myprint, mvar, mybuf);
//	mytobj.join();
//	cout << "I love China"<<endl; 
//	return 0;
//}


//#include<thread>
//#include<iostream>
//using namespace std;
//class A {
//public:
//	int& m_i;
//
//	A(int i) :m_i(i) { cout << "�������캯��ִ��" << "thread" << std::this_thread::get_id() << endl; }
//	void operator()()
//	{
//		cout << "m_i" << m_i << endl;
//		std::cout << "�ҵ��߳�ִ����" << std::endl;
//			std::cout << "�ҵ��߳̽�����" << std::endl;
//	}
//};
//
//
//int main()
//{
//
//	return 0;
//}

//#include<thread>
//#include<iostream>
//#include<vector>
//using namespace std;
//const vector<int >g_v = { 1,2,3 };
//void myprint(int inum)
//{
//	cout << "�߳̿�ʼִ����" << inum << endl;
//	cout << "idΪ" << std::this_thread::get_id() << "���߳� ��ӡg_vֵ" << g_v[0] << g_v[1] << g_v[2] << endl;
//	cout << "�߳̽�����ִ��" << inum << endl;
//}
//
//int main()
//{
//	vector<thread> mythread;
//	for (int i = 0; i < 10; ++i)
//	{
//		mythread.push_back(thread(myprint, i));
//	}
//	for (auto it = mythread.begin(); it != mythread.end(); ++it)
//		it->join();
//
//	
//	cout << "I love China!";
//	return 0;
//}


#include "NoDefault.h"
#include"Employee.h"
int main()
{
	C c;
	Employee em;
	Employee em1 = em;
	return 0;

}




