#include "DynamicCLib.h"

static RequireMoneyFunc m_requireMoneyFunc;

void SetCallbackFuncs(CALLBACK_FUNCS callBackFuncs)
{
	m_requireMoneyFunc = callBackFuncs.pRequireMoneyFunc;
}

void TryoutCallbackFunc()
{
	m_requireMoneyFunc(8000);
}