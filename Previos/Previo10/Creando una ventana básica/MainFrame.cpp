//Previo 10 Evelyn Feng B82870
#include "MainFrame.hpp"
#include <wx/wx.h>
//solo crea un cuadro o ventana en blanco con nombre o titulo que se indica en MyApp.cpp
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {}
