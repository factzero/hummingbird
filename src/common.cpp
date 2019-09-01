#include <boost/thread.hpp>
#include "common.h"


namespace hummingbird
{
    static boost::thread_specific_ptr<Hummingbird> g_thread_instance;

    Hummingbird& Hummingbird::Get()
    {
        if (!g_thread_instance.get())
        {
            g_thread_instance.reset(new Hummingbird);
        }

        return *(g_thread_instance.get());
    }

#ifdef CPU_ONLY  /* CPU-only */
    Hummingbird::Hummingbird()
        :m_mode(Hummingbird::CPU)
    {}

    Hummingbird::~Hummingbird() {}

#endif
}