// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.OleCtrls.pas' rev: 23.00 (Win32)

#ifndef Vcl_OlectrlsHPP
#define Vcl_OlectrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Olectrls
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TEventDispatch;
class DELPHICLASS TOleControl;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TEventDispatch : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TOleControl* FControl;
	
protected:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef(void);
	int __stdcall _Release(void);
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	virtual HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	__property TOleControl* Control = {read=FControl};
	
public:
	__fastcall TEventDispatch(TOleControl* Control);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEventDispatch(void) { }
	
private:
	void *__IDispatch;	/* IDispatch */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IDispatch; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IDispatch; }
	#endif
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TEnumValue
{
	
public:
	int Value;
	System::UnicodeString Ident;
};


typedef System::StaticArray<TEnumValue, 32768> TEnumValueList;

typedef TEnumValueList *PEnumValueList;

class DELPHICLASS TEnumPropDesc;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TEnumPropDesc : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FDispID;
	int FValueCount;
	TEnumValueList *FValues;
	
public:
	__fastcall TEnumPropDesc(int DispID, int ValueCount, const _di_ITypeInfo TypeInfo);
	__fastcall virtual ~TEnumPropDesc(void);
	void __fastcall GetStrings(System::Classes::TGetStrProc Proc);
	int __fastcall StringToValue(const System::UnicodeString S);
	System::UnicodeString __fastcall ValueToString(int V);
};

#pragma pack(pop)

struct TControlData;
typedef TControlData *PControlData;

struct DECLSPEC_DRECORD TControlData
{
	
public:
	#pragma pack(push,1)
	GUID ClassID;
	#pragma pack(pop)
	#pragma pack(push,1)
	GUID EventIID;
	#pragma pack(pop)
	int EventCount;
	void *EventDispIDs;
	void *LicenseKey;
	unsigned Flags;
	int Version;
	int FontCount;
	Winapi::Activex::TDispIDList *FontIDs;
	int PictureCount;
	Winapi::Activex::TDispIDList *PictureIDs;
	int Reserved;
	int InstanceCount;
	System::Classes::TList* EnumPropDescs;
};


struct TControlData2;
typedef TControlData2 *PControlData2;

struct DECLSPEC_DRECORD TControlData2
{
	
public:
	#pragma pack(push,1)
	GUID ClassID;
	#pragma pack(pop)
	#pragma pack(push,1)
	GUID EventIID;
	#pragma pack(pop)
	int EventCount;
	void *EventDispIDs;
	void *LicenseKey;
	unsigned Flags;
	int Version;
	int FontCount;
	Winapi::Activex::TDispIDList *FontIDs;
	int PictureCount;
	Winapi::Activex::TDispIDList *PictureIDs;
	int Reserved;
	int InstanceCount;
	System::Classes::TList* EnumPropDescs;
	unsigned FirstEventOfs;
};


typedef HRESULT __fastcall (__closure *TServiceQuery)(const GUID &rsid, const GUID &iid, /* out */ void *obj);

