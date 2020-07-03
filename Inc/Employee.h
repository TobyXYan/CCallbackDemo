#pragma once

#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include "Profile.ph"

#ifdef __cplusplus
extern "C"
{
#endif
	typedef struct briefinfo
	{
		char* Name;
		char* CompanyName;
		int   Salary;
	}BriefInfo;

	BriefInfo* GetBriefInfo();
#ifdef __cplusplus
}
#endif

#endif 