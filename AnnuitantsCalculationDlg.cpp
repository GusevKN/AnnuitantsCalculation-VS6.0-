// AnnuitantsCalculationDlg.cpp : implementation file
//

#include "stdafx.h"
#include "AnnuitantsCalculation.h"
#include "AnnuitantsCalculationDlg.h"
#include <iostream>
#include <math.h>
#include <iomanip.h>
///////////////////////////
#include "stdlib.h"
#include "fstream.h"
#include "time.h"		//time
#include "stdio.h"		//time
#include <string.h>


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int ha;
int ia;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAnnuitantsCalculationDlg dialog

CAnnuitantsCalculationDlg::CAnnuitantsCalculationDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAnnuitantsCalculationDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAnnuitantsCalculationDlg)
	m_edit1 = 0.0;
	m_edit2 = 0.0;
	m_edit3 = 0.0;
	m_edit4 = 0.0;
	m_edit5 = 0.0;
	m_edit6 = 0.0;
	m_edit7 = 0.0;
	m_edit8 = 0.0;
	m_edit9 = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

CAnnuitantsCalculationDlg CAnnuitantsCalculationDlg::fnCalculation()
{
	
	double a = m_edit1; // ���������� ������ ������� � �����
	double S = m_edit2; // �������������� ����� ������� � �����
	double N = m_edit3; // ���������� �������
	double C = m_edit4; // ����� ������������ ���������� ���������
//	double d;
double P=(a/100)/12;
double b=pow((1+P),N);
double x=S*((P*b)/(b-1));
double e = (x * N) - S; // ���������� �����������, �������� ����������� ����� x �� ���������� ������� N � �������� �� ����������� �����
	//����������� �����
m_edit7 = (double)((int)(x*100))/100;
	//��������� �� ���������
m_edit8 = (double)((int)(e*100))/100;;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //UpdateData(false);
	//cout<<"��������� �� ��������� "<< setprecision(9)<< e <<" ���\n"<< endl;
	//cout<<"����� ������"<< endl;
	//while (d);
	//return 0;
	//}
	//����������� ������ 
	UpdateData(false);
	return 0;
}
CAnnuitantsCalculationDlg CAnnuitantsCalculationDlg::fnYearMonth()
{
	double a = m_edit1; // ���������� ������ ������� � �����
	double S = m_edit2; // �������������� ����� ������� � �����
	double N = m_edit3; // ���������� �������
	double C = m_edit4; // ����� ������������ ���������� ���������
    double x ; // ����������� �����
    double P = (a / 100) / 12; // ������ �������� � ����� /100 (������ 8% ������� 0,08*100% ������� ������ � �����)
        double b = (pow((1 + P), N)); // ������� pow - ������� (1+P) � ������� N. ����� ������� ������� ������������ �������
        x = S * ((P * b) / (b - 1));  // ����������� ������
    double i=0; // ���������� ��������, �� ����� ������� ���������� ������� ����� �������� �����
    double y=x; // ����������� ����������� ����� � ���������� y
    double g=C; // ����������� ����� ������������ ���������� ��������� � g

  int h;
  //////////////jkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
    if(C>0){ // ���� ����� ������������ ���������� ��������� � ����� ������ ���� ������ ���������� ����
  do {
  double P = (a / 100) / 12; // ������ �������� � ����� /100 (������ 8% ������� 0,08*100% ������� ������ � �����)
  double b = (pow((1 + P), N)); // ������� pow - ������� (1+P) � ������� N. ����� ������� ������� ������������ �������
  x = S * ((P * b) / (b - 1)); // ����������� ������
  double e = (x * N) - S; // ���������� �����������, �������� ����������� ����� x �� ���������� ������� N � �������� �� ����������� �����
  S=S-C; // ���������� ����, �������� �� ����� S ����� ���������� ��������� C
  C=g+(y-x); // ���������� ����� ������������ ���������� ���������. �������� �� ������������ ������� � ���������� ������ y �����������
                 // ����� � ���� ������ (� ������� ������ ���������� ��������� � ���������� ���������� ����� � ����� ���������� ���������
  if(C<0){  // ���� ����� ������������ ���������� ��������� ����� ��������� �������� ����������� ����� ������ ���� ������ ���������� ����,
	            // ���� ��� ����������� �=0, ����� �� �������� ������������� �����
    C=0;
  }
  i++;   // ����������� ������� �� 1 -> ��������� �����
 // ��������� ���������� �������� ���� (� ������ �������� �����)

  h = i/12; // ����������� ���������� ������� ��� (� ������ �������� �����)
ha=h;
ia=i;
  if(i>=N) // ���� ������� ����� i ������ ��������� ������� ������ �������, �� :
  {S=0;} // ��������� �������������� ����� ������� � ����� S=0
  } while ( S>=x ); // ���� �������������� ����� ������� � ����� ������ ���� ����� ����� ������������ �������, ��
    }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

return 0;
}

