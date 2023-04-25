///////////////////////////////////////////////////////////////////////////////
// CppAdsClientDriver.h

#ifndef __CPPADSCLIENTDRIVER_H__
#define __CPPADSCLIENTDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define CPPADSCLIENTDRV_NAME        "CPPADSCLIENT"
#define CPPADSCLIENTDRV_Major       1
#define CPPADSCLIENTDRV_Minor       0

#define DEVICE_CLASS CCppAdsClientDriver

#include "ObjDriver.h"

class CCppAdsClientDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl CPPADSCLIENTDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(CPPADSCLIENTDRV)
	VxD_Service( CPPADSCLIENTDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __CPPADSCLIENTDRIVER_H__