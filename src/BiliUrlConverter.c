/*

 * Bili URL Converter v1.1.2 Portable - Multi-monitor + DPI Fix
 * Native Win32, no CRT, no .NET, no OLE/COM, no registry configuration.
 * Supports x86 and x64 from the same source.
   */

#ifdef _WIN64
typedef unsigned long long ULONG_PTR;
typedef long long LONG_PTR;
typedef unsigned long long SIZE_T;
#else
typedef unsigned long ULONG_PTR;
typedef long LONG_PTR;
typedef unsigned long SIZE_T;
#endif

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int UINT;
typedef unsigned long DWORD;
typedef long LONG;
typedef int BOOL;
typedef unsigned short WCHAR;
typedef void *HANDLE;
typedef HANDLE HINSTANCE;
typedef HANDLE HMODULE;
typedef HANDLE HWND;
typedef HANDLE HICON;
typedef HANDLE HCURSOR;
typedef HANDLE HBRUSH;
typedef HANDLE HDC;
typedef HANDLE HFONT;
typedef HANDLE HPEN;
typedef HANDLE HGDIOBJ;
typedef HANDLE HGLOBAL;
typedef HANDLE HMENU;
typedef HANDLE HMONITOR;
typedef const WCHAR *LPCWSTR;
typedef WCHAR *LPWSTR;
typedef void *LPVOID;
typedef const void *LPCVOID;
typedef const char *LPCSTR;
typedef unsigned short ATOM;
typedef ULONG_PTR UINT_PTR;
typedef ULONG_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;

