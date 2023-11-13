[Rainmeter]
@IncludeContextMenu=#@#ContextMenu.inc
@IncludeVariables=#@#Variables.inc
@IncludeAudioLevel=#@#AudioLevel.inc
@IncludeBands=#@#Bands.inc
@IncludeHypersphubes=#@#Hypersphubes.inc

[Variables]
Scale=1
Hypersphube=6.8762
Invert=1

StrokeRadius=(#StrokeWidth# / 2)
SizeWithStroke=(#Size# - #StrokeWidth#)
Radius=((#Size# / 2) - #StrokeRadius#)
RadiusOffset=(#Size# / 2)

ShadowStrokeRadius=(#ShadowStrokeWidth# / 2)
ShadowSizeWithStroke=(#Size# - #ShadowStrokeWidth#)
ShadowRadius=((#Size# / 2) - #ShadowStrokeRadius#)
ShadowRadiusOffset=(#Size# / 2)
