//Previo 10 Evelyn Feng B82870

#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    void OnMouseEvent(wxMouseEvent& evt);
};
