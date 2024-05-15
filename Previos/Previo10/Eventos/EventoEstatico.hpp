//Previo 10 Evelyn Feng B82870
//Evento es como vamos a interactuar, tipo presionar un boton
//Define eventos y asi van a ser siempre

#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private: //3 metodos o eventos
    void OnButtonClicked(wxCommandEvent& evt);
    void OnSliderChanged(wxCommandEvent& evt);
    void OnTextChanged(wxCommandEvent& evt);
    wxDECLARE_EVENT_TABLE();
};