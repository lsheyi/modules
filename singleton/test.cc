#if 0

#include "eager.h"

int main(int argc, char const *argv[])
{
    auto sgt = Singleton::instance();
    sgt->show();
    sgt->destrory();

    return 0;
}

#endif

#if 1

#include "lazy.h"

int main(int argc, char const *argv[])
{
    auto& sgt = Singleton::instance();
    sgt.show();

    return 0;
}

#endif