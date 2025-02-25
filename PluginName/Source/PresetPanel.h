/*
  ==============================================================================

    PresetPanel.h
    Created: 25 Nov 2021 8:56:36am
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

class PresetPanel
:   public PanelBase,
    public juce::Button::Listener
{
public:
    PresetPanel(PluginNameAudioProcessor* inProcessor, ContextMenu* inContextMenu);
    ~PresetPanel();
    
    void resized() override;
        
    void buttonClicked(juce::Button*) override;
private:
    juce::TextButton undo {"<"};
    juce::TextButton redo {">"};
    
    juce::TextButton prevPreset {"<"};
    juce::TextButton presetMenu {"Default"};
    juce::TextButton nextPreset {">"};
    
    juce::TextButton presetA    {"A"};
    juce::TextButton presetCopy {"->"};
    juce::TextButton presetB    {"B"};
    
    std::vector<juce::TextButton*> buttons = {
        &undo, &redo,
        &prevPreset, &presetMenu, &nextPreset,
        &presetA, &presetCopy, &presetB
    };
};