class PASCALIMPLEMENTATION TOleControl : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TControlData *FControlData;
	int FRefCount;
	TEventDispatch* FEventDispatch;
	unsigned FObjectData;
	_di_IOleObject FOleObject;
	_di_IPersistStreamInit FPersistStream;
	_di_IOleControl FOleControl;
	_di_IDispatch FControlDispatch;
	_di_IPerPropertyBrowsing FPropBrowsing;
	_di_IOleInPlaceObject FOleInPlaceObject;
	_di_IOleInPlaceActiveObject FOleInPlaceActiveObject;
	int FPropConnection;
	int FEventsConnection;
	int FMiscStatus;
	System::Classes::TList* FFonts;
	System::Classes::TList* FPictures;
	bool FUpdatingPictures;
	bool FUpdatingColor;
	bool FUpdatingFont;
	bool FUpdatingEnabled;
	TServiceQuery FServiceQuery;
	tagCONTROLINFO FControlInfo;
	void __fastcall CreateControl(void);
	void __fastcall CreateEnumPropDescs(void);
	void __fastcall CreateInstance(void);
	void __fastcall CreateStorage(void);
	void __fastcall DesignModified(void);
	void __fastcall DestroyControl(void);
	void __fastcall DestroyEnumPropDescs(void);
	void __fastcall DestroyStorage(void);
	void __fastcall GetEventMethod(int DispID, System::TMethod &Method);
	Vcl::Menus::TMainMenu* __fastcall GetMainMenu(void);
	System::Variant __fastcall GetOleObject(void);
	_di_IDispatch __fastcall GetDefaultDispatch(void);
	void __fastcall HookControlWndProc(void);
	void __fastcall ReadData(System::Classes::TStream* Stream);
	void __fastcall SetUIActive(bool Active);
	void __fastcall WriteData(System::Classes::TStream* Stream);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	MESSAGE void __fastcall CMDocWindowActivate(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMUIActivate(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMUIDeactivate(Winapi::Messages::TMessage &Message);
	void __fastcall D2InvokeEvent(int DispID, tagDISPPARAMS &Params);
	
protected:
	virtual void __fastcall StandardEvent(int DispID, tagDISPPARAMS &Params);
	virtual void __fastcall InvokeEvent(int DispID, tagDISPPARAMS &Params);
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	HIDESBASE int __stdcall _AddRef(void);
	HIDESBASE int __stdcall _Release(void);
	HRESULT __stdcall SaveObject(void);
	HRESULT __stdcall GetMoniker(int dwAssign, int dwWhichMoniker, /* out */ _di_IMoniker &mk);
	HRESULT __stdcall GetContainer(/* out */ _di_IOleContainer &container);
	HRESULT __stdcall ShowObject(void);
	HRESULT __stdcall OnShowWindow(BOOL fShow);
	HRESULT __stdcall RequestNewObjectLayout(void);
	HRESULT __stdcall OnControlInfoChanged(void);
	HRESULT __stdcall LockInPlaceActive(BOOL fLock);
	HRESULT __stdcall GetExtendedControl(/* out */ _di_IDispatch &disp);
	HRESULT __stdcall TransformCoords(System::Types::TPoint &ptlHimetric, System::Types::TPointF &ptfContainer, int flags);
	HRESULT __stdcall OleControlSite_TranslateAccelerator(Winapi::Windows::PMsg msg, int grfModifiers);
	HRESULT __stdcall OnFocus(BOOL fGotFocus);
	HRESULT __stdcall ShowPropertyFrame(void);
	HRESULT __stdcall ContextSensitiveHelp(BOOL fEnterMode);
	HRESULT __stdcall OleInPlaceSite_GetWindow(/* out */ HWND &wnd);
	HRESULT __stdcall CanInPlaceActivate(void);
	HRESULT __stdcall OnInPlaceActivate(void);
	HRESULT __stdcall OnUIActivate(void);
	HRESULT __stdcall GetWindowContext(/* out */ _di_IOleInPlaceFrame &frame, /* out */ _di_IOleInPlaceUIWindow &doc, /* out */ System::Types::TRect &rcPosRect, /* out */ System::Types::TRect &rcClipRect, /* out */ tagOIFI &frameInfo);
	HRESULT __stdcall Scroll(const System::Types::TPoint scrollExtent);
	HRESULT __stdcall OnUIDeactivate(BOOL fUndoable);
	HRESULT __stdcall OnInPlaceDeactivate(void);
	HRESULT __stdcall DiscardUndoState(void);
	HRESULT __stdcall DeactivateAndUndo(void);
	HRESULT __stdcall OnPosRectChange(const System::Types::TRect &rcPosRect);
	HRESULT __stdcall GetBorder(/* out */ System::Types::TRect &rectBorder);
	HRESULT __stdcall RequestBorderSpace(const System::Types::TRect &borderwidths);
	HRESULT __stdcall SetBorderSpace(System::Types::PRect pborderwidths);
	HRESULT __stdcall SetActiveObject(const _di_IOleInPlaceActiveObject activeObject, System::WideChar * pszObjName);
	HRESULT __stdcall OleInPlaceFrame_GetWindow(/* out */ HWND &wnd);
	HRESULT __stdcall InsertMenus(HMENU hmenuShared, tagOleMenuGroupWidths &menuWidths);
	HRESULT __stdcall SetMenu(HMENU hmenuShared, HMENU holemenu, HWND hwndActiveObject);
	HRESULT __stdcall RemoveMenus(HMENU hmenuShared);
	HRESULT __stdcall SetStatusText(System::WideChar * pszStatusText);
	HRESULT __stdcall EnableModeless(BOOL fEnable);
	HRESULT __stdcall OleInPlaceFrame_TranslateAccelerator(tagMSG &msg, System::Word wID);
	HIDESBASE HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HIDESBASE HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HIDESBASE HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HIDESBASE HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	HRESULT __stdcall PreMessageFilter(HWND wnd, int msg, int wp, int lp, /* out */ int &res, /* out */ int &Cookie);
	HRESULT __stdcall PostMessageFilter(HWND wnd, int msg, int wp, int lp, /* out */ int &res, int Cookie);
	HRESULT __stdcall QueryService(const GUID &rsid, const GUID &iid, /* out */ void *obj);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DestroyWindowHandle(void);
	System::Byte __fastcall GetByteProp(int Index);
	System::Uitypes::TColor __fastcall GetColorProp(int Index);
	System::Uitypes::TColor __fastcall GetTColorProp(int Index);
	System::Comp __fastcall GetCompProp(int Index);
	System::Currency __fastcall GetCurrencyProp(int Index);
	double __fastcall GetDoubleProp(int Index);
	_di_IDispatch __fastcall GetIDispatchProp(int Index);
	int __fastcall GetIntegerProp(int Index);
	System::_di_IInterface __fastcall GetIUnknownProp(int Index);
	System::WordBool __fastcall GetWordBoolProp(int Index);
	System::TDateTime __fastcall GetTDateTimeProp(int Index);
	Vcl::Graphics::TFont* __fastcall GetTFontProp(int Index);
	System::WordBool __fastcall GetOleBoolProp(int Index);
	double __fastcall GetOleDateProp(int Index);
	Winapi::Activex::TOleEnum __fastcall GetOleEnumProp(int Index);
	Winapi::Activex::TOleEnum __fastcall GetTOleEnumProp(int Index);
	System::OleVariant __fastcall GetOleVariantProp(int Index);
	Vcl::Graphics::TPicture* __fastcall GetTPictureProp(int Index);
	void __fastcall GetProperty(int Index, TVarData &Value);
	System::Int8 __fastcall GetShortIntProp(int Index);
	float __fastcall GetSingleProp(int Index);
	short __fastcall GetSmallintProp(int Index);
	System::UnicodeString __fastcall GetStringProp(int Index);
	System::Variant __fastcall GetVariantProp(int Index);
	System::WideString __fastcall GetWideStringProp(int Index);
	System::Word __fastcall GetWordProp(int Index);
	virtual void __fastcall InitControlData(void) = 0 ;
	virtual void __fastcall InitControlInterface(const System::_di_IInterface Obj);
	void __fastcall InvokeMethod(const void *DispInfo, void * Result);
	DYNAMIC bool __fastcall PaletteChanged(bool Foreground);
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall SetByteProp(int Index, System::Byte Value);
	void __fastcall SetColorProp(int Index, System::Uitypes::TColor Value);
	void __fastcall SetTColorProp(int Index, System::Uitypes::TColor Value);
	void __fastcall SetCompProp(int Index, const System::Comp Value);
	void __fastcall SetCurrencyProp(int Index, const System::Currency Value);
	void __fastcall SetDoubleProp(int Index, const double Value);
	void __fastcall SetIDispatchProp(int Index, const _di_IDispatch Value);
	void __fastcall SetIntegerProp(int Index, int Value);
	void __fastcall SetIUnknownProp(int Index, const System::_di_IInterface Value);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	void __fastcall SetWordBoolProp(int Index, System::WordBool Value);
	void __fastcall SetTDateTimeProp(int Index, const System::TDateTime Value);
	void __fastcall SetTFontProp(int Index, Vcl::Graphics::TFont* Value);
	void __fastcall SetOleBoolProp(int Index, System::WordBool Value);
	void __fastcall SetOleDateProp(int Index, const double Value);
	void __fastcall SetOleEnumProp(int Index, Winapi::Activex::TOleEnum Value);
	void __fastcall SetTOleEnumProp(int Index, Winapi::Activex::TOleEnum Value);
	void __fastcall SetOleVariantProp(int Index, const System::OleVariant &Value);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	void __fastcall SetTPictureProp(int Index, Vcl::Graphics::TPicture* Value);
	void __fastcall SetProperty(int Index, const TVarData &Value);
	void __fastcall SetShortIntProp(int Index, System::Int8 Value);
	void __fastcall SetSingleProp(int Index, const float Value);
	void __fastcall SetSmallintProp(int Index, short Value);
	void __fastcall SetStringProp(int Index, const System::UnicodeString Value);
	void __fastcall SetVariantProp(int Index, const System::Variant &Value);
	void __fastcall SetWideStringProp(int Index, const System::WideString Value);
	void __fastcall SetWordProp(int Index, System::Word Value);
	void __fastcall _SetColorProp(int Index, System::Uitypes::TColor Value);
	void __fastcall _SetTColorProp(int Index, System::Uitypes::TColor Value);
	void __fastcall _SetTOleEnumProp(int Index, Winapi::Activex::TOleEnum Value);
	void __fastcall _SetTFontProp(int Index, Vcl::Graphics::TFont* Value);
	void __fastcall _SetTPictureProp(int Index, Vcl::Graphics::TPicture* Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall SuppressException(System::Sysutils::Exception* E);
	__property PControlData ControlData = {read=FControlData, write=FControlData};
	virtual HRESULT __stdcall OnChanged(int dispid);
	virtual HRESULT __stdcall OnRequestEdit(int dispid);
	
public:
	__fastcall virtual TOleControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOleControl(void);
	void __fastcall BrowseProperties(void);
	virtual void __fastcall DefaultHandler(void *Message);
	void __fastcall DoObjectVerb(int Verb);
	TEnumPropDesc* __fastcall GetEnumPropDesc(int DispID);
	bool __fastcall GetHelpContext(System::UnicodeString Member, int &HelpCtx, System::UnicodeString &HelpFile);
	void __fastcall GetObjectVerbs(System::Classes::TStrings* List);
	System::UnicodeString __fastcall GetPropDisplayString(int DispID);
	void __fastcall GetPropDisplayStrings(int DispID, System::Classes::TStrings* List);
	bool __fastcall IsCustomProperty(int DispID);
	bool __fastcall IsPropPageProperty(int DispID);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall SetPropDisplayString(int DispID, const System::UnicodeString Value);
	void __fastcall ShowAboutBox(void);
	__property System::Variant OleObject = {read=GetOleObject};
	__property _di_IPerPropertyBrowsing PerPropBrowsing = {read=FPropBrowsing};
	__property _di_IDispatch DefaultDispatch = {read=GetDefaultDispatch};
	__property TabStop = {default=1};
	__property Anchors = {default=3};
	__property TServiceQuery ServiceQuery = {read=FServiceQuery, write=FServiceQuery};
public:
	/* TWinControl.CreateParented */ inline __fastcall TOleControl(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
private:
	void *__IServiceProvider;	/* IServiceProvider */
	void *__ISimpleFrameSite;	/* ISimpleFrameSite */
	void *__IPropertyNotifySink;	/* IPropertyNotifySink */
	void *__IDispatch;	/* IDispatch */
	void *__IOleInPlaceFrame;	/* IOleInPlaceFrame */
	void *__IOleInPlaceSite;	/* IOleInPlaceSite */
	void *__IOleControlSite;	/* IOleControlSite */
	void *__IOleClientSite;	/* IOleClientSite */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IServiceProvider()
	{
		_di_IServiceProvider intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IServiceProvider*(void) { return (IServiceProvider*)&__IServiceProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_ISimpleFrameSite()
	{
		_di_ISimpleFrameSite intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ISimpleFrameSite*(void) { return (ISimpleFrameSite*)&__ISimpleFrameSite; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IPropertyNotifySink()
	{
		_di_IPropertyNotifySink intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyNotifySink*(void) { return (IPropertyNotifySink*)&__IPropertyNotifySink; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IDispatch; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IOleInPlaceFrame()
	{
		_di_IOleInPlaceFrame intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IOleInPlaceFrame*(void) { return (IOleInPlaceFrame*)&__IOleInPlaceFrame; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IOleInPlaceSite()
	{
		_di_IOleInPlaceSite intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IOleInPlaceSite*(void) { return (IOleInPlaceSite*)&__IOleInPlaceSite; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IOleControlSite()
	{
		_di_IOleControlSite intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IOleControlSite*(void) { return (IOleControlSite*)&__IOleControlSite; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IOleClientSite()
	{
		_di_IOleClientSite intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IOleClientSite*(void) { return (IOleClientSite*)&__IOleClientSite; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IServiceProvider; }
	#endif
	
};


class DELPHICLASS EOleCtrlError;
#pragma pack(push,4)
class PASCALIMPLEMENTATION EOleCtrlError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOleCtrlError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOleCtrlError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : System::Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall EOleCtrlError(int Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleCtrlError(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall EOleCtrlError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOleCtrlError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleCtrlError(int Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleCtrlError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOleCtrlError(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::Variant __fastcall FontToOleFont(Vcl::Graphics::TFont* Font);
extern PACKAGE void __fastcall OleFontToFont(const System::Variant &OleFont, Vcl::Graphics::TFont* Font);
extern PACKAGE System::OleVariant __fastcall EmptyParam(void);

}	/* namespace Olectrls */

}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_OLECTRLS)
using namespace Vcl::Olectrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_OlectrlsHPP
