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
