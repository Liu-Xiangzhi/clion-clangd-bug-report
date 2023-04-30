#ifndef TMP_CPP_B_H
#define TMP_CPP_B_H
namespace na {
namespace nd {
template<typename T>
T& getSingleton()
{
    static T self;
    return self;
} // namespace nd
} // namespace na
}
#endif //TMP_CPP_B_H
