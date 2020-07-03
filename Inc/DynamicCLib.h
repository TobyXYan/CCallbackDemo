#pragma once

#ifndef _CALLBACK_
#define _CALLBACK_

#ifdef __cplusplus
extern "C"
{
#endif
	typedef void (*RequireMoneyFunc) (int money);

	typedef struct
	{
		RequireMoneyFunc pRequireMoneyFunc;
	}CALLBACK_FUNCS;

	void SetCallbackFuncs(CALLBACK_FUNCS callBackFuncs);
	void TryoutCallbackFunc();
#ifdef __cplusplus
}
#endif



#endif