// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "shape_ctl_2.dll" no_namespace
// CShapeTriangle wrapper class

class CShapeTriangle : public COleDispatchDriver
{
public:
	CShapeTriangle(){} // Calls COleDispatchDriver default constructor
	CShapeTriangle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CShapeTriangle(const CShapeTriangle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// IShapeTriangle methods
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
	long get_Vertex_X(unsigned short nVertex)
	{
		long result;
		static BYTE parms[] = VTS_UI2;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, nVertex);
		return result;
	}
	void put_Vertex_X(unsigned short nVertex, long newValue)
	{
		static BYTE parms[] = VTS_UI2 VTS_I4;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, nVertex, newValue);
	}
	long get_Vertex_Y(unsigned short nVertex)
	{
		long result;
		static BYTE parms[] = VTS_UI2;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, nVertex);
		return result;
	}
	void put_Vertex_Y(unsigned short nVertex, long newValue)
	{
		static BYTE parms[] = VTS_UI2 VTS_I4;
		InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, nVertex, newValue);
	}

	// IShapeTriangle properties
public:

};
