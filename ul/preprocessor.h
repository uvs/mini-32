//---------------------------------------------------------------------------

#ifndef preprocessorH
#define preprocessorH

#include <vcl.h>
#include <RegularExpressions.hpp>

#include "preprocessor_trigraphs.h"

#define INCLUDE_COUNT    ( 1024 )
#define PREPROCESS_COUNT ( 1024 )

class preprocessor : public preprocessor_trigraphs
{
	private:
		AnsiString	  source;
		AnsiString	  result;
		//AnsiString	  code;
		//TStringList * code;
		TStringList * error;
		TStringDynArray parsing_result;

		void g_1_replace_trigraph();	 			// ������ ���������


		TStringList * file;							// 1 #include
		TRegEx 		* reg_include_local;
		TRegEx 		* reg_include_global;
		int parse_include_global();
		int parse_include_local();

		TRegEx 		* reg_comments_multi;           // 2 �����������
		void parse_comments_multi();
		TRegEx 		* reg_comments_single;
		void parse_comments_single();

        AnsiString dyn2str( TStringDynArray arr );


	public:
		preprocessor();
		void load_code( AnsiString source );
		void load_code( TStringList * source );
		int process( TStringList * error );
		AnsiString save_code();
		~preprocessor();
};

//---------------------------------------------------------------------------

#endif
