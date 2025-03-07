#pragma once // parasoft-suppress MISRACPP2023-19_6_1-a "Accepted, see PERMIT_INTERNAL_19_6_1_a (sharepoint doc per_int_19_6_1_a.doc)"

namespace net
{
    class UploadHandler
    {
    public:
        virtual void write(char* data, int size) = 0;
        virtual void endOfStream() = 0;
    };
}
