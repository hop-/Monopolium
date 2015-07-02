#ifndef _MAP_HPP_
#define _MAP_HPP_

#include <vector>

namespace core
{

class cycle;

class map
{
    std::vector<cycle*> m_cycles;
public:
    map() = default;
    ~map() = default;
    
private:
}; /// class map

} /// namespace core

#endif //_MAP_HPP_
