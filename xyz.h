#pragma once

#include "file.h"

namespace ahio {

namespace xyz {

class Data {
public:
    // 'structor
    Data(
        const char* const filename
    );
    ~Data();
    
    // Methods
    

};

} // endn of xyz namespace

class XYZ {
public:
    // 'structors
    XYZ();
    ~XYZ();

    // Methods
    template <typename R>
    R read()
    {
        return read_internal<R>( T() );
    }

    template <typename R>
    R write()
    {
        return write_internal<R>( T() );
    }
private:
    template <typename R>
    R read_internal(
        struct File::MemoryMap tag
    )
    {
        static_cast<void>( tag );
        return read_memorymap_impl();
    }

    template <typename R>
    R write_internal(
        struct File::MemoryMap tag
    )
    {

    }
};

} // end of namespace ahio
