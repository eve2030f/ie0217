//Previo 10 Evelyn Feng B82870
//panel cuando se presiona la tecla, detecta el unicode de la tecla, codigo numerico es un caracter

#include "teclado.hpp"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    //se incluyen botones 
    wxButton* btn1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 150), wxSize(200, 100));
    wxButton* btn2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 100));

    //eventos detectados de acuerdo al momento, identifica o detecta elementos de teclados independientes del elemento en el que esta enfocado
    panel->Bind(wxEVT_KEY_DOWN, &MainFrame::OnKeyEvent, this);

    CreateStatusBar();
}

void MainFrame::OnKeyEvent(wxKeyEvent& evt) {
    wxChar keyChar = evt.GetUnicodeKey();
    if (keyChar == WXK_NONE) {
        int keyCode = evt.GetKeyCode();
        wxLogStatus("Key Event %d", keyCode);
    }
    else {
        wxLogStatus("Key Event %c", keyChar);
    }
}
