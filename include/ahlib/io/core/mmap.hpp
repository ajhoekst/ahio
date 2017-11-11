#ifndef AHLIB_IO_CORE_MMAP_HPP
#define AHLIB_IO_CORE_MMAP_HPP

namespace ahlib { namespace io {

template <typename Tag>
void* map(
    const char* const filename = NULL,
    std::size_t length = 0,
    std::off_t offset = 0
)
{
    return NULL;
}

}} // namespace ahlib::io

#endif // AHLIB_IO_CORE_MMAP_HPP
