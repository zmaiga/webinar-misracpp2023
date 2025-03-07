#pragma once // parasoft-suppress MISRACPP2023-19_6_1-a "Accepted, see PERMIT_INTERNAL_19_6_1_a (sharepoint doc per_int_19_6_1_a.doc)"

namespace net
{
    class InputStream;

    class ContentChunk
    {
    public:
        char* data;
        int size;

        explicit operator bool() const;
    };

    class ContentReader
    {
    public:
        ContentReader(InputStream* stream, int contentLength, bool contentLengthValid);

        ContentChunk readChunk();

    private:
        InputStream* _stream;
        char _buff[4096];
        int _buffSize;
        int _remaining;
    };
}