CAnnuitantsCalculationDlg CAnnuitantsCalculationDlg::fnEarlyRepayment()
{
	 char Name[MAX_PATH];
GetModuleFileNameA(NULL, Name, MAX_PATH);
ofstream book_file_calculation;  //"C:\\Documents and Settings\\�������������\\������� ����\\BOOKINFO.txt"
book_file_calculation.open(NULL+"������ �������.txt", ofstream::app);
	double a = m_edit1; // ���������� ������ ������� � �����
	double S = m_edit2; // �������������� ����� ������� � �����
	double N = m_edit3; // ���������� �������
	double C = m_edit4; // ����� ������������ ���������� ���������
    double x ; // ����������� �����
    double P = (a / 100) / 12; // ������ �������� � ����� /100 (������ 8% ������� 0,08*100% ������� ������ � �����)
        double b = (pow((1 + P), N)); // ������� pow - ������� (1+P) � ������� N. ����� ������� ������� ������������ �������
        x = S * ((P * b) / (b - 1));  // ����������� ������
    double i=0; // ���������� ��������, �� ����� ������� ���������� ������� ����� �������� �����
    double y=x; // ����������� ����������� ����� � ���������� y
    double g=C; // ����������� ����� ������������ ���������� ��������� � g

  int h;
    if(C>0){ // ���� ����� ������������ ���������� ��������� � ����� ������ ���� ������ ���������� ����
  do {
  double P = (a / 100) / 12; // ������ �������� � ����� /100 (������ 8% ������� 0,08*100% ������� ������ � �����)
  double b = (pow((1 + P), N)); // ������� pow - ������� (1+P) � ������� N. ����� ������� ������� ������������ �������
  x = S * ((P * b) / (b - 1)); // ����������� ������
  double e = (x * N) - S; // ���������� �����������, �������� ����������� ����� x �� ���������� ������� N � �������� �� ����������� �����
  S=S-C; // ���������� ����, �������� �� ����� S ����� ���������� ��������� C
  C=g+(y-x); // ���������� ����� ������������ ���������� ���������. �������� �� ������������ ������� � ���������� ������ y �����������
                 // ����� � ���� ������ (� ������� ������ ���������� ��������� � ���������� ���������� ����� � ����� ���������� ���������
  if(C<0){  // ���� ����� ������������ ���������� ��������� ����� ��������� �������� ����������� ����� ������ ���� ������ ���������� ����,
	            // ���� ��� ����������� �=0, ����� �� �������� ������������� �����
    C=0;
  }
  i++;   // ����������� ������� �� 1 -> ��������� �����
 // ��������� ���������� �������� ���� (� ������ �������� �����)

  h = i/12; // ����������� ���������� ������� ��� (� ������ �������� �����)
e = (double)((int)(e*100))/100;
S = (double)((int)(S*100))/100;
book_file_calculation << "��� ������ -						"   << setprecision(9) <<  h  << endl;
book_file_calculation << "����� ������ -						"   << setprecision(9) <<  i  << endl;
book_file_calculation << "����������� ����� -					"   << setprecision(9) <<  x  << endl;
book_file_calculation << "��������� �� ��������� -				"	<< setprecision(9)  << e << endl;
book_file_calculation << "�������� ���� -						"   << setprecision(9) <<  S  << endl;
book_file_calculation << "����� ������������ ��������� -				"   << setprecision(6) <<  C  << endl;
book_file_calculation << endl;
  if(i>=N) // ���� ������� ����� i ������ ��������� ������� ������ �������, �� :
  {S=0;} // ��������� �������������� ����� ������� � ����� S=0
  } while ( S>=x ); // ���� �������������� ����� ������� � ����� ������ ���� ����� ����� ������������ �������, ��
    }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	return 0;
}


void CAnnuitantsCalculationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAnnuitantsCalculationDlg)
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Text(pDX, IDC_EDIT3, m_edit3);
	DDX_Text(pDX, IDC_EDIT4, m_edit4);
	DDX_Text(pDX, IDC_EDIT5, m_edit5);
	DDX_Text(pDX, IDC_EDIT6, m_edit6);
	DDX_Text(pDX, IDC_EDIT7, m_edit7);
	DDX_Text(pDX, IDC_EDIT8, m_edit8);
	DDX_Text(pDX, IDC_EDIT9, m_edit9);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAnnuitantsCalculationDlg, CDialog)
	//{{AFX_MSG_MAP(CAnnuitantsCalculationDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, OnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, OnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, OnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT5, OnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT6, OnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, OnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, OnChangeEdit8)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_EN_CHANGE(IDC_EDIT9, OnChangeEdit9)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAnnuitantsCalculationDlg message handlers

BOOL CAnnuitantsCalculationDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAnnuitantsCalculationDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CAnnuitantsCalculationDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CAnnuitantsCalculationDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CAnnuitantsCalculationDlg::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CAnnuitantsCalculationDlg::OnChangeEdit2() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CAnnuitantsCalculationDlg::OnChangeEdit3() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CAnnuitantsCalculationDlg::OnChangeEdit4() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CAnnuitantsCalculationDlg::OnChangeEdit5() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CAnnuitantsCalculationDlg::OnChangeEdit6() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CAnnuitantsCalculationDlg::OnChangeEdit7() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CAnnuitantsCalculationDlg::OnChangeEdit8() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CAnnuitantsCalculationDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
		// TODO: Add your control notification handler code here
	UpdateData(true);
	CAnnuitantsCalculationDlg::fnYearMonth();
	CAnnuitantsCalculationDlg::fnCalculation();
	
	m_edit5 = ha;
	m_edit6 = ia;
	UpdateData(false);
}

void CAnnuitantsCalculationDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	// TODO: Add your control notification handler code here
	UpdateData(false);
	char Name[MAX_PATH];
	GetModuleFileNameA(NULL, Name, MAX_PATH);
	ofstream book_file_calculation;  //"C:\\Documents and Settings\\�������������\\������� ����\\BOOKINFO.txt"
	book_file_calculation.open(NULL+"������ �������.txt", ofstream::app);
	book_file_calculation << "////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	"  << endl;
	book_file_calculation << endl;
	book_file_calculation << "�����������:	" <<  m_edit9  << endl;
	book_file_calculation << endl;
	book_file_calculation << "���������� ������ ������� � ����� -			" << setprecision(6) <<  m_edit1  << endl;
	book_file_calculation << "�������������� ����� ������� � ���. -			" << setprecision(9) <<  m_edit2  << endl;
	book_file_calculation << "���������� ������� -					"   << setprecision(9) <<  m_edit3  << endl;
	book_file_calculation << "����� ������������ ���������� ��������� -		"   << setprecision(9) <<  m_edit4  << endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	book_file_calculation << endl;
	CAnnuitantsCalculationDlg::fnEarlyRepayment();
}

void CAnnuitantsCalculationDlg::OnChangeEdit9() 
{
		UpdateData(true);
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

