
//Previo 10 Evelyn Feng B82870
#include "EventoEstatico.hpp"
#include <wx/wx.h>

//define IDs
enum IDs {
    BUTTON_ID = 2,
    SLIDER_ID = 3,
    TEXT_ID = 4
};

//Reglas: positivo, ni 0 y 1, no entre wx lowest y highest
// 
// 
//macros a ejecutar en dicho elemento
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
EVT_BUTTON(BUTTON_ID, MainFrame::OnButtonClicked)
EVT_SLIDER(SLIDER_ID, MainFrame::OnSliderChanged)
EVT_TEXT(TEXT_ID, MainFrame::OnTextChanged)
wxEND_EVENT_TABLE()


MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);

    wxButton* button = new wxButton(panel, BUTTON_ID, "Button", wxPoint(300, 275), wxSize(200, 50));

    wxSlider* slider = new wxSlider(panel, SLIDER_ID, 0, 0, 100, wxPoint(300, 200), wxSize(200, -1));

    wxTextCtrl* textCtrl = new wxTextCtrl(panel, TEXT_ID, "", wxPoint(300, 175), wxSize(200, -1));

    CreateStatusBar();
}
//si hace click sale el string
void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
    wxLogStatus("Button Clicked");
}
//manda estatus o valor de la barra corrediza
void MainFrame::OnSliderChanged(wxCommandEvent& evt) {
    wxLogStatus(wxString::Format("Slider Value: %d", evt.GetInt()));
}
//obtiene string que escribe en barra de texto
void MainFrame::OnTextChanged(wxCommandEvent& evt) {
    wxString str = wxString::Format("Text: %s", evt.GetString());
    wxLogStatus(str);
}
