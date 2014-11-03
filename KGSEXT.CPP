/*******************************************************************************
  How to rebuild the IOC DLL without Drag and Drop but *with* Toolbar Support

*** THIS SOURCE CODE IS PROVIDED WITHOUT ANY SUPPORT OR WARRANTY OF ANY KIND ***

    When you try to rebuild CPPOOU3.DLL with out the IDM*.OBJ modules, you will
    get three unresolved externals from the Toolbar object modules.
    Compile this source file icc --c /Gm+ KGSEXT.CPP and add the object to the
    CPPOOU3.RSP to resolve the external references.
    Don't forget to disable all drag and drop abilities in your toolbars.

    If you still have questions, contact me.

    Hajo Kirchhoff
    Kirchhoff & Grill Softwareentwicklung GmbH, Germany
    100024,712@compuserve.com
    hmkirchh@lst.informatik.uni-erlangen.de
    http://ourworld.compuserve.com/homepages/hmkirchhKGS
********************************************************************************/

#include <iwindow.hpp>

IDMItemProvider* IWindow::itemProvider() const
{
   IASSERT("DM Support disabled but IWindow::itemProvider called"==0);
   return 0;
}

#include <idmhndlr.hpp>

void  IDMHandler::enableDropOn(IToolBar*)
{
}

void  IDMHandler::enableDragDropFor(IToolBarButton*)
{
}
