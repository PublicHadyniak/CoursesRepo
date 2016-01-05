#define WM_APP 32768
#define WM_ACTIVATE 6
#define WM_ACTIVATEAPP 28
#define WM_AFXFIRST 864
#define WM_AFXLAST 895
#define WM_ASKCBFORMATNAME 780
#define WM_CANCELJOURNAL 75
#define WM_CANCELMODE 31
#define WM_CAPTURECHANGED 533
#define WM_CHANGECBCHAIN 781
#define WM_CHAR 258
#define WM_CHARTOITEM 47
#define WM_CHILDACTIVATE 34
#define WM_CLEAR 771
#define WM_CLOSE 16
#define WM_COMMAND 273
#define WM_COMMNOTIFY 68		/* obsolete - застарілий */
#define WM_COMPACTING 65
#define WM_COMPAREITEM 57
#define WM_CONTEXTMENU 123
#define WM_COPY 769
#define WM_COPYDATA 74
#define WM_CREATE 1
#define WM_CTLCOLORBTN 309
#define WM_CTLCOLORDLG 310
#define WM_CTLCOLOREDIT 307
#define WM_CTLCOLORLISTBOX 308
#define WM_CTLCOLORMSGBOX 306
#define WM_CTLCOLORSCROLLBAR 311
#define WM_CTLCOLORSTATIC 312
#define WM_CUT 768
#define WM_DEADCHAR 259
#define WM_DELETEITEM 45
#define WM_DESTROY 2
#define WM_DESTROYCLIPBOARD 775
#define WM_DEVICECHANGE 537
#define WM_DEVMODECHANGE 27
#define WM_DISPLAYCHANGE 126
#define WM_DRAWCLIPBOARD 776
#define WM_DRAWITEM 43
#define WM_DROPFILES 563
#define WM_ENABLE 10
#define WM_ENDSESSION 22
#define WM_ENTERIDLE 289
#define WM_ENTERMENULOOP 529
#define WM_ENTERSIZEMOVE 561
#define WM_ERASEBKGND 20
#define WM_EXITMENULOOP 530
#define WM_EXITSIZEMOVE 562
#define WM_FONTCHANGE 29
#define WM_GETDLGCODE 135
#define WM_GETFONT 49
#define WM_GETHOTKEY 51
#define WM_GETICON 127
#define WM_GETMINMAXINFO 36
#define WM_GETTEXT 13
#define WM_GETTEXTLENGTH 14
#define WM_HANDHELDFIRST 856
#define WM_HANDHELDLAST 863
#define WM_HELP 83
#define WM_HOTKEY 786
#define WM_HSCROLL 276
#define WM_HSCROLLCLIPBOARD 782
#define WM_ICONERASEBKGND 39
#define WM_INITDIALOG 272
#define WM_INITMENU 278
#define WM_INITMENUPOPUP 279
#if (_WIN32_WINNT >= 0x0501)
#define WM_INPUT 0x00FF
#endif
#define WM_INPUTLANGCHANGE 81
#define WM_INPUTLANGCHANGEREQUEST 80
#define WM_KEYDOWN 256
#define WM_KEYUP 257
#define WM_KILLFOCUS 8
#define WM_MDIACTIVATE 546
#define WM_MDICASCADE 551
#define WM_MDICREATE 544
#define WM_MDIDESTROY 545
#define WM_MDIGETACTIVE 553
#define WM_MDIICONARRANGE 552
#define WM_MDIMAXIMIZE 549
#define WM_MDINEXT 548
#define WM_MDIREFRESHMENU 564
#define WM_MDIRESTORE 547
#define WM_MDISETMENU 560
#define WM_MDITILE 550
#define WM_MEASUREITEM 44
#if (WINVER >= 0x0500)
#define WM_GETOBJECT 0x003D
#define WM_CHANGEUISTATE 0x0127
#define WM_UPDATEUISTATE 0x0128
#define WM_QUERYUISTATE 0x0129
#define WM_UNINITMENUPOPUP 0x0125
#define WM_MENURBUTTONUP 290
#define WM_MENUCOMMAND 0x0126
#define WM_MENUGETOBJECT 0x0124
#define WM_MENUDRAG 0x0123
#define WM_APPCOMMAND 0x0319
#endif
#define WM_MENUCHAR 288
#define WM_MENUSELECT 287
#define WM_NEXTMENU 531
#define WM_MOVE 3
#define WM_MOVING 534
#define WM_NCACTIVATE 134
#define WM_NCCALCSIZE 131
#define WM_NCCREATE 129
#define WM_NCDESTROY 130
#define WM_NCHITTEST 132
#define WM_NCLBUTTONDBLCLK 163
#define WM_NCLBUTTONDOWN 161
#define WM_NCLBUTTONUP 162
#define WM_NCMBUTTONDBLCLK 169
#define WM_NCMBUTTONDOWN 167
#define WM_NCMBUTTONUP 168
#if (_WIN32_WINNT >= 0x0500)
#define WM_NCXBUTTONDOWN 171
#define WM_NCXBUTTONUP 172
#define WM_NCXBUTTONDBLCLK 173
#define WM_NCMOUSEHOVER 0x02A0
#define WM_NCMOUSELEAVE 0x02A2
#endif
#define WM_NCMOUSEMOVE 160
#define WM_NCPAINT 133
#define WM_NCRBUTTONDBLCLK 166
#define WM_NCRBUTTONDOWN 164
#define WM_NCRBUTTONUP 165
#define WM_NEXTDLGCTL 40
#define WM_NEXTMENU 531
#define WM_NOTIFY 78
#define WM_NOTIFYFORMAT 85
#define WM_NULL 0
#define WM_PAINT 15
#define WM_PAINTCLIPBOARD 777
#define WM_PAINTICON 38
#define WM_PALETTECHANGED 785
#define WM_PALETTEISCHANGING 784
#define WM_PARENTNOTIFY 528
#define WM_PASTE 770
#define WM_PENWINFIRST 896
#define WM_PENWINLAST 911
#define WM_POWER 72
#define WM_POWERBROADCAST 536
#define WM_PRINT 791
#define WM_PRINTCLIENT 792
#define WM_QUERYDRAGICON 55
#define WM_QUERYENDSESSION 17
#define WM_QUERYNEWPALETTE 783
#define WM_QUERYOPEN 19
#define WM_QUEUESYNC 35
#define WM_QUIT 18
#define WM_RENDERALLFORMATS 774
#define WM_RENDERFORMAT 773
#define WM_SETCURSOR 32
#define WM_SETFOCUS 7
#define WM_SETFONT 48
#define WM_SETHOTKEY 50
#define WM_SETICON 128
#define WM_SETREDRAW 11
#define WM_SETTEXT 12
#define WM_SETTINGCHANGE 26
#define WM_SHOWWINDOW 24
#define WM_SIZE 5
#define WM_SIZECLIPBOARD 779
#define WM_SIZING 532
#define WM_SPOOLERSTATUS 42
#define WM_STYLECHANGED 125
#define WM_STYLECHANGING 124
#define WM_SYSCHAR 262
#define WM_SYSCOLORCHANGE 21
#define WM_SYSCOMMAND 274
#define WM_SYSDEADCHAR 263
#define WM_SYSKEYDOWN 260
#define WM_SYSKEYUP 261
#define WM_TCARD 82
#define WM_THEMECHANGED 794
#define WM_TIMECHANGE 30
#define WM_TIMER 275
#define WM_UNDO 772
#define WM_USER 1024
#define WM_USERCHANGED 84
#define WM_VKEYTOITEM 46
#define WM_VSCROLL 277
#define WM_VSCROLLCLIPBOARD 778
#define WM_WINDOWPOSCHANGED 71
#define WM_WINDOWPOSCHANGING 70
#define WM_WININICHANGE 26
#define WM_KEYFIRST 256
#if _WIN32_WINNT >= 0x0501
#define WM_KEYLAST 265
#define WM_UNICHAR 265
#define UNICODE_NOCHAR 0xffff
#else
#define WM_KEYLAST 264
#endif
#define WM_SYNCPAINT  136
#define WM_MOUSEACTIVATE 33
#define WM_MOUSEMOVE 512
#define WM_LBUTTONDOWN 513
#define WM_LBUTTONUP 514
#define WM_LBUTTONDBLCLK 515
#define WM_RBUTTONDOWN 516
#define WM_RBUTTONUP 517
#define WM_RBUTTONDBLCLK 518
#define WM_MBUTTONDOWN 519
#define WM_MBUTTONUP 520
#define WM_MBUTTONDBLCLK 521
#define WM_MOUSEWHEEL 522
#define WM_MOUSEFIRST 512
#if (_WIN32_WINNT >= 0x0500)
#define WM_XBUTTONDOWN 523
#define WM_XBUTTONUP 524
#define WM_XBUTTONDBLCLK 525
#define WM_MOUSELAST 525
#else
#define WM_MOUSELAST 522
#endif
#define WM_MOUSEHOVER	0x2A1
#define WM_MOUSELEAVE	0x2A3
#if (_WIN32_WINNT >= 0x0400)
#define WHEEL_DELTA 120
#define GET_WHEEL_DELTA_WPARAM(wparam) ((short)HIWORD (wparam))
#define WHEEL_PAGESCROLL UINT_MAX
#endif
#if (_WIN32_WINNT >= 0x0601)
#define WM_TOUCHMOVE 576
#define WM_TOUCHDOWN 577
#define WM_TOUCHUP 578
#endif