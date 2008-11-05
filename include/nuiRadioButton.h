/*
  NUI3 - C++ cross-platform GUI framework for OpenGL based applications
  Copyright (C) 2002-2003 Sebastien Metrot

  licence: see nui3/LICENCE.TXT
*/

#ifndef __nuiRadioButton_h__
#define __nuiRadioButton_h__

//#include "nui.h"
#include "nuiContainer.h"
#include "nuiEvent.h"
#include "nuiToggleButton.h"
#include "nuiImage.h"

class nuiRadioButtonGroup;

/// This class implements a simple push button that acts as a container for a label, an image, or any other inactive widget element.
class NUI_API nuiRadioButton : public nuiToggleButton
{ 
public:
  nuiRadioButton(); ///< Create a simple button (empty).
  nuiRadioButton(const nglString& rText); ///< Create a simple button with a nuiLabel as a child filling the client area.
  nuiRadioButton(nuiStateDecoration* pDecoration); ///< Create a simple button with a skin.
  nuiRadioButton(const nglImage& rImage); ///< Create a simple button with a nuiImage as a child filling the client area.
  virtual bool Load(const nuiXMLNode* pNode); ///< Create a button from an XML description.
  virtual ~nuiRadioButton();

  void SetGroup(const nglString& rGroupName);
  const nglString& GetGroup();

  virtual bool MouseUnclicked(nuiSize X, nuiSize Y, nglMouseInfo::Flags Button);

  virtual void SetPressed(bool Pressed = true);

  virtual bool SetParent(nuiContainerPtr pParent);

  void                  SetGroupManager(nuiRadioButtonGroup* pGroup);
  nuiRadioButtonGroup*  GetGroupManager();

  void EnableToggleable(bool set);
  bool IsToggleable() const;

  nuiSimpleEventSource<nuiWidgetActivated> Deactivated;
private:
  nuiRadioButtonGroup* mpGroupManager;
  bool mCanToggle;
};

#endif // __nuiRadioButton_h__
