; Optimal AudioLevel setup
; Thanks to @kodikuu for the math

[Variables]
; How many bands to generate
Bands=8
; How many bands to skip, it's recommended to skip the first band because of AudioLevel inaccuracies
SkipBands=1
; Assuming Update=16
FPS=60

; Get the current audio devices sampling rate
[MeasureSamplingRate]
Measure=Plugin
Plugin=AudioLevel
Type=Format
RegExpSubstitute=1
Substitute="(Hz.*)$":""
UpdateDivider=-1

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
DynamicVariables=1
FFTSize=([MeasureSamplingRate] * #Accuracy# / #FPS#)
FFTOverlap=([MeasureSamplingRate] * (#Accuracy# - 1) / #FPS#)
FFTAttack=#FFTAttack#
FFTDecay=#FFTDecay#
Bands=(#Bands# + #SkipBands#)
FreqMin=#FreqMin#
FreqMax=#FreqMax#
Sensitivity=#Sensitivity#
