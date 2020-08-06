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
	//cursor 被其类内初始值初始化为0
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) {}
	char get()const { return contents[cursor]; }//读取光标的字符
	inline char get(pos ht, pos wd)const;//显式内联
	Screen& move(pos r, pos c);//能在之后被设为内联
	void some_member()const;
	Screen& set(char);
	Screen& set(pos, pos, char);
	//根据对象是否是const重载了display函数
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
	pos row = r * width;//计算行的我i之
	cursor = row + c;//在行内将光标移动到指定的列
	return *this;//以左值的形式返回对象
}

char Screen::get(pos r, pos c)const {
	pos row = r * width;
	return contents[row + c];//返回给定列的字符
}
void Screen::some_member()const
{
	++access_ctr;
}
Screen& Screen::set(char c)
{
	contents[cursor] = c;//设置当前光标所在位置的新值
	return *this;
}
Screen& Screen::set(pos r, pos col, char ch)
{
	contents[r * width+col] = ch;
	return *this;//将this对象作为返回值
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



























