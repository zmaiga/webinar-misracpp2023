#pragma once // parasoft-suppress MISRACPP2023-19_6_1-a "Accepted, see PERMIT_INTERNAL_19_6_1_a (sharepoint doc per_int_19_6_1_a.doc)"
namespace net
{
	class InputStream
	{
	public:
		virtual int receive(char* buf, int len) = 0;
	};

	class OutputStream
	{
	public:
		virtual int send(const char* buf, int len) = 0;
	};

	class Stream : public InputStream, public OutputStream
	{
	};
}
