#include "com.h"

#include "stddef.h"

struct AvnSize;
struct AvnPixelSize;
struct AvnRect;
struct AvnVector;
struct AvnPoint;
struct AvnScreen;
struct AvnFramebuffer;
struct AvnColor;
struct IAvaloniaNativeFactory;
struct IAvnString;
struct IAvnWindowBase;
struct IAvnPopup;
struct IAvnWindow;
struct IAvnWindowBaseEvents;
struct IAvnWindowEvents;
struct IAvnMacOptions;
struct IAvnActionCallback;
struct IAvnSignaledCallback;
struct IAvnLoopCancellation;
struct IAvnPlatformThreadingInterface;
struct IAvnSystemDialogEvents;
struct IAvnSystemDialogs;
struct IAvnScreens;
struct IAvnClipboard;
struct IAvnCursor;
struct IAvnCursorFactory;
struct IAvnGlDisplay;
struct IAvnGlContext;
struct IAvnGlSurfaceRenderTarget;
struct IAvnGlSurfaceRenderingSession;
struct IAvnMenu;
struct IAvnPredicateCallback;
struct IAvnMenuItem;
struct IAvnMenuEvents;
struct IAvnStringArray;
struct IAvnDndResultCallback;
struct IAvnGCHandleDeallocatorCallback;
struct IAvnNativeControlHost;
struct IAvnNativeControlHostTopLevelAttachment;
enum AvnKey
{
    AvnKeyNone = 0,
    AvnKeyCancel = 1,
    AvnKeyBack = 2,
    AvnKeyTab = 3,
    AvnKeyLineFeed = 4,
    AvnKeyClear = 5,
    AvnKeyReturn = 6,
    AvnKeyEnter = 6,
    AvnKeyPause = 7,
    AvnKeyCapsLock = 8,
    AvnKeyCapital = 8,
    AvnKeyHangulMode = 9,
    AvnKeyKanaMode = 9,
    AvnKeyJunjaMode = 10,
    AvnKeyFinalMode = 11,
    AvnKeyKanjiMode = 12,
    HanjaMode = 12,
    Escape = 13,
    ImeConvert = 14,
    ImeNonConvert = 15,
    ImeAccept = 16,
    ImeModeChange = 17,
    Space = 18,
    PageUp = 19,
    Prior = 19,
    PageDown = 20,
    Next = 20,
    End = 21,
    Home = 22,
    Left = 23,
    Up = 24,
    Right = 25,
    Down = 26,
    Select = 27,
    Print = 28,
    Execute = 29,
    Snapshot = 30,
    PrintScreen = 30,
    Insert = 31,
    Delete = 32,
    Help = 33,
    D0 = 34,
    D1 = 35,
    D2 = 36,
    D3 = 37,
    D4 = 38,
    D5 = 39,
    D6 = 40,
    D7 = 41,
    D8 = 42,
    D9 = 43,
    A = 44,
    B = 45,
    C = 46,
    D = 47,
    E = 48,
    F = 49,
    G = 50,
    H = 51,
    I = 52,
    J = 53,
    AvnKeyK = 54,
    L = 55,
    M = 56,
    N = 57,
    O = 58,
    P = 59,
    Q = 60,
    R = 61,
    S = 62,
    T = 63,
    U = 64,
    V = 65,
    W = 66,
    X = 67,
    Y = 68,
    Z = 69,
    LWin = 70,
    RWin = 71,
    Apps = 72,
    Sleep = 73,
    NumPad0 = 74,
    NumPad1 = 75,
    NumPad2 = 76,
    NumPad3 = 77,
    NumPad4 = 78,
    NumPad5 = 79,
    NumPad6 = 80,
    NumPad7 = 81,
    NumPad8 = 82,
    NumPad9 = 83,
    Multiply = 84,
    Add = 85,
    Separator = 86,
    Subtract = 87,
    Decimal = 88,
    Divide = 89,
    F1 = 90,
    F2 = 91,
    F3 = 92,
    F4 = 93,
    F5 = 94,
    F6 = 95,
    F7 = 96,
    F8 = 97,
    F9 = 98,
    F10 = 99,
    F11 = 100,
    F12 = 101,
    F13 = 102,
    F14 = 103,
    F15 = 104,
    F16 = 105,
    F17 = 106,
    F18 = 107,
    F19 = 108,
    F20 = 109,
    F21 = 110,
    F22 = 111,
    F23 = 112,
    F24 = 113,
    NumLock = 114,
    Scroll = 115,
    LeftShift = 116,
    RightShift = 117,
    LeftCtrl = 118,
    RightCtrl = 119,
    LeftAlt = 120,
    RightAlt = 121,
    BrowserBack = 122,
    BrowserForward = 123,
    BrowserRefresh = 124,
    BrowserStop = 125,
    BrowserSearch = 126,
    BrowserFavorites = 127,
    BrowserHome = 128,
    VolumeMute = 129,
    VolumeDown = 130,
    VolumeUp = 131,
    MediaNextTrack = 132,
    MediaPreviousTrack = 133,
    MediaStop = 134,
    MediaPlayPause = 135,
    LaunchMail = 136,
    SelectMedia = 137,
    LaunchApplication1 = 138,
    LaunchApplication2 = 139,
    OemSemicolon = 140,
    Oem1 = 140,
    OemPlus = 141,
    OemComma = 142,
    OemMinus = 143,
    OemPeriod = 144,
    OemQuestion = 145,
    Oem2 = 145,
    OemTilde = 146,
    Oem3 = 146,
    AbntC1 = 147,
    AbntC2 = 148,
    OemOpenBrackets = 149,
    Oem4 = 149,
    OemPipe = 150,
    Oem5 = 150,
    OemCloseBrackets = 151,
    Oem6 = 151,
    OemQuotes = 152,
    Oem7 = 152,
    Oem8 = 153,
    OemBackslash = 154,
    Oem102 = 154,
    ImeProcessed = 155,
    System = 156,
    OemAttn = 157,
    DbeAlphanumeric = 157,
    OemFinish = 158,
    DbeKatakana = 158,
    DbeHiragana = 159,
    OemCopy = 159,
    DbeSbcsChar = 160,
    OemAuto = 160,
    DbeDbcsChar = 161,
    OemEnlw = 161,
    OemBackTab = 162,
    DbeRoman = 162,
    DbeNoRoman = 163,
    Attn = 163,
    CrSel = 164,
    DbeEnterWordRegisterMode = 164,
    ExSel = 165,
    DbeEnterImeConfigureMode = 165,
    EraseEof = 166,
    DbeFlushString = 166,
    Play = 167,
    DbeCodeInput = 167,
    DbeNoCodeInput = 168,
    Zoom = 168,
    NoName = 169,
    DbeDetermineString = 169,
    DbeEnterDialogConversionMode = 170,
    Pa1 = 170,
    OemClear = 171,
    DeadCharProcessed = 172,
};
enum SystemDecorations
{
    SystemDecorationsNone = 0,
    SystemDecorationsBorderOnly = 1,
    SystemDecorationsFull = 2,
};
enum AvnPixelFormat
{
    kAvnRgb565,
    kAvnRgba8888,
    kAvnBgra8888,
};
enum AvnRawMouseEventType
{
    LeaveWindow,
    LeftButtonDown,
    LeftButtonUp,
    RightButtonDown,
    RightButtonUp,
    MiddleButtonDown,
    MiddleButtonUp,
    XButton1Down,
    XButton1Up,
    XButton2Down,
    XButton2Up,
    Move,
    Wheel,
    NonClientLeftButtonDown,
    TouchBegin,
    TouchUpdate,
    TouchEnd,
    TouchCancel,
};
enum AvnRawKeyEventType
{
    KeyDown,
    KeyUp,
};
enum AvnInputModifiers
{
    AvnInputModifiersNone = 0,
    Alt = 1,
    Control = 2,
    Shift = 4,
    Windows = 8,
    LeftMouseButton = 16,
    RightMouseButton = 32,
    MiddleMouseButton = 64,
    XButton1MouseButton = 128,
    XButton2MouseButton = 256,
};
enum class AvnDragDropEffects
{
    None = 0,
    Copy = 1,
    Move = 2,
    Link = 4,
};
enum class AvnDragEventType
{
    Enter,
    Over,
    Leave,
    Drop,
};
enum AvnWindowState
{
    Normal,
    Minimized,
    Maximized,
    FullScreen,
};
enum AvnStandardCursorType
{
    CursorArrow,
    CursorIbeam,
    CursorWait,
    CursorCross,
    CursorUpArrow,
    CursorSizeWestEast,
    CursorSizeNorthSouth,
    CursorSizeAll,
    CursorNo,
    CursorHand,
    CursorAppStarting,
    CursorHelp,
    CursorTopSide,
    CursorBottomSize,
    CursorLeftSide,
    CursorRightSide,
    CursorTopLeftCorner,
    CursorTopRightCorner,
    CursorBottomLeftCorner,
    CursorBottomRightCorner,
    CursorDragMove,
    CursorDragCopy,
    CursorDragLink,
    CursorNone,
};
enum AvnWindowEdge
{
    WindowEdgeNorthWest,
    WindowEdgeNorth,
    WindowEdgeNorthEast,
    WindowEdgeWest,
    WindowEdgeEast,
    WindowEdgeSouthWest,
    WindowEdgeSouth,
    WindowEdgeSouthEast,
};
enum AvnMenuItemToggleType
{
    None,
    CheckMark,
    Radio,
};
enum AvnExtendClientAreaChromeHints
{
    AvnNoChrome = 0,
    AvnSystemChrome = 0x01,
    AvnPreferSystemChrome = 0x02,
    AvnOSXThickTitleBar = 0x08,
    AvnDefaultChrome = AvnSystemChrome,
};
struct AvnSize
{
    double Width;
    double Height;
};
struct AvnPixelSize
{
    int Width;
    int Height;
};
struct AvnRect
{
    double X;
    double Y;
    double Width;
    double Height;
};
struct AvnVector
{
    double X;
    double Y;
};
struct AvnPoint
{
    double X;
    double Y;
};
struct AvnScreen
{
    AvnRect Bounds;
    AvnRect WorkingArea;
    float PixelDensity;
    bool Primary;
};
struct AvnFramebuffer
{
    void* Data;
    int Width;
    int Height;
    int Stride;
    AvnVector Dpi;
    AvnPixelFormat PixelFormat;
};
struct AvnColor
{
    unsigned char Alpha;
    unsigned char Red;
    unsigned char Green;
    unsigned char Blue;
};
COMINTERFACE(IAvaloniaNativeFactory, 809c652e, 7396, 11d2, 97, 71, 00, a0, c9, b4, d5, 0c) : IUnknown
{
    virtual HRESULT Initialize (
        IAvnGCHandleDeallocatorCallback* deallocator
    ) = 0;
    virtual IAvnMacOptions* GetMacOptions () = 0;
    virtual HRESULT CreateWindow (
        IAvnWindowEvents* cb, 
        IAvnGlContext* gl, 
        IAvnWindow** ppv
    ) = 0;
    virtual HRESULT CreatePopup (
        IAvnWindowEvents* cb, 
        IAvnGlContext* gl, 
        IAvnPopup** ppv
    ) = 0;
    virtual HRESULT CreatePlatformThreadingInterface (
        IAvnPlatformThreadingInterface** ppv
    ) = 0;
    virtual HRESULT CreateSystemDialogs (
        IAvnSystemDialogs** ppv
    ) = 0;
    virtual HRESULT CreateScreens (
        IAvnScreens** ppv
    ) = 0;
    virtual HRESULT CreateClipboard (
        IAvnClipboard** ppv
    ) = 0;
    virtual HRESULT CreateDndClipboard (
        IAvnClipboard** ppv
    ) = 0;
    virtual HRESULT CreateCursorFactory (
        IAvnCursorFactory** ppv
    ) = 0;
    virtual HRESULT ObtainGlDisplay (
        IAvnGlDisplay** ppv
    ) = 0;
    virtual HRESULT SetAppMenu (
        IAvnMenu* menu
    ) = 0;
    virtual HRESULT CreateMenu (
        IAvnMenuEvents* cb, 
        IAvnMenu** ppv
    ) = 0;
    virtual HRESULT CreateMenuItem (
        IAvnMenuItem** ppv
    ) = 0;
    virtual HRESULT CreateMenuItemSeperator (
        IAvnMenuItem** ppv
    ) = 0;
};
COMINTERFACE(IAvnString, 233e094f, 9b9f, 44a3, 9a, 6e, 69, 48, bb, dd, 9f, b1) : IUnknown
{
    virtual HRESULT Pointer (
        void** retOut
    ) = 0;
    virtual HRESULT Length (
        int* ret
    ) = 0;
};
COMINTERFACE(IAvnWindowBase, e5aca675, 02b7, 4129, aa, 79, d6, e4, 17, 21, 0b, da) : IUnknown
{
    virtual HRESULT Show (
        bool activate
    ) = 0;
    virtual HRESULT Hide () = 0;
    virtual HRESULT Close () = 0;
    virtual HRESULT Activate () = 0;
    virtual HRESULT GetClientSize (
        AvnSize* ret
    ) = 0;
    virtual HRESULT GetScaling (
        double* ret
    ) = 0;
    virtual HRESULT SetMinMaxSize (
        AvnSize minSize, 
        AvnSize maxSize
    ) = 0;
    virtual HRESULT Resize (
        double width, 
        double height
    ) = 0;
    virtual HRESULT Invalidate (
        AvnRect rect
    ) = 0;
    virtual HRESULT BeginMoveDrag () = 0;
    virtual HRESULT BeginResizeDrag (
        AvnWindowEdge edge
    ) = 0;
    virtual HRESULT GetPosition (
        AvnPoint* ret
    ) = 0;
    virtual HRESULT SetPosition (
        AvnPoint point
    ) = 0;
    virtual HRESULT PointToClient (
        AvnPoint point, 
        AvnPoint* ret
    ) = 0;
    virtual HRESULT PointToScreen (
        AvnPoint point, 
        AvnPoint* ret
    ) = 0;
    virtual HRESULT ThreadSafeSetSwRenderedFrame (
        AvnFramebuffer* fb, 
        IUnknown* dispose
    ) = 0;
    virtual HRESULT SetTopMost (
        bool value
    ) = 0;
    virtual HRESULT SetCursor (
        IAvnCursor* cursor
    ) = 0;
    virtual HRESULT CreateGlRenderTarget (
        IAvnGlSurfaceRenderTarget** ret
    ) = 0;
    virtual HRESULT SetMainMenu (
        IAvnMenu* menu
    ) = 0;
    virtual HRESULT ObtainNSWindowHandle (
        void** retOut
    ) = 0;
    virtual HRESULT ObtainNSWindowHandleRetained (
        void** retOut
    ) = 0;
    virtual HRESULT ObtainNSViewHandle (
        void** retOut
    ) = 0;
    virtual HRESULT ObtainNSViewHandleRetained (
        void** retOut
    ) = 0;
    virtual HRESULT CreateNativeControlHost (
        IAvnNativeControlHost** retOut
    ) = 0;
    virtual HRESULT BeginDragAndDropOperation (
        AvnDragDropEffects effects, 
        AvnPoint point, 
        IAvnClipboard* clipboard, 
        IAvnDndResultCallback* cb, 
        void* sourceHandle
    ) = 0;
    virtual HRESULT SetBlurEnabled (
        bool enable
    ) = 0;
};
COMINTERFACE(IAvnPopup, 83e588f3, 6981, 4e48, 9e, a0, e1, e5, 69, f7, 9a, 91) : virtual IAvnWindowBase
{
};
COMINTERFACE(IAvnWindow, cab661de, 49d6, 4ead, b5, 9c, ea, c9, b2, b6, c2, 8d) : virtual IAvnWindowBase
{
    virtual HRESULT SetEnabled (
        bool enable
    ) = 0;
    virtual HRESULT SetParent (
        IAvnWindow* parent
    ) = 0;
    virtual HRESULT SetCanResize (
        bool value
    ) = 0;
    virtual HRESULT SetDecorations (
        SystemDecorations value
    ) = 0;
    virtual HRESULT SetTitle (
        char* utf8Title
    ) = 0;
    virtual HRESULT SetTitleBarColor (
        AvnColor color
    ) = 0;
    virtual HRESULT SetWindowState (
        AvnWindowState state
    ) = 0;
    virtual HRESULT GetWindowState (
        AvnWindowState* ret
    ) = 0;
    virtual HRESULT TakeFocusFromChildren () = 0;
    virtual HRESULT SetExtendClientArea (
        bool enable
    ) = 0;
    virtual HRESULT SetExtendClientAreaHints (
        AvnExtendClientAreaChromeHints hints
    ) = 0;
    virtual HRESULT GetExtendTitleBarHeight (
        double* ret
    ) = 0;
    virtual HRESULT SetExtendTitleBarHeight (
        double value
    ) = 0;
};
COMINTERFACE(IAvnWindowBaseEvents, 939b6599, 40a8, 4710, a4, c8, 5d, 72, d8, f1, 74, fb) : IUnknown
{
    virtual HRESULT Paint () = 0;
    virtual void Closed () = 0;
    virtual void Activated () = 0;
    virtual void Deactivated () = 0;
    virtual void Resized (
        const AvnSize& size
    ) = 0;
    virtual void PositionChanged (
        AvnPoint position
    ) = 0;
    virtual void RawMouseEvent (
        AvnRawMouseEventType type, 
        unsigned int timeStamp, 
        AvnInputModifiers modifiers, 
        AvnPoint point, 
        AvnVector delta
    ) = 0;
    virtual bool RawKeyEvent (
        AvnRawKeyEventType type, 
        unsigned int timeStamp, 
        AvnInputModifiers modifiers, 
        unsigned int key
    ) = 0;
    virtual bool RawTextInputEvent (
        unsigned int timeStamp, 
        const char* text
    ) = 0;
    virtual void ScalingChanged (
        double scaling
    ) = 0;
    virtual void RunRenderPriorityJobs () = 0;
    virtual void LostFocus () = 0;
    virtual AvnDragDropEffects DragEvent (
        AvnDragEventType type, 
        AvnPoint position, 
        AvnInputModifiers modifiers, 
        AvnDragDropEffects effects, 
        IAvnClipboard* clipboard, 
        void* dataObjectHandle
    ) = 0;
};
COMINTERFACE(IAvnWindowEvents, 1ae178ee, 1fcc, 447f, b6, dd, b7, bb, 72, 7f, 93, 4c) : IAvnWindowBaseEvents
{
    virtual bool Closing () = 0;
    virtual void WindowStateChanged (
        AvnWindowState state
    ) = 0;
    virtual void GotInputWhenDisabled () = 0;
};
COMINTERFACE(IAvnMacOptions, e34ae0f8, 18b4, 48a3, b0, 9d, 2e, 6b, 19, a3, cf, 5e) : IUnknown
{
    virtual HRESULT SetShowInDock (
        int show
    ) = 0;
    virtual HRESULT SetApplicationTitle (
        char* utf8string
    ) = 0;
};
COMINTERFACE(IAvnActionCallback, 04c1b049, 1f43, 418a, 91, 59, ca, e6, 27, ec, 13, 67) : IUnknown
{
    virtual void Run () = 0;
};
COMINTERFACE(IAvnSignaledCallback, 6df4d2db, 0b80, 4f59, ad, 88, 0b, aa, 5e, 21, eb, 14) : IUnknown
{
    virtual void Signaled (
        int priority, 
        bool priorityContainsMeaningfulValue
    ) = 0;
};
COMINTERFACE(IAvnLoopCancellation, 97330f88, c22b, 4a8e, a1, 30, 20, 15, 20, 09, 1b, 01) : IUnknown
{
    virtual void Cancel () = 0;
};
COMINTERFACE(IAvnPlatformThreadingInterface, fbc06f3d, 7860, 42df, 83, fd, 53, c4, b0, 2d, d9, c3) : IUnknown
{
    virtual bool GetCurrentThreadIsLoopThread () = 0;
    virtual void SetSignaledCallback (
        IAvnSignaledCallback* cb
    ) = 0;
    virtual IAvnLoopCancellation* CreateLoopCancellation () = 0;
    virtual HRESULT RunLoop (
        IAvnLoopCancellation* cancel
    ) = 0;
    virtual void Signal (
        int priority
    ) = 0;
    virtual IUnknown* StartTimer (
        int priority, 
        int ms, 
        IAvnActionCallback* callback
    ) = 0;
};
COMINTERFACE(IAvnSystemDialogEvents, 6c621a6e, e4c1, 4ae3, 97, 49, 83, ee, ef, fa, 09, b6) : IUnknown
{
    virtual void OnCompleted (
        int numResults, 
        void* ptrFirstResult
    ) = 0;
};
COMINTERFACE(IAvnSystemDialogs, 4d7a47db, a944, 4061, ab, e7, 62, cb, 6a, a0, ff, d5) : IUnknown
{
    virtual void SelectFolderDialog (
        IAvnWindow* parentWindowHandle, 
        IAvnSystemDialogEvents* events, 
        const char* title, 
        const char* initialPath
    ) = 0;
    virtual void OpenFileDialog (
        IAvnWindow* parentWindowHandle, 
        IAvnSystemDialogEvents* events, 
        bool allowMultiple, 
        const char* title, 
        const char* initialDirectory, 
        const char* initialFile, 
        const char* filters
    ) = 0;
    virtual void SaveFileDialog (
        IAvnWindow* parentWindowHandle, 
        IAvnSystemDialogEvents* events, 
        const char* title, 
        const char* initialDirectory, 
        const char* initialFile, 
        const char* filters
    ) = 0;
};
COMINTERFACE(IAvnScreens, 9a52bc7a, d8c7, 4230, 8d, 34, 70, 4a, 0b, 70, a9, 33) : IUnknown
{
    virtual HRESULT GetScreenCount (
        int* ret
    ) = 0;
    virtual HRESULT GetScreen (
        int index, 
        AvnScreen* ret
    ) = 0;
};
COMINTERFACE(IAvnClipboard, 792b1bd4, 76cc, 46ea, bf, d0, 9d, 64, 21, 54, b1, b3) : IUnknown
{
    virtual HRESULT GetText (
        char* type, 
        IAvnString** ppv
    ) = 0;
    virtual HRESULT SetText (
        char* type, 
        char* utf8Text
    ) = 0;
    virtual HRESULT ObtainFormats (
        IAvnStringArray** ppv
    ) = 0;
    virtual HRESULT GetStrings (
        char* type, 
        IAvnStringArray** ppv
    ) = 0;
    virtual HRESULT SetBytes (
        char* type, 
        void* utf8Text, 
        int len
    ) = 0;
    virtual HRESULT GetBytes (
        char* type, 
        IAvnString** ppv
    ) = 0;
    virtual HRESULT Clear () = 0;
};
COMINTERFACE(IAvnCursor, 3f998545, f027, 4d4d, bd, 2a, 1a, 80, 92, 6d, 98, 4e) : IUnknown
{
};
COMINTERFACE(IAvnCursorFactory, 51ecfb12, c427, 4757, a2, c9, 15, 96, bf, ce, 53, ef) : IUnknown
{
    virtual HRESULT GetCursor (
        AvnStandardCursorType cursorType, 
        IAvnCursor** retOut
    ) = 0;
    virtual HRESULT CreateCustomCursor (
        void* bitmapData, 
        size_t length, 
        AvnPixelSize hotPixel, 
        IAvnCursor** retOut
    ) = 0;
};
COMINTERFACE(IAvnGlDisplay, 60452465, 8616, 40af, bc, 00, 04, 2e, 69, 82, 8c, e7) : IUnknown
{
    virtual HRESULT CreateContext (
        IAvnGlContext* share, 
        IAvnGlContext** ppv
    ) = 0;
    virtual void LegacyClearCurrentContext () = 0;
    virtual HRESULT WrapContext (
        void* native, 
        IAvnGlContext** ppv
    ) = 0;
    virtual void* GetProcAddress (
        char* proc
    ) = 0;
};
COMINTERFACE(IAvnGlContext, 78c5711e, 2a98, 40d2, ba, c4, 0c, c9, a4, 9d, c4, f3) : IUnknown
{
    virtual HRESULT MakeCurrent (
        IUnknown** ppv
    ) = 0;
    virtual HRESULT LegacyMakeCurrent () = 0;
    virtual int GetSampleCount () = 0;
    virtual int GetStencilSize () = 0;
    virtual void* GetNativeHandle () = 0;
};
COMINTERFACE(IAvnGlSurfaceRenderTarget, 931062d2, 5bc8, 4062, 85, 88, 83, dd, 8d, eb, 99, c2) : IUnknown
{
    virtual HRESULT BeginDrawing (
        IAvnGlSurfaceRenderingSession** ret
    ) = 0;
};
COMINTERFACE(IAvnGlSurfaceRenderingSession, e625b406, f04c, 484e, 94, 6a, 4a, bd, 2c, 60, 15, ad) : IUnknown
{
    virtual HRESULT GetPixelSize (
        AvnPixelSize* ret
    ) = 0;
    virtual HRESULT GetScaling (
        double* ret
    ) = 0;
};
COMINTERFACE(IAvnMenu, a7724dc1, cf6b, 4fa8, 9d, 23, 22, 8b, f2, 59, 3e, dc) : IUnknown
{
    virtual HRESULT InsertItem (
        int index, 
        IAvnMenuItem* item
    ) = 0;
    virtual HRESULT RemoveItem (
        IAvnMenuItem* item
    ) = 0;
    virtual HRESULT SetTitle (
        char* utf8String
    ) = 0;
    virtual HRESULT Clear () = 0;
};
COMINTERFACE(IAvnPredicateCallback, 59e0586d, bd1c, 4b85, 98, 82, 80, d4, 48, b0, fe, d9) : IUnknown
{
    virtual bool Evaluate () = 0;
};
COMINTERFACE(IAvnMenuItem, f890219a, 1720, 4cd5, 9a, 26, cd, 95, fc, cb, f5, 3c) : IUnknown
{
    virtual HRESULT SetSubMenu (
        IAvnMenu* menu
    ) = 0;
    virtual HRESULT SetTitle (
        char* utf8String
    ) = 0;
    virtual HRESULT SetGesture (
        AvnKey key, 
        AvnInputModifiers modifiers
    ) = 0;
    virtual HRESULT SetAction (
        IAvnPredicateCallback* predicate, 
        IAvnActionCallback* callback
    ) = 0;
    virtual HRESULT SetIsChecked (
        bool isChecked
    ) = 0;
    virtual HRESULT SetToggleType (
        AvnMenuItemToggleType toggleType
    ) = 0;
    virtual HRESULT SetIcon (
        void* data, 
        size_t length
    ) = 0;
};
COMINTERFACE(IAvnMenuEvents, 0af7df53, 7632, 42f4, a6, 50, 09, 92, c3, 61, b4, 77) : IUnknown
{
    virtual void NeedsUpdate () = 0;
};
COMINTERFACE(IAvnStringArray, 5142bb41, 66ab, 49e7, bb, 37, cd, 07, 9c, 00, 0f, 27) : IUnknown
{
    virtual unsigned int GetCount () = 0;
    virtual HRESULT Get (
        unsigned int index, 
        IAvnString** ppv
    ) = 0;
};
COMINTERFACE(IAvnDndResultCallback, a13d2382, 3b3a, 4d1c, 9b, 27, 8f, 34, 65, 3d, 3f, 01) : IUnknown
{
    virtual void OnDragAndDropComplete (
        AvnDragDropEffects effecct
    ) = 0;
};
COMINTERFACE(IAvnGCHandleDeallocatorCallback, f07c608e, 52e9, 422d, 83, 6e, c7, 0f, 6e, 9b, 80, f5) : IUnknown
{
    virtual void FreeGCHandle (
        void* handle
    ) = 0;
};
COMINTERFACE(IAvnNativeControlHost, 91c7f677, f26b, 4ff3, 93, cc, cf, 15, aa, 96, 6f, fa) : IUnknown
{
    virtual HRESULT CreateDefaultChild (
        void* parent, 
        void** retOut
    ) = 0;
    virtual IAvnNativeControlHostTopLevelAttachment* CreateAttachment () = 0;
    virtual void DestroyDefaultChild (
        void* child
    ) = 0;
};
COMINTERFACE(IAvnNativeControlHostTopLevelAttachment, 14a9e164, 1aae, 4271, bb, 78, 7b, 52, 30, 99, 9b, 52) : IUnknown
{
    virtual void* GetParentHandle () = 0;
    virtual HRESULT InitializeWithChildHandle (
        void* child
    ) = 0;
    virtual HRESULT AttachTo (
        IAvnNativeControlHost* host
    ) = 0;
    virtual void ShowInBounds (
        float x, 
        float y, 
        float width, 
        float height
    ) = 0;
    virtual void HideWithSize (
        float width, 
        float height
    ) = 0;
    virtual void ReleaseChild () = 0;
};
