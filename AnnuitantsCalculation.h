// AnnuitantsCalculation.h : main header file for the ANNUITANTSCALCULATION application
//

#if !defined(AFX_ANNUITANTSCALCULATION_H__5F743E8F_E16D_4C73_8621_20FF2639A5F0__INCLUDED_)
#define AFX_ANNUITANTSCALCULATION_H__5F743E8F_E16D_4C73_8621_20FF2639A5F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CAnnuitantsCalculationApp:
// See AnnuitantsCalculation.cpp for the implementation of this class
//

class CAnnuitantsCalculationApp : public CWinApp
{
public:
	CAnnuitantsCalculationApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAnnuitantsCalculationApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CAnnuitantsCalculationApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANNUITANTSCALCULATION_H__5F743E8F_E16D_4C73_8621_20FF2639A5F0__INCLUDED_)
