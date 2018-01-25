// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "shape_ctl_2.dll" no_namespace
// CShapeCircle wrapper class

class CShapeCircle : public COleDispatchDriver
{
public:
	CShapeCircle(){} // Calls COleDispatchDriver default constructor
	CShapeCircle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CShapeCircle(const CShapeCircle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IShapeCircle methods
public:
	void GetBoundingBox(long * prect)
	{
		static BYTE parms[] = VTS_PI4;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, prect);
	}
	unsigned long get_LineColor()
	{
		unsigned long result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_LineColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_FillColor()
	{
		unsigned long result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_FillColor(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Left()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Left(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Top()
	{
		long result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Top(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Size()
	{
		long result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Size(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IShapeCircle properties
public:

};
