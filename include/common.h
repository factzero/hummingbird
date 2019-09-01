#ifndef HUMMINGBIRD_COMMON_H_
#define HUMMINGBIRD_COMMON_H_



/* Disable the copy and assignment operator for a class */
#define DISABLE_COPY_AND_ASSIGN(classname) \
private:\
  classname(const classname&);\
  classname& operator=(const classname&)

namespace hummingbird
{
    class Hummingbird
    {
    public:        
        ~Hummingbird();

        enum Brew { CPU, GPU};

        static Hummingbird& Get();
        inline static Brew getMode() { return Get().m_mode; }
        inline static void setMode(Brew mode) { Get().m_mode = mode; }
        static void setDevice(const int device_id);

    private:
        Brew m_mode;                        /* 工作模式 */

    private:
        Hummingbird();
        DISABLE_COPY_AND_ASSIGN(Hummingbird);
    };
}

#endif