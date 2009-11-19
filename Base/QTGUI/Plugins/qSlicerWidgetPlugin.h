#ifndef __qSlicerWidgetPlugin_h
#define __qSlicerWidgetPlugin_h

#include "qSlicerQTGUIPlugin.h"

class Q_SLICER_BASE_QTGUI_PLUGIN_EXPORT qSlicerWidgetPlugin : 
  public qSlicerQTGUIPlugin
{
public:
  qSlicerWidgetPlugin();
  
  QWidget *createWidget(QWidget *_parent);
  QString domXml() const;
  QString includeFile() const;
  bool isContainer() const;
  QString name() const;
};

#endif
