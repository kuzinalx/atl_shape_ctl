// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "shape_ctl_2.dll" no_namespace
// CShape wrapper class

class CShape : public COleDispatchDriver
{
public:
	CShape(){} // Calls COleDispatchDriver default constructor
	CShape(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CShape(const CShape& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IShape methods
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

	// IShape properties
public:

};
