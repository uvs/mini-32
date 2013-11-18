//---------------------------------------------------------------------------

#ifndef errorsH
#define errorsH

enum error_kind
{
	ek_error = 1,
	ek_warning
};

class errors
{
	private:
		error_kind kind;
		int number;					// ���� 0 - �� ��
		int rownum, colnum;
		int filename;


	public:
		errors();
};

#endif
