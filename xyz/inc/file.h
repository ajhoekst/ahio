#pragma once

#include <memory>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

namespace ahio {
namespace xyz {

class File {
public:
    File(
        const char* const filename
    );
    ~File();
    bool isValid();
    struct stat& getInfo();
private:
    const char* const filename_;
    struct stat s_;
};

} // end of namespace xyz
} // end of namespace ahio
