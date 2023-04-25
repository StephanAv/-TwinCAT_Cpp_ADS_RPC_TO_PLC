///////////////////////////////////////////////////////////////////////////////
// CppAdsClientDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "CppAdsClientDriver.h"
#include "CppAdsClientClassFactory.h"

DECLARE_GENERIC_DEVICE(CPPADSCLIENTDRV)

IOSTATUS CCppAdsClientDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CCppAdsClientClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CCppAdsClientDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CCppAdsClientDriver::CPPADSCLIENTDRV_GetVersion( )
{
	return( (CPPADSCLIENTDRV_Major << 8) | CPPADSCLIENTDRV_Minor );
}

