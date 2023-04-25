///////////////////////////////////////////////////////////////////////////////
// CppAdsClientCtrl.h

#ifndef __CPPADSCLIENTCTRL_H__
#define __CPPADSCLIENTCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "CppAdsClientW32.h"
#include "TcBase.h"
#include "CppAdsClientClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CCppAdsClientCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CCppAdsClientCtrl, &CLSID_CppAdsClientCtrl>
	, public ICppAdsClientCtrl
	, public ITcOCFCtrlImpl<CCppAdsClientCtrl, CCppAdsClientClassFactory>
{
public:
	CCppAdsClientCtrl();
	virtual ~CCppAdsClientCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_CPPADSCLIENTCTRL)
DECLARE_NOT_AGGREGATABLE(CCppAdsClientCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CCppAdsClientCtrl)
	COM_INTERFACE_ENTRY(ICppAdsClientCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __CPPADSCLIENTCTRL_H__
