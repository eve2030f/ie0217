//Previo 10 Evelyn Feng B82870
//Propagacion de eventos: se agrega segundo boton, ambos entran a MainFrame

#include "propagacion.hpp"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 275), wxSize(200, 50));

    wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 50));

    //es exactamente lo mismo estas 2 lineas
    // button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
    // panel->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);

    this->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);

    CreateStatusBar();
}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
    wxLogStatus("Button Clicked");
}
