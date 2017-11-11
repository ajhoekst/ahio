#pragma once

#include "file.h"

#include <memory>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>

namespace ahio {
namespace xyz {

struct tagVector{};

class Reader {
public:
    Reader(
        std::unique_ptr<File> file
    ) : file_( std::move( file ) )
    {
    }
    
    template <typename T>
    void operator()(
        T& data
    );
private:
    std::unique_ptr<File> file_;
    char* map_;
};

} // end of namespace xyz
} // end of namespace ahio
