#include<iostream>
using namespace std;
class book{
	private:
		int authorid;
		string name,bname;
		double no_bookpublish;
		double total_bookshell;
		
		
		public:
			book(int authorid,string name,string bname,double no_bookpublish,double total_bookshell);
			
		string	getbname();
		void cal_available_copies(int n);
		double bookpublish();
			
		
			
};
