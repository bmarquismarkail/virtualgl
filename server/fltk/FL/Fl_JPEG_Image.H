//
// "$Id: Fl_JPEG_Image.H,v 1.1 2007-09-01 23:40:02 dcommander Exp $"
//
// JPEG image header file for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2005 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
// USA.
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

#ifndef Fl_JPEG_Image_H
#define Fl_JPEG_Image_H
#  include "Fl_Image.H"

class FL_EXPORT Fl_JPEG_Image : public Fl_RGB_Image {

  public:

  Fl_JPEG_Image(const char* filename);
};

#endif

//
// End of "$Id: Fl_JPEG_Image.H,v 1.1 2007-09-01 23:40:02 dcommander Exp $".
//
