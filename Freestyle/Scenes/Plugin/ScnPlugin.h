class CScnPlugin : public CXuiTabSceneImpl
{
public:
	CScnPlugin::CScnPlugin() { }
	CScnPlugin::~CScnPlugin() { }

	XUI_IMPLEMENT_CLASS( CScnPlugin, L"ScnPlugin", XUI_CLASS_TABSCENE )

	XUI_BEGIN_MSG_MAP()
		XUI_ON_XM_INIT(OnInit)
	XUI_END_MSG_MAP()

private:
protected:


	HRESULT OnInit(XUIMessageInit *pInitData, BOOL& bHandled);
};