typedef struct tagPOINT { LONG x; LONG y; } POINT;
typedef struct tagRECT { LONG left; LONG top; LONG right; LONG bottom; } RECT;
typedef struct tagMSG {
    HWND hwnd; UINT message; WPARAM wParam; LPARAM lParam; DWORD time; POINT pt; DWORD lPrivate;
} MSG;
typedef struct tagPAINTSTRUCT {
    HDC hdc; BOOL fErase; RECT rcPaint; BOOL fRestore; BOOL fIncUpdate; BYTE rgbReserved[32];
} PAINTSTRUCT;
typedef struct tagDRAWITEMSTRUCT {
    UINT CtlType; UINT CtlID; UINT itemID; UINT itemAction; UINT itemState;
    HWND hwndItem; HDC hDC; RECT rcItem; ULONG_PTR itemData;
} DRAWITEMSTRUCT;
typedef LRESULT (__stdcall *WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef struct tagWNDCLASSEXW {
    UINT cbSize; UINT style; WNDPROC lpfnWndProc; int cbClsExtra; int cbWndExtra;
    HINSTANCE hInstance; HICON hIcon; HCURSOR hCursor; HBRUSH hbrBackground;
    LPCWSTR lpszMenuName; LPCWSTR lpszClassName; HICON hIconSm;
} WNDCLASSEXW;
typedef struct _GUID { DWORD Data1; WORD Data2; WORD Data3; BYTE Data4[8]; } GUID;
typedef struct _NOTIFYICONDATAW {
    DWORD cbSize; HWND hWnd; UINT uID; UINT uFlags; UINT uCallbackMessage; HICON hIcon;
    WCHAR szTip[128]; DWORD dwState; DWORD dwStateMask; WCHAR szInfo[256];
    UINT uTimeoutOrVersion; WCHAR szInfoTitle[64]; DWORD dwInfoFlags;
    GUID guidItem; HICON hBalloonIcon;
} NOTIFYICONDATAW;
typedef struct tagMONITORINFO {
    DWORD cbSize; RECT rcMonitor; RECT rcWork; DWORD dwFlags;
} MONITORINFO;

#define WINAPI __stdcall
#define CALLBACK __stdcall
#define DLLIMPORT __declspec(dllimport)
#define NULL ((void*)0)
#define TRUE 1
#define FALSE 0

/* window styles */
#define WS_OVERLAPPED       0x00000000L
#define WS_CAPTION          0x00C00000L
#define WS_SYSMENU          0x00080000L
#define WS_MINIMIZEBOX      0x00020000L
#define WS_VISIBLE          0x10000000L
#define WS_CLIPCHILDREN     0x02000000L
#define WS_CLIPSIBLINGS     0x04000000L
#define WS_CHILD            0x40000000L
#define WS_POPUP            0x80000000L
#define WS_TABSTOP          0x00010000L
#define WS_BORDER           0x00800000L
#define ES_AUTOHSCROLL      0x0080L
#define ES_READONLY         0x0800L
#define BS_PUSHBUTTON       0x00000000L
#define BS_DEFPUSHBUTTON    0x00000001L
#define BS_AUTOCHECKBOX     0x00000003L
#define BS_OWNERDRAW        0x0000000BL
#define SS_LEFT             0x00000000L
#define WS_EX_CLIENTEDGE    0x00000200L
#define WS_EX_DLGMODALFRAME 0x00000001L
#define WS_EX_TOPMOST       0x00000008L

#define SW_HIDE             0
#define SW_SHOWNORMAL       1
#define SW_SHOW             5
#define SW_RESTORE          9
#define SWP_NOSIZE           0x0001
#define SWP_NOMOVE           0x0002
#define SWP_NOZORDER         0x0004
#define SWP_NOACTIVATE       0x0010
#define MONITOR_DEFAULTTONEAREST 0x00000002
#define LOGPIXELSX           88
#define COLOR_WINDOW        5
#define IDC_ARROW           ((LPCWSTR)(ULONG_PTR)32512)
#define IDI_APPLICATION     ((LPCWSTR)(ULONG_PTR)32512)
#define CW_USEDEFAULT       ((int)0x80000000)

/* messages */
#define WM_CREATE           0x0001
#define WM_PAINT            0x000F
#define WM_ERASEBKGND       0x0014
#define WM_DRAWITEM         0x002B
#define WM_DESTROY          0x0002
#define WM_SIZE             0x0005
#define WM_CLOSE            0x0010
#define WM_SETFONT          0x0030
#define WM_SETICON          0x0080
#define WM_COMMAND          0x0111
#define WM_CTLCOLOREDIT     0x0133
#define WM_CTLCOLORBTN      0x0135
#define WM_CTLCOLORSTATIC   0x0138
#define WM_LBUTTONUP        0x0202
#define WM_LBUTTONDBLCLK    0x0203
#define WM_RBUTTONUP        0x0205
#define WM_CLIPBOARDUPDATE  0x031D
#define WM_DPICHANGED        0x02E0
#define WM_APP              0x8000
#define WM_TRAYICON         (WM_APP + 17)
#define WM_NULL             0x0000

#define ICON_SMALL          0
#define ICON_BIG            1
#define SIZE_MINIMIZED      1
#define BN_CLICKED          0
#define EM_SETLIMITTEXT     0x00C5
#define EM_SETMARGINS       0x00D3
#define EC_LEFTMARGIN       0x0001
#define EC_RIGHTMARGIN      0x0002
#define BM_GETCHECK         0x00F0
#define BM_SETCHECK         0x00F1
#define BST_UNCHECKED       0
#define BST_CHECKED         1
#define ODS_SELECTED        0x0001
#define ODS_DISABLED        0x0004
#define ODS_FOCUS           0x0010

/* clipboard */
#define CF_UNICODETEXT      13
#define GMEM_MOVEABLE       0x0002

/* messagebox */
#define MB_OK               0x00000000L
#define MB_ICONERROR        0x00000010L
#define MB_ICONINFORMATION  0x00000040L
#define MB_ICONWARNING      0x00000030L

/* drawing */
#define TRANSPARENT         1
#define PS_SOLID            0
#define DT_LEFT             0x00000000
#define DT_CENTER           0x00000001
#define DT_RIGHT            0x00000002
#define DT_VCENTER          0x00000004
#define DT_SINGLELINE       0x00000020
#define DT_END_ELLIPSIS     0x00008000
#define DI_NORMAL           0x0003
#define FW_NORMAL           400
#define FW_SEMIBOLD         600
#define CLEARTYPE_QUALITY   5
#define DEFAULT_CHARSET     1
#define OUT_DEFAULT_PRECIS  0
#define CLIP_DEFAULT_PRECIS 0
#define DEFAULT_PITCH       0
#define RGBX(r,g,b) ((DWORD)(((BYTE)(r)) | ((WORD)((BYTE)(g)) << 8) | (((DWORD)(BYTE)(b)) << 16)))
#define CLR_BG              RGBX(246,247,250)
#define CLR_HEADER          RGBX(255,255,255)
#define CLR_CARD            RGBX(255,255,255)
#define CLR_TEXT            RGBX(36,40,48)
#define CLR_MUTED           RGBX(112,120,134)
#define CLR_BORDER          RGBX(222,226,234)
#define CLR_ACCENT          RGBX(251,114,153)
#define CLR_ACCENT_DARK     RGBX(230,91,132)
#define CLR_ACCENT_LIGHT    RGBX(255,239,244)
#define CLR_GREEN           RGBX(62,171,126)
#define CLR_GREEN_LIGHT     RGBX(235,248,242)
#define CLR_DISABLED        RGBX(239,241,245)
#define CLR_DANGER          RGBX(219,78,78)
#define CLR_DANGER_LIGHT    RGBX(255,241,241)

/* tray */
#define NIM_ADD             0x00000000
#define NIM_MODIFY          0x00000001
#define NIM_DELETE          0x00000002
#define NIF_MESSAGE         0x00000001
#define NIF_ICON            0x00000002
#define NIF_TIP             0x00000004
#define NIF_INFO            0x00000010
#define NIIF_INFO           0x00000001

/* menu */
#define MF_STRING           0x00000000L
#define MF_SEPARATOR        0x00000800L
#define MF_CHECKED          0x00000008L
#define MF_UNCHECKED        0x00000000L
#define TPM_LEFTALIGN       0x0000L
#define TPM_RIGHTBUTTON     0x0002L
#define TPM_RETURNCMD       0x0100L

#define MAKEINTRESOURCEW(i) ((LPCWSTR)(ULONG_PTR)((WORD)(i)))

/* control IDs */
#define IDC_SOURCE          1001
#define IDC_RESULT          1002
#define IDC_GENERATE        1003
#define IDC_COPY            1004
#define IDC_CLEAR           1005
#define IDC_PREFIX          1006
#define IDC_TRAY            1007
#define IDC_MONITOR         1008
#define IDC_STATUS          1009

#define IDC_PFX_EDIT        2001
#define IDC_PFX_SAVE        2002
#define IDC_PFX_DEFAULT     2003
#define IDC_PFX_CANCEL      2004

#define IDC_CLOSE_REMEMBER  3001
#define IDC_CLOSE_TRAY      3002
#define IDC_CLOSE_EXIT      3003
#define IDC_CLOSE_CANCEL    3004

#define IDM_SHOW            4001
#define IDM_MONITOR         4002
#define IDM_PREFIX          4003
#define IDM_CLOSE_ASK       4004
#define IDM_EXIT            4005

/* Win32 imports */
DLLIMPORT void WINAPI ExitProcess(UINT);
DLLIMPORT HMODULE WINAPI GetModuleHandleW(LPCWSTR);
DLLIMPORT LPVOID WINAPI GetProcAddress(HMODULE,LPCSTR);
DLLIMPORT DWORD WINAPI GetModuleFileNameW(HMODULE, LPWSTR, DWORD);
DLLIMPORT DWORD WINAPI GetPrivateProfileStringW(LPCWSTR, LPCWSTR, LPCWSTR, LPWSTR, DWORD, LPCWSTR);
DLLIMPORT BOOL WINAPI WritePrivateProfileStringW(LPCWSTR, LPCWSTR, LPCWSTR, LPCWSTR);
DLLIMPORT HGLOBAL WINAPI GlobalAlloc(UINT, SIZE_T);
DLLIMPORT LPVOID WINAPI GlobalLock(HGLOBAL);
DLLIMPORT BOOL WINAPI GlobalUnlock(HGLOBAL);
DLLIMPORT HGLOBAL WINAPI GlobalFree(HGLOBAL);

DLLIMPORT ATOM WINAPI RegisterClassExW(const WNDCLASSEXW*);
DLLIMPORT HWND WINAPI CreateWindowExW(DWORD,LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
DLLIMPORT LRESULT WINAPI DefWindowProcW(HWND,UINT,WPARAM,LPARAM);
DLLIMPORT BOOL WINAPI ShowWindow(HWND,int);
DLLIMPORT BOOL WINAPI UpdateWindow(HWND);
DLLIMPORT HDC WINAPI BeginPaint(HWND,PAINTSTRUCT*);
DLLIMPORT BOOL WINAPI EndPaint(HWND,const PAINTSTRUCT*);
DLLIMPORT BOOL WINAPI GetClientRect(HWND,RECT*);
DLLIMPORT int WINAPI DrawTextW(HDC,LPCWSTR,int,RECT*,UINT);
DLLIMPORT int WINAPI FillRect(HDC,const RECT*,HBRUSH);
DLLIMPORT BOOL WINAPI InvalidateRect(HWND,const RECT*,BOOL);
DLLIMPORT BOOL WINAPI DrawIconEx(HDC,int,int,HICON,int,int,UINT,HBRUSH,UINT);
DLLIMPORT BOOL WINAPI GetMessageW(MSG*,HWND,UINT,UINT);
DLLIMPORT BOOL WINAPI TranslateMessage(const MSG*);
DLLIMPORT LRESULT WINAPI DispatchMessageW(const MSG*);
DLLIMPORT void WINAPI PostQuitMessage(int);
DLLIMPORT BOOL WINAPI DestroyWindow(HWND);
DLLIMPORT LRESULT WINAPI SendMessageW(HWND,UINT,WPARAM,LPARAM);
DLLIMPORT BOOL WINAPI SetWindowTextW(HWND,LPCWSTR);
DLLIMPORT int WINAPI GetWindowTextW(HWND,LPWSTR,int);
DLLIMPORT int WINAPI GetWindowTextLengthW(HWND);
DLLIMPORT int WINAPI MessageBoxW(HWND,LPCWSTR,LPCWSTR,UINT);
DLLIMPORT HWND WINAPI SetFocus(HWND);
DLLIMPORT BOOL WINAPI EnableWindow(HWND,BOOL);
DLLIMPORT BOOL WINAPI IsWindow(HWND);
DLLIMPORT BOOL WINAPI SetForegroundWindow(HWND);
DLLIMPORT BOOL WINAPI BringWindowToTop(HWND);
DLLIMPORT BOOL WINAPI SetWindowPos(HWND,HWND,int,int,int,int,UINT);
DLLIMPORT int WINAPI GetSystemMetrics(int);
DLLIMPORT BOOL WINAPI GetWindowRect(HWND,RECT*);
DLLIMPORT HMONITOR WINAPI MonitorFromWindow(HWND,DWORD);
DLLIMPORT BOOL WINAPI GetMonitorInfoW(HMONITOR,MONITORINFO*);
DLLIMPORT HDC WINAPI GetDC(HWND);
DLLIMPORT int WINAPI ReleaseDC(HWND,HDC);
DLLIMPORT HMENU WINAPI CreatePopupMenu(void);
DLLIMPORT BOOL WINAPI AppendMenuW(HMENU,UINT_PTR,UINT_PTR,LPCWSTR);
DLLIMPORT int WINAPI TrackPopupMenu(HMENU,UINT,int,int,int,HWND,const RECT*);
DLLIMPORT BOOL WINAPI DestroyMenu(HMENU);
DLLIMPORT BOOL WINAPI GetCursorPos(POINT*);
DLLIMPORT BOOL WINAPI PostMessageW(HWND,UINT,WPARAM,LPARAM);
DLLIMPORT HCURSOR WINAPI LoadCursorW(HINSTANCE,LPCWSTR);
DLLIMPORT HICON WINAPI LoadIconW(HINSTANCE,LPCWSTR);
DLLIMPORT BOOL WINAPI DestroyIcon(HICON);
DLLIMPORT BOOL WINAPI OpenClipboard(HWND);
DLLIMPORT BOOL WINAPI CloseClipboard(void);
DLLIMPORT BOOL WINAPI EmptyClipboard(void);
DLLIMPORT HANDLE WINAPI GetClipboardData(UINT);
DLLIMPORT HANDLE WINAPI SetClipboardData(UINT,HANDLE);
DLLIMPORT BOOL WINAPI IsClipboardFormatAvailable(UINT);
DLLIMPORT BOOL WINAPI AddClipboardFormatListener(HWND);
DLLIMPORT BOOL WINAPI RemoveClipboardFormatListener(HWND);
DLLIMPORT BOOL WINAPI MessageBeep(UINT);
DLLIMPORT BOOL WINAPI SetProcessDPIAware(void);

DLLIMPORT HBRUSH WINAPI CreateSolidBrush(DWORD);
DLLIMPORT HPEN WINAPI CreatePen(int,int,DWORD);
DLLIMPORT HGDIOBJ WINAPI SelectObject(HDC,HGDIOBJ);
DLLIMPORT BOOL WINAPI DeleteObject(HGDIOBJ);
DLLIMPORT int WINAPI SetBkMode(HDC,int);
DLLIMPORT DWORD WINAPI SetTextColor(HDC,DWORD);
DLLIMPORT DWORD WINAPI SetBkColor(HDC,DWORD);
DLLIMPORT HFONT WINAPI CreateFontW(int,int,int,int,int,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPCWSTR);
DLLIMPORT BOOL WINAPI RoundRect(HDC,int,int,int,int,int,int);
DLLIMPORT int WINAPI GetDeviceCaps(HDC,int);
DLLIMPORT BOOL WINAPI Ellipse(HDC,int,int,int,int);

DLLIMPORT BOOL WINAPI Shell_NotifyIconW(DWORD,NOTIFYICONDATAW*);

/* CRT replacements, in case optimizer emits them. */
void *memset(void *dst, int c, SIZE_T n) {
    BYTE *p=(BYTE*)dst; SIZE_T i; for(i=0;i<n;i++) p[i]=(BYTE)c; return dst;
}
void *memcpy(void *dst, const void *src, SIZE_T n) {
    BYTE *d=(BYTE*)dst; const BYTE *s=(const BYTE*)src; SIZE_T i; for(i=0;i<n;i++) d[i]=s[i]; return dst;
}

static const WCHAR APP_TITLE[] = L"VRChat 哔哩哔哩视频链接转换工具 v1.1.2";
static const WCHAR MAIN_CLASS[] = L"BiliUrlConv_Main_Rewrite_112";
static const WCHAR PREFIX_CLASS[] = L"BiliUrlConv_Prefix_Rewrite_112";
static const WCHAR CLOSE_CLASS[] = L"BiliUrlConv_Close_Rewrite_112";
static const WCHAR CFG_SECTION[] = L"Settings";
static const WCHAR DEFAULT_PREFIX[] = L"https://biliplayer.91vrchat.com/player/?url=";
static const WCHAR CFG_NAME[] = L"BiliUrlConverter.ini";

static HINSTANCE g_inst;
static HWND g_main, g_source, g_result, g_monitor, g_status;
static HWND g_btnCopy, g_btnGenerate, g_btnClear, g_btnPrefix, g_btnTray;
static HWND g_prefixDlg, g_pfxSave, g_pfxDefault, g_pfxCancel;
static HWND g_closeDlg, g_closeTray, g_closeExit, g_closeCancel;
static HICON g_icon;
static NOTIFYICONDATAW g_nid;
static BOOL g_trayAdded=FALSE;
static BOOL g_listenerAdded=FALSE;
static BOOL g_monitorEnabled=TRUE;
static BOOL g_exiting=FALSE;
static int g_closeAction=0; /* 0 ask, 1 tray, 2 exit */
static BOOL g_configWritable=TRUE;

static WCHAR g_configPath[1024];
static WCHAR g_prefix[2048];
static WCHAR g_sourceBuf[4096];
static WCHAR g_resultBuf[8192];
static WCHAR g_clipBuf[8192];
static WCHAR g_lastGenerated[8192];
static WCHAR g_tempPrefix[2048];
static WCHAR g_foundBuf[4096];

static BOOL g_modalDone=FALSE;
static int g_modalResult=0;

static BOOL weq(const WCHAR *a,const WCHAR *b);
static void SetEditTextStable(HWND h,const WCHAR *text);
static HWND g_prefixEdit;
static HWND g_closeRemember;
static void SetCtlFont(HWND h,HFONT f);

/* ---------------- DPI + UI resources ---------------- */
#define BASE_MAIN_W   920
#define BASE_MAIN_H   600
#define BASE_PREFIX_W 660
#define BASE_PREFIX_H 315
#define BASE_CLOSE_W  560
#define BASE_CLOSE_H  340

typedef BOOL (WINAPI *PFN_SetProcessDpiAwarenessContext)(HANDLE);
typedef UINT (WINAPI *PFN_GetDpiForSystem)(void);
typedef UINT (WINAPI *PFN_GetDpiForWindow)(HWND);

static PFN_SetProcessDpiAwarenessContext g_pSetProcessDpiAwarenessContext=NULL;
static PFN_GetDpiForSystem g_pGetDpiForSystem=NULL;
static PFN_GetDpiForWindow g_pGetDpiForWindow=NULL;
static UINT g_dpi=96;

static HFONT g_fontTitle=NULL, g_fontSubtitle=NULL, g_fontSection=NULL, g_fontNormal=NULL, g_fontButton=NULL, g_fontSmall=NULL;
static HBRUSH g_brBg=NULL, g_brHeader=NULL, g_brCard=NULL, g_brAccent=NULL, g_brAccentDark=NULL, g_brAccentLight=NULL, g_brGreenLight=NULL, g_brDisabled=NULL, g_brDangerLight=NULL;
static HPEN g_penBorder=NULL, g_penAccent=NULL, g_penGreen=NULL, g_penDanger=NULL;

static int ScaleForDpi(int value,UINT dpi){
    long long v=(long long)value*(long long)(dpi?dpi:96);
    if(v>=0) return (int)((v+48)/96);
    return (int)((v-48)/96);
}
static int S(int value){ return ScaleForDpi(value,g_dpi); }

static void InitDpiApis(void){
    HMODULE u=GetModuleHandleW(L"user32.dll");
    if(u){
        g_pSetProcessDpiAwarenessContext=(PFN_SetProcessDpiAwarenessContext)GetProcAddress(u,"SetProcessDpiAwarenessContext");
        g_pGetDpiForSystem=(PFN_GetDpiForSystem)GetProcAddress(u,"GetDpiForSystem");
        g_pGetDpiForWindow=(PFN_GetDpiForWindow)GetProcAddress(u,"GetDpiForWindow");
    }
}
static void EnableBestDpiAwareness(void){
    InitDpiApis();
    if(g_pSetProcessDpiAwarenessContext){
        /* DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2 == (HANDLE)-4 */
        if(g_pSetProcessDpiAwarenessContext((HANDLE)(LONG_PTR)-4)) return;
    }
    SetProcessDPIAware();
}
static UINT GetSystemDpiSafe(void){
    UINT d=0;
    if(g_pGetDpiForSystem) d=g_pGetDpiForSystem();
    if(d<72 || d>768){
        HDC dc=GetDC(NULL);
        if(dc){ int x=GetDeviceCaps(dc,LOGPIXELSX); ReleaseDC(NULL,dc); if(x>=72 && x<=768)d=(UINT)x; }
    }
    if(d<72 || d>768)d=96;
    return d;
}
static UINT GetWindowDpiSafe(HWND hwnd){
    UINT d=0;
    if(hwnd && g_pGetDpiForWindow) d=g_pGetDpiForWindow(hwnd);
    if(d<72 || d>768)d=GetSystemDpiSafe();
    return d;
}

static HFONT MakeFontForDpi(int logicalHeight,int weight,UINT dpi){
    return CreateFontW(ScaleForDpi(logicalHeight,dpi),0,0,0,weight,FALSE,FALSE,FALSE,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,CLEARTYPE_QUALITY,DEFAULT_PITCH,L"Microsoft YaHei UI");
}
static void ApplyKnownFonts(void){
    HWND normals[7]; int i;
    normals[0]=g_source; normals[1]=g_result; normals[2]=g_monitor; normals[3]=g_prefixEdit; normals[4]=g_closeRemember; normals[5]=NULL; normals[6]=NULL;
    for(i=0;i<7;i++) if(normals[i]) SetCtlFont(normals[i],g_fontNormal);
    if(g_status) SetCtlFont(g_status,g_fontSmall);
    /* Owner-draw buttons use g_fontButton while painting; WM_SETFONT is also updated for accessibility. */
    if(g_btnCopy)SetCtlFont(g_btnCopy,g_fontButton); if(g_btnGenerate)SetCtlFont(g_btnGenerate,g_fontButton);
    if(g_btnClear)SetCtlFont(g_btnClear,g_fontButton); if(g_btnPrefix)SetCtlFont(g_btnPrefix,g_fontButton); if(g_btnTray)SetCtlFont(g_btnTray,g_fontButton);
    if(g_pfxSave)SetCtlFont(g_pfxSave,g_fontButton); if(g_pfxDefault)SetCtlFont(g_pfxDefault,g_fontButton); if(g_pfxCancel)SetCtlFont(g_pfxCancel,g_fontButton);
    if(g_closeTray)SetCtlFont(g_closeTray,g_fontButton); if(g_closeExit)SetCtlFont(g_closeExit,g_fontButton); if(g_closeCancel)SetCtlFont(g_closeCancel,g_fontButton);
}
static void RebuildFonts(UINT dpi){
    HFONT oldTitle=g_fontTitle,oldSubtitle=g_fontSubtitle,oldSection=g_fontSection,oldNormal=g_fontNormal,oldButton=g_fontButton,oldSmall=g_fontSmall;
    if(dpi<72 || dpi>768)dpi=96; g_dpi=dpi;
    g_fontTitle=MakeFontForDpi(-23,FW_SEMIBOLD,dpi);
    g_fontSubtitle=MakeFontForDpi(-13,FW_NORMAL,dpi);
    g_fontSection=MakeFontForDpi(-16,FW_SEMIBOLD,dpi);
    g_fontNormal=MakeFontForDpi(-14,FW_NORMAL,dpi);
    g_fontButton=MakeFontForDpi(-14,FW_SEMIBOLD,dpi);
    g_fontSmall=MakeFontForDpi(-12,FW_NORMAL,dpi);
    ApplyKnownFonts();
    if(oldTitle)DeleteObject((HGDIOBJ)oldTitle); if(oldSubtitle)DeleteObject((HGDIOBJ)oldSubtitle); if(oldSection)DeleteObject((HGDIOBJ)oldSection);
    if(oldNormal)DeleteObject((HGDIOBJ)oldNormal); if(oldButton)DeleteObject((HGDIOBJ)oldButton); if(oldSmall)DeleteObject((HGDIOBJ)oldSmall);
}
static void InitUiResources(void){
    g_fontTitle=MakeFontForDpi(-23,FW_SEMIBOLD,g_dpi);
    g_fontSubtitle=MakeFontForDpi(-13,FW_NORMAL,g_dpi);
    g_fontSection=MakeFontForDpi(-16,FW_SEMIBOLD,g_dpi);
    g_fontNormal=MakeFontForDpi(-14,FW_NORMAL,g_dpi);
    g_fontButton=MakeFontForDpi(-14,FW_SEMIBOLD,g_dpi);
    g_fontSmall=MakeFontForDpi(-12,FW_NORMAL,g_dpi);
    g_brBg=CreateSolidBrush(CLR_BG); g_brHeader=CreateSolidBrush(CLR_HEADER); g_brCard=CreateSolidBrush(CLR_CARD);
    g_brAccent=CreateSolidBrush(CLR_ACCENT); g_brAccentDark=CreateSolidBrush(CLR_ACCENT_DARK); g_brAccentLight=CreateSolidBrush(CLR_ACCENT_LIGHT);
    g_brGreenLight=CreateSolidBrush(CLR_GREEN_LIGHT); g_brDisabled=CreateSolidBrush(CLR_DISABLED); g_brDangerLight=CreateSolidBrush(CLR_DANGER_LIGHT);
    g_penBorder=CreatePen(PS_SOLID,1,CLR_BORDER); g_penAccent=CreatePen(PS_SOLID,1,CLR_ACCENT); g_penGreen=CreatePen(PS_SOLID,1,CLR_GREEN); g_penDanger=CreatePen(PS_SOLID,1,CLR_DANGER);
}
static void FreeUiResources(void){
    HGDIOBJ objs[18]; int i=0,j;
    objs[i++]=(HGDIOBJ)g_fontTitle; objs[i++]=(HGDIOBJ)g_fontSubtitle; objs[i++]=(HGDIOBJ)g_fontSection; objs[i++]=(HGDIOBJ)g_fontNormal; objs[i++]=(HGDIOBJ)g_fontButton; objs[i++]=(HGDIOBJ)g_fontSmall;
    objs[i++]=(HGDIOBJ)g_brBg; objs[i++]=(HGDIOBJ)g_brHeader; objs[i++]=(HGDIOBJ)g_brCard; objs[i++]=(HGDIOBJ)g_brAccent; objs[i++]=(HGDIOBJ)g_brAccentDark; objs[i++]=(HGDIOBJ)g_brAccentLight; objs[i++]=(HGDIOBJ)g_brGreenLight; objs[i++]=(HGDIOBJ)g_brDisabled; objs[i++]=(HGDIOBJ)g_brDangerLight;
    objs[i++]=(HGDIOBJ)g_penBorder; objs[i++]=(HGDIOBJ)g_penAccent; objs[i++]=(HGDIOBJ)g_penGreen;
    for(j=0;j<i;j++) if(objs[j]) DeleteObject(objs[j]);
    if(g_penDanger) DeleteObject((HGDIOBJ)g_penDanger);
}
static void SetCtlFont(HWND h,HFONT f){ if(h&&f) SendMessageW(h,WM_SETFONT,(WPARAM)f,TRUE); }
static void SetEditMargins(HWND h){ int m=S(12); if(h) SendMessageW(h,EM_SETMARGINS,EC_LEFTMARGIN|EC_RIGHTMARGIN,(LPARAM)((m & 0xffff) | ((m & 0xffff)<<16))); }
static void MoveCtl(HWND h,int x,int y,int w,int hh){ if(h)SetWindowPos(h,NULL,S(x),S(y),S(w),S(hh),SWP_NOZORDER|SWP_NOACTIVATE); }
static HWND MakeButton(HWND parent,LPCWSTR text,int x,int y,int w,int h,int id){
    HWND b=CreateWindowExW(0,L"BUTTON",text,WS_CHILD|WS_VISIBLE|WS_TABSTOP|WS_CLIPSIBLINGS|BS_OWNERDRAW,S(x),S(y),S(w),S(h),parent,(HMENU)(ULONG_PTR)id,g_inst,0);
    SetCtlFont(b,g_fontButton); return b;
}
static void DrawTextUi(HDC dc,LPCWSTR text,int l,int t,int r,int b,HFONT font,DWORD color,UINT flags){
    RECT rc; HGDIOBJ old; rc.left=S(l);rc.top=S(t);rc.right=S(r);rc.bottom=S(b); old=SelectObject(dc,(HGDIOBJ)font); SetBkMode(dc,TRANSPARENT); SetTextColor(dc,color); DrawTextW(dc,text,-1,&rc,flags); SelectObject(dc,old);
}
static void DrawTextPx(HDC dc,LPCWSTR text,int l,int t,int r,int b,HFONT font,DWORD color,UINT flags){
    RECT rc; HGDIOBJ old; rc.left=l;rc.top=t;rc.right=r;rc.bottom=b; old=SelectObject(dc,(HGDIOBJ)font); SetBkMode(dc,TRANSPARENT); SetTextColor(dc,color); DrawTextW(dc,text,-1,&rc,flags); SelectObject(dc,old);
}
static void DrawRoundBox(HDC dc,int l,int t,int r,int b,HBRUSH br,HPEN pen,int rad){
    HGDIOBJ ob=SelectObject(dc,(HGDIOBJ)br), op=SelectObject(dc,(HGDIOBJ)pen); RoundRect(dc,l,t,r,b,rad,rad); SelectObject(dc,op); SelectObject(dc,ob);
}
static void DrawRoundBoxUi(HDC dc,int l,int t,int r,int b,HBRUSH br,HPEN pen,int rad){ DrawRoundBox(dc,S(l),S(t),S(r),S(b),br,pen,S(rad)); }
static void DrawButtonUi(DRAWITEMSTRUCT *di){
    WCHAR text[128]; HBRUSH br=g_brCard; HPEN pen=g_penBorder; DWORD tc=CLR_TEXT; int id=(int)di->CtlID; int pressed=(di->itemState&ODS_SELECTED)!=0;
    if(di->itemState&ODS_DISABLED){br=g_brDisabled;pen=g_penBorder;tc=CLR_MUTED;}
    else if(id==IDC_GENERATE||id==IDC_PFX_SAVE||id==IDC_CLOSE_TRAY){br=pressed?g_brAccentDark:g_brAccent;pen=g_penAccent;tc=RGBX(255,255,255);}
    else if(id==IDC_CLOSE_EXIT){br=pressed?g_brDangerLight:g_brCard;pen=g_penDanger;tc=CLR_DANGER;}
    else if(id==IDC_PREFIX||id==IDM_PREFIX){br=pressed?g_brAccentLight:g_brCard;pen=g_penAccent;tc=CLR_ACCENT_DARK;}
    else {br=pressed?g_brDisabled:g_brCard;pen=(di->itemState&ODS_FOCUS)?g_penAccent:g_penBorder;tc=CLR_TEXT;}
    DrawRoundBox(di->hDC,di->rcItem.left+S(1),di->rcItem.top+S(1),di->rcItem.right-S(1),di->rcItem.bottom-S(1),br,pen,S(10));
    GetWindowTextW(di->hwndItem,text,127);
    DrawTextPx(di->hDC,text,di->rcItem.left+S(8),di->rcItem.top+(pressed?S(1):0),di->rcItem.right-S(8),di->rcItem.bottom+(pressed?S(1):0),g_fontButton,tc,DT_CENTER|DT_VCENTER|DT_SINGLELINE|DT_END_ELLIPSIS);
}
static void LayoutMainControls(void){
    MoveCtl(g_source,50,174,800,34); MoveCtl(g_result,50,256,630,34); MoveCtl(g_btnCopy,696,251,156,42);
    MoveCtl(g_btnGenerate,48,310,180,44); MoveCtl(g_btnClear,244,310,104,44); MoveCtl(g_btnPrefix,548,310,150,44); MoveCtl(g_btnTray,712,310,140,44);
    MoveCtl(g_monitor,48,441,390,30); MoveCtl(g_status,92,501,760,34); SetEditMargins(g_source); SetEditMargins(g_result);
}
static void LayoutPrefixControls(void){
    MoveCtl(g_prefixEdit,46,137,568,36); MoveCtl(g_pfxSave,42,216,168,42); MoveCtl(g_pfxDefault,226,216,142,42); MoveCtl(g_pfxCancel,384,216,112,42); SetEditMargins(g_prefixEdit);
}
static void LayoutCloseControls(void){
    MoveCtl(g_closeRemember,44,188,340,30); MoveCtl(g_closeTray,44,238,190,42); MoveCtl(g_closeExit,250,238,132,42); MoveCtl(g_closeCancel,398,238,100,42);
}
static void SetUiDpi(UINT dpi){ if(dpi<72||dpi>768)dpi=96; if(dpi!=g_dpi)RebuildFonts(dpi); }
static void ApplySuggestedDpiRect(HWND hwnd,LPARAM lp){
    RECT *r=(RECT*)lp; if(!r)return; SetWindowPos(hwnd,NULL,(int)r->left,(int)r->top,(int)(r->right-r->left),(int)(r->bottom-r->top),SWP_NOZORDER|SWP_NOACTIVATE);
}
static void CenterPopupOnOwner(HWND owner,int baseW,int baseH,UINT dpi,int *ox,int *oy,int *ow,int *oh){
    RECT pr,work; MONITORINFO mi; HMONITOR mon=NULL; int w=ScaleForDpi(baseW,dpi),h=ScaleForDpi(baseH,dpi),x,y;
    if(owner && GetWindowRect(owner,&pr)){
        x=pr.left+((pr.right-pr.left)-w)/2; y=pr.top+((pr.bottom-pr.top)-h)/2;
        mon=MonitorFromWindow(owner,MONITOR_DEFAULTTONEAREST);
    }else{
        pr.left=0;pr.top=0;pr.right=GetSystemMetrics(0);pr.bottom=GetSystemMetrics(1); x=(pr.right-w)/2;y=(pr.bottom-h)/2;
    }
    if(mon){
        memset(&mi,0,sizeof(mi)); mi.cbSize=(DWORD)sizeof(mi);
        if(GetMonitorInfoW(mon,&mi)) work=mi.rcWork; else {work.left=0;work.top=0;work.right=GetSystemMetrics(0);work.bottom=GetSystemMetrics(1);}
    }else {work.left=0;work.top=0;work.right=GetSystemMetrics(0);work.bottom=GetSystemMetrics(1);}
    if(w>work.right-work.left) x=work.left; else {if(x<work.left)x=work.left;if(x+w>work.right)x=work.right-w;}
    if(h>work.bottom-work.top) y=work.top; else {if(y<work.top)y=work.top;if(y+h>work.bottom)y=work.bottom-h;}
    *ox=x;*oy=y;*ow=w;*oh=h;
}
static void RestoreMainDpiAfterModal(void){
    UINT d=GetWindowDpiSafe(g_main); SetUiDpi(d); LayoutMainControls(); InvalidateRect(g_main,NULL,TRUE); UpdateWindow(g_main);
}
static void PaintMainUi(HWND hwnd,HDC dc){
    RECT rc; HGDIOBJ ob,op; BOOL defPrefix=weq(g_prefix,DEFAULT_PREFIX);
    GetClientRect(hwnd,&rc); FillRect(dc,&rc,g_brBg);
    { RECT h=rc; h.left=0;h.top=0;h.bottom=S(90); FillRect(dc,&h,g_brHeader); h.top=S(88);h.bottom=S(90);FillRect(dc,&h,g_brAccent); }
    if(g_icon) DrawIconEx(dc,S(28),S(22),g_icon,S(44),S(44),0,NULL,DI_NORMAL);
    DrawTextUi(dc,L"VRChat 哔哩哔哩视频链接转换工具",88,18,650,50,g_fontTitle,CLR_TEXT,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawTextUi(dc,L"面向 VRChat 视频播放器 · 自动识别并转换 Bilibili 链接",88,50,700,74,g_fontSubtitle,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawRoundBoxUi(dc,744,24,872,56,g_brAccentLight,g_penAccent,16);
    DrawTextUi(dc,L"v1.1.2  PORTABLE",750,24,866,56,g_fontSmall,CLR_ACCENT_DARK,DT_CENTER|DT_VCENTER|DT_SINGLELINE);

    DrawRoundBoxUi(dc,27,109,879,363,g_brDisabled,g_penBorder,18); DrawRoundBoxUi(dc,24,106,876,360,g_brCard,g_penBorder,18);
    DrawTextUi(dc,L"网址转换",48,120,180,146,g_fontSection,CLR_TEXT,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawTextUi(dc,L"粘贴原始哔哩哔哩网址，也可以使用剪贴板自动监听。",155,121,760,145,g_fontSmall,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawTextUi(dc,L"原始网址",48,148,160,169,g_fontSmall,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE); DrawRoundBoxUi(dc,46,170,854,212,g_brCard,g_penBorder,9);
    DrawTextUi(dc,L"生成后的网址",48,228,180,249,g_fontSmall,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE); DrawRoundBoxUi(dc,46,252,684,294,g_brCard,g_penBorder,9);
    
    DrawRoundBoxUi(dc,27,381,879,481,g_brDisabled,g_penBorder,18); DrawRoundBoxUi(dc,24,378,876,478,g_brCard,g_penBorder,18);
    DrawTextUi(dc,L"自动化与设置",48,391,220,417,g_fontSection,CLR_TEXT,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawTextUi(dc,defPrefix?L"当前使用默认网址前缀":L"当前使用自定义网址前缀",48,418,310,440,g_fontSmall,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    if(g_monitorEnabled){ DrawRoundBoxUi(dc,735,394,852,424,g_brGreenLight,g_penGreen,15); DrawTextUi(dc,L"● 监听已开启",742,394,846,424,g_fontSmall,CLR_GREEN,DT_CENTER|DT_VCENTER|DT_SINGLELINE); }
    else { DrawRoundBoxUi(dc,735,394,852,424,g_brDisabled,g_penBorder,15); DrawTextUi(dc,L"○ 监听已关闭",742,394,846,424,g_fontSmall,CLR_MUTED,DT_CENTER|DT_VCENTER|DT_SINGLELINE); }
    ob=SelectObject(dc,(HGDIOBJ)(g_monitorEnabled?g_brAccent:g_brDisabled)); op=SelectObject(dc,(HGDIOBJ)(g_monitorEnabled?g_penAccent:g_penBorder));
    Ellipse(dc,S(31),S(510),S(41),S(520)); SelectObject(dc,op); SelectObject(dc,ob);
    DrawTextUi(dc,L"状态",48,502,88,528,g_fontSmall,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE);

}
static void PaintPrefixUi(HWND hwnd,HDC dc){
    RECT rc; GetClientRect(hwnd,&rc); FillRect(dc,&rc,g_brBg); {RECT h=rc;h.left=0;h.top=0;h.bottom=S(76);FillRect(dc,&h,g_brHeader);h.top=S(74);h.bottom=S(76);FillRect(dc,&h,g_brAccent);}
    DrawTextUi(dc,L"修改网址前缀",28,17,300,47,g_fontTitle,CLR_TEXT,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawTextUi(dc,L"只有在这个独立窗口中才能编辑，避免主界面误触。",28,46,610,68,g_fontSmall,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawRoundBoxUi(dc,24,92,636,196,g_brCard,g_penBorder,16); DrawTextUi(dc,L"网址前缀",44,108,150,130,g_fontSmall,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE); DrawRoundBoxUi(dc,42,134,618,176,g_brCard,g_penBorder,9);
}
static void PaintCloseUi(HWND hwnd,HDC dc){
    RECT rc; GetClientRect(hwnd,&rc); FillRect(dc,&rc,g_brBg); {RECT h=rc;h.left=0;h.top=0;h.bottom=S(76);FillRect(dc,&h,g_brHeader);h.top=S(74);h.bottom=S(76);FillRect(dc,&h,g_brAccent);}
    DrawTextUi(dc,L"关闭程序？",28,17,250,47,g_fontTitle,CLR_TEXT,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawTextUi(dc,L"你可以让程序继续驻留托盘并保持剪贴板监听。",28,46,540,68,g_fontSmall,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawRoundBoxUi(dc,24,94,536,176,g_brCard,g_penBorder,16);
    DrawTextUi(dc,L"选择“最小化到系统托盘”后，程序不会退出。",44,108,500,134,g_fontNormal,CLR_TEXT,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
    DrawTextUi(dc,L"右键托盘图标仍可随时退出或切换监听。",44,136,500,158,g_fontSmall,CLR_MUTED,DT_LEFT|DT_VCENTER|DT_SINGLELINE);
}

/* ---------------- String helpers ---------------- */
static int wlen(const WCHAR *s) { int n=0; if(!s) return 0; while(s[n]) n++; return n; }
static void wcopy(WCHAR *d, const WCHAR *s, int cap) {
    int i=0; if(cap<=0) return; if(!s){d[0]=0;return;} while(s[i] && i<cap-1){d[i]=s[i];i++;} d[i]=0;
}
static BOOL weq(const WCHAR *a,const WCHAR *b) {
    int i=0; if(!a||!b) return FALSE; while(a[i]&&b[i]){if(a[i]!=b[i])return FALSE;i++;} return a[i]==b[i];
}
static WCHAR lower_ascii(WCHAR c){ if(c>=L'A'&&c<=L'Z') return (WCHAR)(c+32); return c; }
static BOOL wstarts_ci(const WCHAR *s,const WCHAR *p){ int i=0; while(p[i]){ if(!s[i]||lower_ascii(s[i])!=lower_ascii(p[i])) return FALSE; i++; } return TRUE; }
static BOOL wstarts(const WCHAR *s,const WCHAR *p){ int i=0; while(p[i]){if(s[i]!=p[i])return FALSE;i++;}return TRUE;}
static BOOL wends_host_ci(const WCHAR *host,int hlen,const WCHAR *domain){
    int dlen=wlen(domain),i; if(hlen<dlen) return FALSE;
    for(i=0;i<dlen;i++) if(lower_ascii(host[hlen-dlen+i])!=lower_ascii(domain[i])) return FALSE;
    if(hlen==dlen) return TRUE;
    return host[hlen-dlen-1]==L'.';
}
static void trim_ws(WCHAR *s){
    int n=wlen(s),start=0,i; while(start<n && (s[start]==L' '||s[start]==L'\t'||s[start]==L'\r'||s[start]==L'\n')) start++;
    while(n>start && (s[n-1]==L' '||s[n-1]==L'\t'||s[n-1]==L'\r'||s[n-1]==L'\n')) n--;
    if(start>0){ for(i=start;i<n;i++) s[i-start]=s[i]; n-=start; }
    s[n]=0;
}
static BOOL append_two(const WCHAR *a,const WCHAR *b,WCHAR *out,int cap){
    int i=0,j=0; if(cap<2) return FALSE;
    while(a[i]){ if(i>=cap-1) return FALSE; out[i]=a[i]; i++; }
    while(b[j]){ if(i>=cap-1) return FALSE; out[i++]=b[j++]; }
    out[i]=0; return TRUE;
}
static void int_to_w(int v,WCHAR out[16]){
    if(v<0)v=0; if(v>9)v=9; out[0]=(WCHAR)(L'0'+v); out[1]=0;
}
static int w_to_int(const WCHAR *s,int defv){ if(s&&s[0]>=L'0'&&s[0]<=L'9') return (int)(s[0]-L'0'); return defv; }

/* ---------------- Config ---------------- */
static void BuildConfigPath(void){
    DWORD n=GetModuleFileNameW(NULL,g_configPath,1023); int i,last=-1;
    if(n==0||n>=1023){ wcopy(g_configPath,CFG_NAME,1024); return; }
    for(i=0;g_configPath[i];i++) if(g_configPath[i]==L'\\'||g_configPath[i]==L'/') last=i;
    if(last<0){ wcopy(g_configPath,CFG_NAME,1024); return; }
    g_configPath[last+1]=0;
    {
        int base=wlen(g_configPath),j=0;
        while(CFG_NAME[j] && base+j<1023){g_configPath[base+j]=CFG_NAME[j];j++;}
        g_configPath[base+j]=0;
    }
}
static BOOL SaveSetting(LPCWSTR key,LPCWSTR value){
    BOOL ok=WritePrivateProfileStringW(CFG_SECTION,key,value,g_configPath);
    if(!ok) g_configWritable=FALSE;
    return ok;
}
static void SaveIntSetting(LPCWSTR key,int value){ WCHAR b[16]; int_to_w(value,b); SaveSetting(key,b); }
static void LoadSettings(void){
    WCHAR b[32]; BuildConfigPath();
    GetPrivateProfileStringW(CFG_SECTION,L"Prefix",DEFAULT_PREFIX,g_prefix,2047,g_configPath);
    if(g_prefix[0]==0) wcopy(g_prefix,DEFAULT_PREFIX,2048);
    GetPrivateProfileStringW(CFG_SECTION,L"Monitor",L"1",b,31,g_configPath); g_monitorEnabled=(w_to_int(b,1)!=0);
    GetPrivateProfileStringW(CFG_SECTION,L"CloseAction",L"0",b,31,g_configPath); g_closeAction=w_to_int(b,0); if(g_closeAction<0||g_closeAction>2)g_closeAction=0;
    /* Create/refresh portable config. Failure never blocks startup. */
    g_configWritable=TRUE;
    if(!SaveSetting(L"Version",L"1.1.2")) g_configWritable=FALSE;
    if(!SaveSetting(L"Prefix",g_prefix)) g_configWritable=FALSE;
    if(!SaveSetting(L"Monitor",g_monitorEnabled?L"1":L"0")) g_configWritable=FALSE;
    { WCHAR c[16]; int_to_w(g_closeAction,c); if(!SaveSetting(L"CloseAction",c)) g_configWritable=FALSE; }
}

/* ---------------- URL logic ---------------- */
static BOOL IsBiliUrl(const WCHAR *url){
    int i=0,start,hlen;
    if(wstarts_ci(url,L"https://")) i=8;
    else if(wstarts_ci(url,L"http://")) i=7;
    else return FALSE;
    start=i;
    while(url[i] && url[i]!=L'/' && url[i]!=L':' && url[i]!=L'?' && url[i]!=L'#' && url[i]!=L' ' && url[i]!=L'\t' && url[i]!=L'\r' && url[i]!=L'\n') i++;
    hlen=i-start; if(hlen<=0) return FALSE;
    if(wends_host_ci(url+start,hlen,L"bilibili.com")) return TRUE;
    if(wends_host_ci(url+start,hlen,L"b23.tv")) return TRUE;
    if(wends_host_ci(url+start,hlen,L"bilibili.tv")) return TRUE;
    return FALSE;
}
static BOOL IsUrlTerminator(WCHAR c){
    if(c==0||c==L' '||c==L'\t'||c==L'\r'||c==L'\n'||c==L'"'||c==L'\''||c==L'<'||c==L'>') return TRUE;
    return FALSE;
}
static BOOL IsTrimPunct(WCHAR c){
    return c==L'.'||c==L','||c==L';'||c==L'!'||c==L')'||c==L']'||c==L'}'||
           c==0x3002||c==0xFF0C||c==0xFF1B||c==0xFF01||c==0xFF09||c==0x3001||c==0x300B||c==0x3011;
}
static BOOL ExtractBiliUrl(const WCHAR *text,WCHAR *out,int cap){
    int i=0;
    while(text[i]){
        int scheme=0,j,k,len;
        if(wstarts_ci(text+i,L"https://")) scheme=8;
        else if(wstarts_ci(text+i,L"http://")) scheme=7;
        if(!scheme){i++;continue;}
        j=i+scheme;
        while(text[j] && !IsUrlTerminator(text[j])) j++;
        len=j-i;
        while(len>0 && IsTrimPunct(text[i+len-1])) len--;
        if(len>0 && len<cap){
            for(k=0;k<len;k++) out[k]=text[i+k]; out[len]=0;
            if(IsBiliUrl(out)) return TRUE;
        }
        i=j>i?j:i+1;
    }
    out[0]=0; return FALSE;
}
static BOOL BuildGenerated(const WCHAR *source){ return append_two(g_prefix,source,g_resultBuf,8192); }

/* ---------------- Clipboard ---------------- */
static BOOL CopyToClipboard(HWND owner,const WCHAR *text){
    int n=wlen(text),i; HGLOBAL h; WCHAR *p;
    if(!OpenClipboard(owner)){
        SetWindowTextW(g_status,L"剪贴板暂时被其他程序占用，请稍后再点击“复制结果”。");
        return FALSE;
    }
    if(!EmptyClipboard()){ CloseClipboard(); return FALSE; }
    h=GlobalAlloc(GMEM_MOVEABLE,(SIZE_T)((n+1)*2));
    if(!h){ CloseClipboard(); return FALSE; }
    p=(WCHAR*)GlobalLock(h);
    if(!p){ GlobalFree(h); CloseClipboard(); return FALSE; }
    for(i=0;i<=n;i++) p[i]=text[i];
    GlobalUnlock(h);
    if(!SetClipboardData(CF_UNICODETEXT,h)){
        GlobalFree(h); CloseClipboard(); return FALSE;
    }
    wcopy(g_lastGenerated,text,8192);
    CloseClipboard();
    return TRUE;
}
static BOOL ReadClipboardText(HWND owner,WCHAR *out,int cap){
    HANDLE h; const WCHAR *p; int i=0;
    out[0]=0;
    if(!IsClipboardFormatAvailable(CF_UNICODETEXT)) return FALSE;
    if(!OpenClipboard(owner)) return FALSE;
    h=GetClipboardData(CF_UNICODETEXT);
    if(!h){CloseClipboard();return FALSE;}
    p=(const WCHAR*)GlobalLock((HGLOBAL)h);
    if(!p){CloseClipboard();return FALSE;}
    while(p[i] && i<cap-1){out[i]=p[i];i++;} out[i]=0;
    GlobalUnlock((HGLOBAL)h); CloseClipboard(); return TRUE;
}

/* ---------------- Tray ---------------- */
static void FillFixed(WCHAR *dst,int cap,const WCHAR *src){int i=0;if(cap<=0)return;while(src[i]&&i<cap-1){dst[i]=src[i];i++;}dst[i]=0;}
static void AddTrayIcon(void){
    if(g_trayAdded) return;
    memset(&g_nid,0,sizeof(g_nid));
    g_nid.cbSize=(DWORD)sizeof(g_nid); g_nid.hWnd=g_main; g_nid.uID=1;
    g_nid.uFlags=NIF_MESSAGE|NIF_ICON|NIF_TIP; g_nid.uCallbackMessage=WM_TRAYICON; g_nid.hIcon=g_icon;
    FillFixed(g_nid.szTip,128,L"VRChat 哔哩哔哩视频链接转换工具 v1.1.2");
    if(Shell_NotifyIconW(NIM_ADD,&g_nid)) g_trayAdded=TRUE;
}
static void RemoveTrayIcon(void){ if(g_trayAdded){Shell_NotifyIconW(NIM_DELETE,&g_nid);g_trayAdded=FALSE;} }
static void TrayBalloon(const WCHAR *title,const WCHAR *info){
    if(!g_trayAdded) AddTrayIcon();
    g_nid.uFlags=NIF_INFO; FillFixed(g_nid.szInfoTitle,64,title); FillFixed(g_nid.szInfo,256,info); g_nid.dwInfoFlags=NIIF_INFO;
    Shell_NotifyIconW(NIM_MODIFY,&g_nid);
    g_nid.uFlags=NIF_MESSAGE|NIF_ICON|NIF_TIP;
}
static void ShowMain(void){
    ShowWindow(g_main,SW_RESTORE); ShowWindow(g_main,SW_SHOW); SetForegroundWindow(g_main); BringWindowToTop(g_main); SetFocus(g_source);
}
static void HideToTray(void){ AddTrayIcon(); ShowWindow(g_main,SW_HIDE); }

/* ---------------- Monitor ---------------- */
static void UpdateMonitorUI(void){ if(g_monitor) SendMessageW(g_monitor,BM_SETCHECK,g_monitorEnabled?BST_CHECKED:BST_UNCHECKED,0); }
static void SetMonitor(BOOL enabled,BOOL persist){
    if(enabled){
        if(!g_listenerAdded){
            if(AddClipboardFormatListener(g_main)) g_listenerAdded=TRUE;
            else { g_monitorEnabled=FALSE; UpdateMonitorUI(); SetWindowTextW(g_status,L"无法启用剪贴板监听。你仍可手动粘贴并生成。"); return; }
        }
        g_monitorEnabled=TRUE;
    }else{
        if(g_listenerAdded){ RemoveClipboardFormatListener(g_main); g_listenerAdded=FALSE; }
        g_monitorEnabled=FALSE;
    }
    UpdateMonitorUI();
    if(g_main) InvalidateRect(g_main,NULL,FALSE);
    if(persist){
        SaveIntSetting(L"Monitor",g_monitorEnabled?1:0);
        if(!g_configWritable) SetWindowTextW(g_status,L"监听状态已临时修改，但当前目录不可写，无法保存到下次启动。");
        else SetWindowTextW(g_status,g_monitorEnabled?L"剪贴板监听已开启。":L"剪贴板监听已关闭。");
    }
}
static void HandleClipboardUpdate(void){
    if(!g_monitorEnabled) return;
    if(!ReadClipboardText(g_main,g_clipBuf,8192)) return;
    trim_ws(g_clipBuf);
    if(g_clipBuf[0]==0) return;
    if(weq(g_clipBuf,g_lastGenerated)) return;
    if(wstarts(g_clipBuf,g_prefix)) return;
    if(!ExtractBiliUrl(g_clipBuf,g_foundBuf,4096)) return;
    SetEditTextStable(g_source,g_foundBuf); wcopy(g_sourceBuf,g_foundBuf,4096);
    if(!BuildGenerated(g_foundBuf)){
        SetWindowTextW(g_status,L"网址过长，无法生成。请缩短自定义前缀后重试。"); ShowMain(); return;
    }
    SetEditTextStable(g_result,g_resultBuf);
    if(CopyToClipboard(g_main,g_resultBuf)) SetWindowTextW(g_status,L"检测到哔哩哔哩网址，已自动生成并复制新网址。");
    ShowMain(); MessageBeep(MB_ICONINFORMATION); TrayBalloon(L"已自动转换",L"检测到哔哩哔哩网址，新网址已生成并复制到剪贴板。");
}

/* Force a clean repaint after long text changes. Combined with WS_CLIPCHILDREN,

 * this prevents the parent card background from painting over scrolling EDIT controls. */
   static void SetEditTextStable(HWND h,const WCHAR *text){
    if(!h) return;
    SetWindowTextW(h,text);
    InvalidateRect(h,NULL,TRUE);
    UpdateWindow(h);
   }

/* ---------------- Actions ---------------- */
static void GenerateManual(BOOL doCopy){
    int n=GetWindowTextW(g_source,g_sourceBuf,4095); (void)n; trim_ws(g_sourceBuf);
    if(g_sourceBuf[0]==0){ SetWindowTextW(g_status,L"请先粘贴原始网址。"); SetFocus(g_source); return; }
    if(!BuildGenerated(g_sourceBuf)){ SetWindowTextW(g_status,L"网址过长，无法生成。请缩短自定义前缀。"); return; }
    SetEditTextStable(g_result,g_resultBuf);
    if(doCopy){
        if(CopyToClipboard(g_main,g_resultBuf)) SetWindowTextW(g_status,L"新网址已生成并复制到剪贴板。");
    }else SetWindowTextW(g_status,L"已按新的前缀刷新生成结果。");
}
static void CopyResult(void){
    GetWindowTextW(g_result,g_resultBuf,8191); if(g_resultBuf[0]==0){SetWindowTextW(g_status,L"当前没有可复制的生成结果。");return;}
    if(CopyToClipboard(g_main,g_resultBuf)) SetWindowTextW(g_status,L"生成结果已复制到剪贴板。");
}
static void ClearAll(void){ g_sourceBuf[0]=g_resultBuf[0]=0; SetEditTextStable(g_source,L"");SetEditTextStable(g_result,L"");SetWindowTextW(g_status,L"已清空。");SetFocus(g_source); }

/* ---------------- Prefix dialog ---------------- */
static HWND g_prefixEdit=NULL;
static LRESULT CALLBACK PrefixProc2(HWND hwnd,UINT msg,WPARAM wp,LPARAM lp){
    switch(msg){
    case WM_CREATE:
        g_prefixDlg=hwnd;
        g_prefixEdit=CreateWindowExW(0,L"EDIT",g_prefix,WS_CHILD|WS_VISIBLE|WS_TABSTOP|WS_CLIPSIBLINGS|ES_AUTOHSCROLL,S(46),S(137),S(568),S(36),hwnd,(HMENU)(ULONG_PTR)IDC_PFX_EDIT,g_inst,0);
        SendMessageW(g_prefixEdit,EM_SETLIMITTEXT,1900,0); SetCtlFont(g_prefixEdit,g_fontNormal); SetEditMargins(g_prefixEdit);
        g_pfxSave=MakeButton(hwnd,L"保存并应用",42,216,168,42,IDC_PFX_SAVE); g_pfxDefault=MakeButton(hwnd,L"恢复默认",226,216,142,42,IDC_PFX_DEFAULT); g_pfxCancel=MakeButton(hwnd,L"取消",384,216,112,42,IDC_PFX_CANCEL);
        SetFocus(g_prefixEdit); return 0;
    case WM_DPICHANGED:
        { UINT nd=(UINT)(wp&0xffff); SetUiDpi(nd); ApplySuggestedDpiRect(hwnd,lp); LayoutPrefixControls(); InvalidateRect(hwnd,NULL,TRUE); return 0; }
    case WM_PAINT:
        { PAINTSTRUCT ps; HDC dc=BeginPaint(hwnd,&ps); PaintPrefixUi(hwnd,dc); EndPaint(hwnd,&ps); return 0; }
    case WM_ERASEBKGND: return 1;
    case WM_DRAWITEM: DrawButtonUi((DRAWITEMSTRUCT*)lp); return 1;
    case WM_CTLCOLOREDIT: SetBkColor((HDC)wp,CLR_CARD); SetTextColor((HDC)wp,CLR_TEXT); return (LRESULT)g_brCard;
    case WM_COMMAND:
        switch((int)(wp&0xffff)){
        case IDC_PFX_SAVE:
            GetWindowTextW(g_prefixEdit,g_tempPrefix,2047); trim_ws(g_tempPrefix);
            if(g_tempPrefix[0]==0){MessageBoxW(hwnd,L"前缀不能为空。",APP_TITLE,MB_OK|MB_ICONWARNING);return 0;}
            if(!SaveSetting(L"Prefix",g_tempPrefix)){ MessageBoxW(hwnd,L"无法在程序目录写入 BiliUrlConverter.ini。\n\n请把程序移动到桌面、下载目录或其他有写入权限的位置后再试。",APP_TITLE,MB_OK|MB_ICONERROR);return 0; }
            wcopy(g_prefix,g_tempPrefix,2048); g_modalResult=1; g_modalDone=TRUE; DestroyWindow(hwnd); return 0;
        case IDC_PFX_DEFAULT: SetWindowTextW(g_prefixEdit,DEFAULT_PREFIX); SetFocus(g_prefixEdit); return 0;
        case IDC_PFX_CANCEL: g_modalResult=0; g_modalDone=TRUE; DestroyWindow(hwnd); return 0;
        }
        break;
    case WM_CLOSE: g_modalResult=0; g_modalDone=TRUE; DestroyWindow(hwnd); return 0;
    case WM_DESTROY: g_modalDone=TRUE; g_prefixEdit=NULL; g_prefixDlg=NULL; g_pfxSave=g_pfxDefault=g_pfxCancel=NULL; return 0;
    }
    return DefWindowProcW(hwnd,msg,wp,lp);
}
static void RegisterPrefixClass(void){
    static BOOL done=FALSE; WNDCLASSEXW wc; if(done)return; memset(&wc,0,sizeof(wc)); wc.cbSize=sizeof(wc); wc.lpfnWndProc=PrefixProc2; wc.hInstance=g_inst; wc.hIcon=g_icon; wc.hIconSm=g_icon; wc.hCursor=LoadCursorW(NULL,IDC_ARROW); wc.hbrBackground=g_brBg; wc.lpszClassName=PREFIX_CLASS; if(RegisterClassExW(&wc)) done=TRUE;
}
static int RunModal(HWND dlg){
    MSG m; g_modalDone=FALSE; g_modalResult=0; EnableWindow(g_main,FALSE); ShowWindow(dlg,SW_SHOW); SetForegroundWindow(dlg);
    while(!g_modalDone){ int r=GetMessageW(&m,NULL,0,0); if(r<=0){g_modalDone=TRUE;break;} TranslateMessage(&m); DispatchMessageW(&m); }
    EnableWindow(g_main,TRUE); RestoreMainDpiAfterModal(); if(IsWindow(g_main)) SetForegroundWindow(g_main); return g_modalResult;
}
static void ShowPrefixDialog(void){
    HWND dlg; int x,y,w,h; UINT d=GetWindowDpiSafe(g_main); SetUiDpi(d); CenterPopupOnOwner(g_main,BASE_PREFIX_W,BASE_PREFIX_H,d,&x,&y,&w,&h); RegisterPrefixClass();
    dlg=CreateWindowExW(WS_EX_DLGMODALFRAME|WS_EX_TOPMOST,PREFIX_CLASS,L"修改网址前缀",WS_POPUP|WS_CAPTION|WS_SYSMENU|WS_CLIPCHILDREN,x,y,w,h,g_main,NULL,g_inst,NULL);
    if(!dlg){MessageBoxW(g_main,L"无法打开前缀设置窗口。",APP_TITLE,MB_OK|MB_ICONERROR);return;}
    if(RunModal(dlg)==1){ GenerateManual(FALSE); SetWindowTextW(g_status,L"网址前缀已保存并应用。配置位于程序运行目录。"); InvalidateRect(g_main,NULL,FALSE); }
}

/* ---------------- Close dialog ---------------- */
static HWND g_closeRemember=NULL;
static LRESULT CALLBACK CloseProc(HWND hwnd,UINT msg,WPARAM wp,LPARAM lp){
    switch(msg){
    case WM_CREATE:
        g_closeDlg=hwnd;
        g_closeRemember=CreateWindowExW(0,L"BUTTON",L"记住我的选择，以后不再提醒",WS_CHILD|WS_VISIBLE|WS_TABSTOP|WS_CLIPSIBLINGS|BS_AUTOCHECKBOX,S(44),S(188),S(340),S(30),hwnd,(HMENU)(ULONG_PTR)IDC_CLOSE_REMEMBER,g_inst,0); SetCtlFont(g_closeRemember,g_fontNormal);
        g_closeTray=MakeButton(hwnd,L"最小化到系统托盘",44,238,190,42,IDC_CLOSE_TRAY); g_closeExit=MakeButton(hwnd,L"退出程序",250,238,132,42,IDC_CLOSE_EXIT); g_closeCancel=MakeButton(hwnd,L"取消",398,238,100,42,IDC_CLOSE_CANCEL); return 0;
    case WM_DPICHANGED:
        { UINT nd=(UINT)(wp&0xffff); SetUiDpi(nd); ApplySuggestedDpiRect(hwnd,lp); LayoutCloseControls(); InvalidateRect(hwnd,NULL,TRUE); return 0; }
    case WM_PAINT: { PAINTSTRUCT ps; HDC dc=BeginPaint(hwnd,&ps); PaintCloseUi(hwnd,dc); EndPaint(hwnd,&ps); return 0; }
    case WM_ERASEBKGND: return 1;
    case WM_DRAWITEM: DrawButtonUi((DRAWITEMSTRUCT*)lp); return 1;
    case WM_CTLCOLORBTN: SetBkColor((HDC)wp,CLR_BG); SetTextColor((HDC)wp,CLR_TEXT); return (LRESULT)g_brBg;
    case WM_COMMAND:
        { int id=(int)(wp&0xffff); BOOL remember=g_closeRemember && SendMessageW(g_closeRemember,BM_GETCHECK,0,0)==BST_CHECKED;
          if(id==IDC_CLOSE_TRAY||id==IDC_CLOSE_EXIT){ int action=(id==IDC_CLOSE_TRAY)?1:2; g_closeAction=remember?action:0; SaveIntSetting(L"CloseAction",g_closeAction); g_modalResult=action; g_modalDone=TRUE; DestroyWindow(hwnd); return 0; }
          if(id==IDC_CLOSE_CANCEL){g_modalResult=0;g_modalDone=TRUE;DestroyWindow(hwnd);return 0;} }
        break;
    case WM_CLOSE: g_modalResult=0;g_modalDone=TRUE;DestroyWindow(hwnd);return 0;
    case WM_DESTROY: g_closeRemember=NULL;g_closeDlg=NULL;g_closeTray=g_closeExit=g_closeCancel=NULL;g_modalDone=TRUE;return 0;
    }
    return DefWindowProcW(hwnd,msg,wp,lp);
}
static void RegisterCloseClass(void){
    static BOOL done=FALSE; WNDCLASSEXW wc; if(done)return; memset(&wc,0,sizeof(wc)); wc.cbSize=sizeof(wc); wc.lpfnWndProc=CloseProc; wc.hInstance=g_inst; wc.hIcon=g_icon; wc.hIconSm=g_icon; wc.hCursor=LoadCursorW(NULL,IDC_ARROW); wc.hbrBackground=g_brBg; wc.lpszClassName=CLOSE_CLASS; if(RegisterClassExW(&wc)) done=TRUE;
}
static int ShowCloseDialog(void){
    HWND dlg; int x,y,w,h; UINT d=GetWindowDpiSafe(g_main); SetUiDpi(d); CenterPopupOnOwner(g_main,BASE_CLOSE_W,BASE_CLOSE_H,d,&x,&y,&w,&h); RegisterCloseClass();
    dlg=CreateWindowExW(WS_EX_DLGMODALFRAME|WS_EX_TOPMOST,CLOSE_CLASS,L"关闭确认",WS_POPUP|WS_CAPTION|WS_SYSMENU|WS_CLIPCHILDREN,x,y,w,h,g_main,NULL,g_inst,NULL);
    if(!dlg)return 0; return RunModal(dlg);
}

/* ---------------- Exit / tray menu ---------------- */
static void ReallyExit(void){
    if(g_exiting) return; g_exiting=TRUE;
    if(g_listenerAdded){RemoveClipboardFormatListener(g_main);g_listenerAdded=FALSE;}
    RemoveTrayIcon(); DestroyWindow(g_main);
}
static void ShowTrayMenu(void){
    HMENU menu=CreatePopupMenu(); POINT p; int cmd; if(!menu)return;
    AppendMenuW(menu,MF_STRING,IDM_SHOW,L"显示主窗口");
    AppendMenuW(menu,MF_STRING|(g_monitorEnabled?MF_CHECKED:MF_UNCHECKED),IDM_MONITOR,L"剪贴板监听");
    AppendMenuW(menu,MF_STRING,IDM_PREFIX,L"修改网址前缀...");
    AppendMenuW(menu,MF_STRING,IDM_CLOSE_ASK,L"关闭时再次询问");
    AppendMenuW(menu,MF_SEPARATOR,0,NULL);
    AppendMenuW(menu,MF_STRING,IDM_EXIT,L"退出程序");
    GetCursorPos(&p); SetForegroundWindow(g_main);
    cmd=TrackPopupMenu(menu,TPM_LEFTALIGN|TPM_RIGHTBUTTON|TPM_RETURNCMD,p.x,p.y,0,g_main,NULL);
    DestroyMenu(menu); PostMessageW(g_main,WM_NULL,0,0);
    if(cmd==IDM_SHOW) ShowMain();
    else if(cmd==IDM_MONITOR) SetMonitor(!g_monitorEnabled,TRUE);
    else if(cmd==IDM_PREFIX) ShowPrefixDialog();
    else if(cmd==IDM_CLOSE_ASK){g_closeAction=0;SaveIntSetting(L"CloseAction",0);SetWindowTextW(g_status,L"已恢复：点击关闭按钮时再次询问。");}
    else if(cmd==IDM_EXIT) ReallyExit();
}

/* ---------------- Main window ---------------- */
static LRESULT CALLBACK MainProc(HWND hwnd,UINT msg,WPARAM wp,LPARAM lp){
    switch(msg){
    case WM_CREATE:
        g_main=hwnd; SetUiDpi(GetWindowDpiSafe(hwnd));
        g_source=CreateWindowExW(0,L"EDIT",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|WS_CLIPSIBLINGS|ES_AUTOHSCROLL,S(50),S(174),S(800),S(34),hwnd,(HMENU)(ULONG_PTR)IDC_SOURCE,g_inst,0); SendMessageW(g_source,EM_SETLIMITTEXT,3900,0); SetCtlFont(g_source,g_fontNormal); SetEditMargins(g_source);
        g_result=CreateWindowExW(0,L"EDIT",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|WS_CLIPSIBLINGS|ES_AUTOHSCROLL|ES_READONLY,S(50),S(256),S(630),S(34),hwnd,(HMENU)(ULONG_PTR)IDC_RESULT,g_inst,0); SetCtlFont(g_result,g_fontNormal); SetEditMargins(g_result);
        g_btnCopy=MakeButton(hwnd,L"复制结果",696,251,156,42,IDC_COPY); g_btnGenerate=MakeButton(hwnd,L"生成并复制",48,310,180,44,IDC_GENERATE); g_btnClear=MakeButton(hwnd,L"清空",244,310,104,44,IDC_CLEAR); g_btnPrefix=MakeButton(hwnd,L"修改网址前缀",548,310,150,44,IDC_PREFIX); g_btnTray=MakeButton(hwnd,L"最小化到托盘",712,310,140,44,IDC_TRAY);
        g_monitor=CreateWindowExW(0,L"BUTTON",L"自动监听剪贴板中的哔哩哔哩网址",WS_CHILD|WS_VISIBLE|WS_TABSTOP|WS_CLIPSIBLINGS|BS_AUTOCHECKBOX,S(48),S(441),S(390),S(30),hwnd,(HMENU)(ULONG_PTR)IDC_MONITOR,g_inst,0); SetCtlFont(g_monitor,g_fontNormal);
        g_status=CreateWindowExW(0,L"STATIC",L"",WS_CHILD|WS_VISIBLE|WS_CLIPSIBLINGS|SS_LEFT,S(92),S(501),S(760),S(34),hwnd,(HMENU)(ULONG_PTR)IDC_STATUS,g_inst,0); SetCtlFont(g_status,g_fontSmall);
        UpdateMonitorUI(); AddTrayIcon(); SetMonitor(g_monitorEnabled,FALSE);
        if(g_configWritable) SetWindowTextW(g_status,L"就绪。配置保存在程序运行目录的 BiliUrlConverter.ini 中。"); else SetWindowTextW(g_status,L"程序可运行，但当前目录不可写：设置无法保存。建议把 EXE 移到桌面或其他可写目录。"); return 0;
    case WM_DPICHANGED:
        { UINT nd=(UINT)(wp&0xffff); SetUiDpi(nd); ApplySuggestedDpiRect(hwnd,lp); LayoutMainControls(); InvalidateRect(hwnd,NULL,TRUE); return 0; }
    case WM_PAINT: { PAINTSTRUCT ps; HDC dc=BeginPaint(hwnd,&ps); PaintMainUi(hwnd,dc); EndPaint(hwnd,&ps); return 0; }
    case WM_ERASEBKGND: return 1;
    case WM_DRAWITEM: DrawButtonUi((DRAWITEMSTRUCT*)lp); return 1;
    case WM_CTLCOLOREDIT: SetBkColor((HDC)wp,CLR_CARD); SetTextColor((HDC)wp,CLR_TEXT); return (LRESULT)g_brCard;
    case WM_CTLCOLORSTATIC:
        SetBkMode((HDC)wp,TRANSPARENT); SetTextColor((HDC)wp,CLR_MUTED); if((HWND)lp==g_result){SetBkColor((HDC)wp,CLR_CARD);SetTextColor((HDC)wp,CLR_TEXT);return (LRESULT)g_brCard;} return (LRESULT)g_brBg;
    case WM_CTLCOLORBTN: SetBkColor((HDC)wp,CLR_CARD); SetTextColor((HDC)wp,CLR_TEXT); return (LRESULT)g_brCard;
    case WM_COMMAND:
        if(((wp>>16)&0xffff)==BN_CLICKED){ int id=(int)(wp&0xffff); if(id==IDC_GENERATE){GenerateManual(TRUE);return 0;} if(id==IDC_COPY){CopyResult();return 0;} if(id==IDC_CLEAR){ClearAll();return 0;} if(id==IDC_PREFIX){ShowPrefixDialog();return 0;} if(id==IDC_TRAY){HideToTray();return 0;} if(id==IDC_MONITOR){BOOL e=SendMessageW(g_monitor,BM_GETCHECK,0,0)==BST_CHECKED;SetMonitor(e,TRUE);return 0;} }
        break;
    case WM_CLIPBOARDUPDATE: HandleClipboardUpdate(); return 0;
    case WM_SIZE: if((UINT)wp==SIZE_MINIMIZED){HideToTray();return 0;} break;
    case WM_TRAYICON: if((UINT)lp==WM_LBUTTONUP||(UINT)lp==WM_LBUTTONDBLCLK){ShowMain();return 0;} if((UINT)lp==WM_RBUTTONUP){ShowTrayMenu();return 0;} break;
    case WM_CLOSE:
        if(g_closeAction==1){HideToTray();return 0;} if(g_closeAction==2){ReallyExit();return 0;} { int a=ShowCloseDialog(); if(a==1)HideToTray(); else if(a==2)ReallyExit(); return 0; }
    case WM_DESTROY: FreeUiResources(); PostQuitMessage(0); return 0;
    }
    return DefWindowProcW(hwnd,msg,wp,lp);
}
static BOOL RegisterMainClass(void){ WNDCLASSEXW wc; memset(&wc,0,sizeof(wc)); wc.cbSize=sizeof(wc); wc.lpfnWndProc=MainProc; wc.hInstance=g_inst; wc.hIcon=g_icon; wc.hIconSm=g_icon; wc.hCursor=LoadCursorW(NULL,IDC_ARROW); wc.hbrBackground=g_brBg; wc.lpszClassName=MAIN_CLASS; return RegisterClassExW(&wc)!=0; }
static int AppMain(void){
    MSG m; HWND hwnd; int sw,sh,x,y,w,h;
    g_inst=(HINSTANCE)GetModuleHandleW(NULL); EnableBestDpiAwareness(); g_dpi=GetSystemDpiSafe(); LoadSettings();
    g_icon=LoadIconW(g_inst,MAKEINTRESOURCEW(101)); if(!g_icon) g_icon=LoadIconW(NULL,IDI_APPLICATION); InitUiResources();
    if(!RegisterMainClass()){MessageBoxW(NULL,L"程序窗口初始化失败。",APP_TITLE,MB_OK|MB_ICONERROR);return 1;}
    w=ScaleForDpi(BASE_MAIN_W,g_dpi); h=ScaleForDpi(BASE_MAIN_H,g_dpi); sw=GetSystemMetrics(0);sh=GetSystemMetrics(1);x=(sw-w)/2;y=(sh-h)/2;
    hwnd=CreateWindowExW(0,MAIN_CLASS,APP_TITLE,WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_MINIMIZEBOX|WS_CLIPCHILDREN,x,y,w,h,NULL,NULL,g_inst,NULL);
    if(!hwnd){MessageBoxW(NULL,L"无法创建主窗口。",APP_TITLE,MB_OK|MB_ICONERROR);return 2;}
    g_main=hwnd; SendMessageW(hwnd,WM_SETICON,ICON_BIG,(LPARAM)g_icon); SendMessageW(hwnd,WM_SETICON,ICON_SMALL,(LPARAM)g_icon); ShowWindow(hwnd,SW_SHOWNORMAL); UpdateWindow(hwnd);
    while(GetMessageW(&m,NULL,0,0)>0){TranslateMessage(&m);DispatchMessageW(&m);} return 0;
}

void WINAPI AppEntry(void){ int code=AppMain(); ExitProcess((UINT)code); }
