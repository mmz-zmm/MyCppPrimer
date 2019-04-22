#include "include/13_34_Messages.h"
#include <iostream>

void Message::save(Folder &f)
{
    std::cout << "==add message to folder==\n";
    addFolder(&f);
    f.addMsg(this);
}
void Message::remove(Folder &f)
{
    std::cout << "==remove message from folder==\n";
    remFolder(&f);
    f.remMsg(this);
}

void Message::add_to_Folders(const Message &m)
{
    for(auto f:m.folders)
    {
        f->addMsg(this);
    }
}

Message::Message(const Message& m):contents(m.contents),folders(m.folders)
{
    add_to_Folders(m);
}

void Message::remove_from_Folders()
{
    for(auto f: folders)
    {
        f->remMsg(this);
    }
}
Message::~Message()
{
    remove_from_Folders();
}

Message& Message::operator=(Message rhs)
{
    swap(*this, rhs);
    return *this;
}
void swap(Message& lhs, Message& rhs)
{
    using std::swap;
    std::cout << "==Swap Messages==\n";
    for(auto f: lhs.folders)
        f->remMsg(&lhs);

    for(auto f: rhs.folders)
        f->remMsg(&rhs);

    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);

    for(auto f:lhs.folders)
        f->addMsg(&lhs);

    for(auto f:rhs.folders)
        f->addMsg(&rhs);
}

Folder::Folder(const Folder& f):messages(f.messages)
{
    add_to_Messages(f);
}
Folder& Folder::operator=(Folder rhs)
{
    swap(*this, rhs);
    return *this;
}
Folder::~Folder()
{
    remove_from_Messages();
}

void Folder::add_to_Messages(const Folder& f)
{
    for(auto m : f.messages)
        m->addFolder(this);
}

void Folder::remove_from_Messages()
{
    for(auto m:messages)
        m->remFolder(this);
}

void swap(Folder&lhs, Folder&rhs)
{
    std::cout << "==Swap Foldes.==\n";
    using std::swap;
    lhs.remove_from_Messages();
    rhs.remove_from_Messages();
    swap(lhs.messages, rhs.messages);
    lhs.add_to_Messages(lhs);
    rhs.add_to_Messages(rhs);
}
std::ostream & operator<< (std::ostream& out, const Message&m)
{
    out << m.contents;
    return out;
}
std::ostream & operator<< (std::ostream& out, const Folder&f)
{
    for(auto m : f.messages)
        out << *m <<" ";
    return out;
}
int main()
{
    Message mail_1("hello");
    Message mail_2("world");
    Folder mailBox_1;


    std::cout << mail_1 << "\n";
    mail_1.save(mailBox_1);
    std::cout << mailBox_1 << "\n";

    std::cout << mail_2 << "\n";
    mail_2.save(mailBox_1);
    std::cout << mailBox_1 << "\n";

    mail_1 = mail_1;
    std::cout << mailBox_1 << "\n";

    Folder mailBox_2(mailBox_1);
    Message mail_3("My dear lover");
    mail_3.save(mailBox_2);

    Message mail_4 = mail_1;
    mail_4.save(mailBox_2);
    std::cout << mailBox_2 << "\n";

    Folder mailBox_3;
    mailBox_3 = mailBox_2;
    std::cout << mailBox_3 << "\n";

    return 0;
}