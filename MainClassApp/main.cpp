#include "CallBack.h"
#include "DynamicCLib.h"
#include "Employee.h"
#include <iostream>
using namespace std;

int main()
{
	BriefInfo* pBriefInfo = GetBriefInfo();
	
	//cout << "The name is " << name << ", who is working in " << companyName<< ", and his/her salary is " << pBriefInfo->Salary << " RMB/Month." << endl;

	CCallBack callBack;
	CALLBACK_FUNCS callBackFuncs;
	callBackFuncs.pRequireMoneyFunc = callBack.RequireMoney;
	SetCallbackFuncs(callBackFuncs);
	TryoutCallbackFunc();
	return 0;
}














