#pragma once
#include <set>
#include <string>
#include <iostream>

class Folder;

class Message{
    friend class Folder;
    friend void swap(Message &lhs, Message &rhs);
    friend void swap(Folder &lhs, Folder &rhs);
    friend std::ostream & operator<< (std::ostream& out, const Message &m);
    friend std::ostream &operator<<(std::ostream &out, const Message &m);

  public:
    explicit Message(const std::string &str = "") : contents(str) {}

      Message(const Message &);
      Message &operator=(const Message& );
      ~Message();

      void save(Folder &);
      void remove(Folder &);

    private:
      std::string contents;
      std::set<Folder *> folders;
      void add_to_Folders(const Message &);
      void remove_from_Folders();
      void addFolder(Folder * f) { folders.insert(f); }
      void remFolder(Folder * f) { folders.erase(f); }
};

class Folder{
    public:
      friend class Message;
      friend std::ostream & operator<< (std::ostream& out, const Folder &f);
      friend void swap(Message &lhs, Message &rhs);
      friend void swap(Folder &lhs, Folder &rhs);
      Folder() = default;
      Folder(const Folder &);
      Folder &operator=(const Folder&);
      ~Folder();

    private:
      std::set<Message *> messages;
      void add_to_Messages(const Folder &);
      void remove_from_Messages();
      void addMsg(Message *m) { messages.insert(m); }
      void remMsg(Message *m) { messages.erase(m); }
};

void swap(Message &lhs, Message &rhs);
void swap(Folder &lhs, Folder &rhs);      
std::ostream & operator<< (std::ostream& out, const Message&m);
std::ostream & operator<< (std::ostream& out, const Folder &f);
