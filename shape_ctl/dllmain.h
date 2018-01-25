// dllmain.h : Declaration of module class.

class Cshape_ctlModule : public ATL::CAtlDllModuleT< Cshape_ctlModule >
{
public :
	DECLARE_LIBID(LIBID_shape_ctlLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SHAPE_CTL, "{079FA3DC-55E5-4828-927B-41419F9167F6}")
};

extern class Cshape_ctlModule _AtlModule;
