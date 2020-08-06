#pragma once
#include<string>
#include"Window_mgr.h"

class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
	ScreenIndex addScreen(const Screen&);
private:
	std::vector<Screen>screens{ Screen(24,80,' ') };
};
class Screen {
	friend class Window_mgr;
	//friend void Window_mgr::clear(ScreenIndex);
public:
	typedef std::string::size_type pos;
	Screen() = default;//
	//cursor �������ڳ�ʼֵ��ʼ��Ϊ0
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) {}
	char get()const { return contents[cursor]; }//��ȡ�����ַ�
	inline char get(pos ht, pos wd)const;//��ʽ����
	Screen& move(pos r, pos c);//����֮����Ϊ����
	void some_member()const;
	Screen& set(char);
	Screen& set(pos, pos, char);
	//���ݶ����Ƿ���const������display����
	Screen& display(std::ostream& os)
	{
		do_display(os); return *this;
	}
	const Screen& display(std::ostream& os)const
	{
		do_display(os); return *this;
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable size_t access_ctr;
	void do_display(std::ostream& os)const { os << contents; }
};

inline 
Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;//�����е���i֮
	cursor = row + c;//�����ڽ�����ƶ���ָ������
	return *this;//����ֵ����ʽ���ض���
}

char Screen::get(pos r, pos c)const {
	pos row = r * width;
	return contents[row + c];//���ظ����е��ַ�
}
void Screen::some_member()const
{
	++access_ctr;
}
Screen& Screen::set(char c)
{
	contents[cursor] = c;//���õ�ǰ�������λ�õ���ֵ
	return *this;
}
Screen& Screen::set(pos r, pos col, char ch)
{
	contents[r * width+col] = ch;
	return *this;//��this������Ϊ����ֵ
}


void Window_mgr::clear(ScreenIndex i)
{
	Screen& s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
	

}
Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen& s) {
	screens.push_back(s);
	return screens.size() - 1;
}



























