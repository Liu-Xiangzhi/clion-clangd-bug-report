#ifndef TMP_CPP_A_H
#define TMP_CPP_A_H

#include "b.h"

namespace na {
namespace nb {
namespace nc {

class A
{
public:
    int x = 0;
private:
    A() = default;
public:

    friend A& ::na::nd::getSingleton<A>();

     static A& getA()
     {
         return ::na::nd::getSingleton<A>();
     }
};
} // namespace nc

} // namespace nb
} // namespace na

#endif //TMP_CPP_A_H
