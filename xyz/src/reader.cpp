#include "reader.h"
#include "file.h"

#include <memory.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>

namespace ahio {
namespace xyz {

Reader::Reader(
    std::unique_ptr<File> file
) : file_( std::move( file ) )
{
}

template<>
void Reader::operator()< std::vector<double> >(
    std::vector<double>& data
)
{
    // Parse memory mapped file   
}

} // end of namespace xyz
} // end of namespace ahio
