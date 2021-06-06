/*
  ==============================================================================

    ContextMenu.h
    Created: 30 May 2021 1:56:11am
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#include "InterfaceDefines.h"

class ContextMenu
{
public:
    ContextMenu();
    ~ContextMenu();
    
    void showMenu(const juce::String itemClicked);
    
private:
    juce::PopupMenu menu;
    juce::PopupMenu preferences;
    juce::PopupMenu sizes;
};
