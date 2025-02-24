#include "MutantStack.hpp"
#include <list>


int main()
{
    MutantStack<int> mstack;
    std::list<int> l;

    l.push_back(5);
    std::cout << "list top before pop: " << l.front() << std::endl;
    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    l.push_back(0);

    std::list<int>::iterator lit = l.begin();
    std::list<int>::iterator lite = l.end();
    while (lit != lite)
    {
        std::cout << "actual list iterator: " << *lit << std::endl;
        ++lit;
    }

    mstack.push(5);
    mstack.push(17);
    std::cout << "stack top before pop: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}