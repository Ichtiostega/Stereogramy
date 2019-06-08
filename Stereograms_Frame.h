#ifndef __Stereograms_Frame__
#define __Stereograms_Frame__

/**
@file
Subclass of MyFrame, which is generated by wxFormBuilder.
*/

#include "GUI.h"
#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/bitmap.h>
#include <wx/wxprec.h>
#include <wx/colordlg.h>
#include "Stereogram.h"


class Stereograms_Frame : public MyFrame
{
protected:

	void Random_Dots(wxCommandEvent& event);		
	void Load_Bitmap(wxCommandEvent& event);
	void Save_File(wxCommandEvent& event);

public:

	Stereograms_Frame(wxWindow* parent);

private:

	wxBitmap *bitmap;		//bitmap loaded from file
	wxImage image;
	Stereogram _stereogram;

};

#endif // __Stereograms_Frame__
