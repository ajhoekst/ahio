#pragma once

#include <vector>

namespace ahio {
namespace xyz {

class Reader {
public:
    // 'structors
    Reader(
        const char* const filename
    );
    ~Reader();

    // Methods
    std::vector<double> operator()();
};

} // end of namespace xyz
} // end of namespace ahio
