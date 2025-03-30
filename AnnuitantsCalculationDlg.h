// AnnuitantsCalculationDlg.h : header file
//

#if !defined(AFX_ANNUITANTSCALCULATIONDLG_H__D6D3371D_1DF0_49D0_ABBC_2F42195D2E9B__INCLUDED_)
#define AFX_ANNUITANTSCALCULATIONDLG_H__D6D3371D_1DF0_49D0_ABBC_2F42195D2E9B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// CAnnuitantsCalculationDlg dialog

class CAnnuitantsCalculationDlg : public CDialog
{
// Construction
public:
	CAnnuitantsCalculationDlg fnCalculation();
	CAnnuitantsCalculationDlg fnEarlyRepayment();
	CAnnuitantsCalculationDlg fnYearMonth();
	CAnnuitantsCalculationDlg(CWnd* pParent = NULL);	// standard constructor


// Dialog Data
	//{{AFX_DATA(CAnnuitantsCalculationDlg)
	enum { IDD = IDD_ANNUITANTSCALCULATION_DIALOG };
	double	m_edit1;
	double	m_edit2;
	double	m_edit3;
	double	m_edit4;
	double	m_edit5;
	double	m_edit6;
	double	m_edit7;
	double	m_edit8;
	CString	m_edit9;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAnnuitantsCalculationDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CAnnuitantsCalculationDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnChangeEdit1();
	afx_msg void OnChangeEdit2();
	afx_msg void OnChangeEdit3();
	afx_msg void OnChangeEdit4();
	afx_msg void OnChangeEdit5();
	afx_msg void OnChangeEdit6();
	afx_msg void OnChangeEdit7();
	afx_msg void OnChangeEdit8();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnChangeEdit9();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ANNUITANTSCALCULATIONDLG_H__D6D3371D_1DF0_49D0_ABBC_2F42195D2E9B__INCLUDED_)
