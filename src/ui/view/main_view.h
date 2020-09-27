#pragma once

namespace ray {
namespace app {
namespace view {

class MainView : public ui::WindowImplBase
{
public:
	MainView();
	~MainView();

	virtual std::wstring GetSkinFolder() override;

	virtual std::wstring GetSkinFile() override;

	virtual std::wstring GetWindowClassName(void) const override;

	virtual void InitWindow() override;

	virtual LRESULT OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

public:

	static const std::wstring kClassName;

};

}
}
}