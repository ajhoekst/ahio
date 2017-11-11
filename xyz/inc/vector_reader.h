#pragma once

#include "reader.h"

namespace ahio {
namespace xyz {
    
template<>
void Reader::operator()< std::vector<double> >(
    std::vector<double>& data
)
{
    // Parse memory mapped file   
}

} // end of namespace xyz
} // end of namespace ahio
