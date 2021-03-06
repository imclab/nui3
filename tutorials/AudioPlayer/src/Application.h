/*
  NUI3 - C++ cross-platform GUI framework for OpenGL based applications
  Copyright (C) 2002-2003 Sebastien Metrot

  licence: see nui3/LICENCE.TXT
*/

#pragma once

#include "nui.h"
#include "nuiApplication.h"

class MainWindow;
class AudioEngine;

class Application : public nuiApplication
{
public:
  Application();
  ~Application();

  void OnInit();
  void OnExit (int Code);
  
  MainWindow* GetMainWindow();
  AudioEngine* GetAudioEngine();

private:
  
  MainWindow* mpMainWindow;
  AudioEngine* mpAudioEngine;
  
};


// a global call to retrieve the application object
Application* GetApp();
MainWindow* GetMainWindow();
AudioEngine* GetAudioEngine();