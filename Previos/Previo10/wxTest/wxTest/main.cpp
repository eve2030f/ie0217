//Previo 10 B82870 Evelyn Feng
//prueba: Sale cuadro de dialogo indicando que todo esta saliendo bien
#include <wx/wx.h>

class App : public wxApp{
public:
	bool OnInit() {
		//indica tamano de cuadro y nombre de este
		wxFrame * window = new wxFrame(NULL, wxID_ANY, "GUI Test", wxDefaultPosition, wxSize(600, 400)); 
		wxBoxSizer * sizer = new wxBoxSizer(wxHORIZONTAL);
		//nota o texto
		wxStaticText * text = new wxStaticText(window, wxID_ANY, "Well Done!\nEverything seems to be working", 
			wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE_HORIZONTAL);
		text->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
		sizer->Add(text, 1, wxALIGN_CENTER);
		window->SetSizer(sizer); 
		window->Show();
		return true;
	}
	};
	
wxIMPLEMENT_APP(App);