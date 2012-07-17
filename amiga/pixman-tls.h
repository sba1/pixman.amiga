#include <proto/exec.h>

#   define PIXMAN_DEFINE_THREAD_LOCAL(type, name)			\
    struct SignalSemaphore name##_semaphore;				\
void init_##name##_semaphore(void)					\
{									\
}									\
    static type name

#   define PIXMAN_GET_THREAD_LOCAL(name)				\
    (&name);								\
    IExec->ObtainSemaphore(&name##_semaphore)

#   define PIXMAN_UNGET_THREAD_LOCAL(name)				\
    IExec->ReleaseSemaphore(&name##_semaphore)
