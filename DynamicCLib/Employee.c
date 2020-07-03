#include "stdio.h"
#include "Employee.h"
#include "Profile.dh"

BriefInfo* GetBriefInfo()
{
	BriefInfo  tmpInfo;
	BriefInfo* briefInfo = (BriefInfo*)malloc(sizeof(BriefInfo)) /*= { .Name = NULL, .CompanyName=NULL, .Salary=0 }*/;
	briefInfo = &tmpInfo;
	briefInfo->Name = (char*)malloc(sizeof(char) * 64);
	briefInfo->CompanyName = (char*)malloc(sizeof(char) * 64);
	briefInfo->Name =  "Toby";
	briefInfo->CompanyName = Company;
	briefInfo->Salary = GetSalary();
	return briefInfo;
}