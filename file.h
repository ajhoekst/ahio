#pragma once

namespace ahio {

template <class M>
class File : public M
{
public:
    // 'structors
    File(
        const char* const filename
    );
    ~File();

    // Tags
    static struct SystemCall {};
    static struct MemoryMap {};

    // Methods
    template <typename R, typename T>
    R read()
    {
        return M::read<R>( T() );
    }

    template <typename R, typename T>
    R write()
    {
        return M::write<R>( T() );
    }
};

} // end of namespace ahio
