// CppAdsClientCtrl.cpp : Implementation of CTcCppAdsClientCtrl
#include "TcPch.h"
#pragma hdrstop

#include "CppAdsClientW32.h"
#include "CppAdsClientCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CCppAdsClientCtrl

CCppAdsClientCtrl::CCppAdsClientCtrl() 
	: ITcOCFCtrlImpl<CCppAdsClientCtrl, CCppAdsClientClassFactory>() 
{
}

CCppAdsClientCtrl::~CCppAdsClientCtrl()
{
}

