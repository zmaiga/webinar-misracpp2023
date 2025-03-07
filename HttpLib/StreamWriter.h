#pragma once // parasoft-suppress MISRACPP2023-19_6_1-a "Accepted, see PERMIT_INTERNAL_19_6_1_a (sharepoint doc per_int_19_6_1_a.doc)"

#include <string>

namespace net
{
    class OutputStream;

    class StreamWriter
    {
    public:
        StreamWriter(OutputStream* socket);

        bool write(const char* buff, int length);
        bool write(std::string_view str);

    private:
        OutputStream* _stream;
    };
}
