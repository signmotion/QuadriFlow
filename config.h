#ifndef CONFIG_H_
#define CONFIG_H_

//#define WITH_CUDA
//#define WITH_SCALE
#define WITH_OMP
#define WITH_TBB

#define DATA_PATH "/Users/jingwei/Desktop/project/Parametrize/data"

#include <chrono>

// simulation of Windows GetTickCount()
unsigned long long
inline GetTickCount64()
{
    using namespace std::chrono;
    return duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count();
}
#endif
