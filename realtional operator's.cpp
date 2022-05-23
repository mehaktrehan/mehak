#include<iostream>
using namespace std;
enum boolean{FALSE,TRUE};
class score
{
	int val;
	public:
		score()
	{
		val=0;
		}	
score(int v)
{
	val=v;
}
int getscore()
{
	return val;
}
boolean operator<(score s2)
{
	return(val<s2.val?TRUE:FALSE);
}
};
int main()
{
	score s1=5;
	score s2=10;
	cout<<"score1:"<<s1.getscore();
	cout<<"score2:"<<s2.getscore();
	if(s1<s2)
	cout<<"score 1 is less than score2";
	else
	cout<<"score 2 is less tham score1";
	return 0;
}
