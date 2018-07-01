#pragma once
#include <string>
#include <iostream>
#include <vector>
using std::ostream;
using std::string;
using std::vector;

class Screen;

class Windows_mgr{
    public:
      using ScreenIndex = vector<Screen>::size_type;
      void clear(ScreenIndex);
    private:
      vector<Screen> screens;
};

class Screen{
    public:
    typedef string::size_type pos;

    friend void Windows_mgr::clear(ScreenIndex);
    Screen() = default;
    Screen(pos ht, pos wd):height(ht),width(wd), contents(ht*wd,' '){}
    Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){}
    char get() const 
    {
        return contents[cursor];
    }
    inline char get(pos r, pos c) const;
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(ostream &os) { 
        do_display(os);
        return *this;
    }
    const Screen &display(ostream &os) const{
        do_display(os);
        return *this;
    }

  private:
    void do_display(ostream &os) const { os << contents; }

  private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};



inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos c, char ch)
{
    contents[r * width + c] = ch;
    return *this;
}
inline Screen & Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

void Windows_mgr::clear(ScreenIndex i)
{
    if(i >= screens.size())
        return;
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}