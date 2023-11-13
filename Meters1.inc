[Hypersphube]
Group=Hypersphube
DynamicVariables=1
UpdateDivider=-1
Shape=Path Squirc | Extend Stroke,Fill,Modifiers

[Shadow]
Meter=Shape
MeterStyle=Hypersphube
Squirc=(0),(#ShadowRadius#) | CurveTo (#ShadowRadius#),(0),(0),((#Size# / [&hp0])),((#Size# / [&hp1])),0 | CurveTo #ShadowSizeWithStroke#,#ShadowRadius#,(#ShadowSizeWithStroke# - (#Size# / [&hp2])),0,(#ShadowSizeWithStroke#),((#Size# / [&hp3])) | CurveTo (#ShadowRadius#),(#ShadowSizeWithStroke#),(#ShadowSizeWithStroke#),(#ShadowSizeWithStroke# - (#Size# / [&hp4])),(#ShadowSizeWithStroke# - (#Size# / [&hp5])),(#ShadowSizeWithStroke#) | CurveTo (0),(#ShadowRadius#),((#Size# / [&hp6])),(#ShadowSizeWithStroke#),(0),(#ShadowSizeWithStroke# - (#Size# / [&hp7]))
Stroke=StrokeWidth #ShadowStrokeWidth# | Stroke Color #ShadowStrokeColor#
Fill=Fill Color #ShadowBackgroundColor#
Modifiers=Offset #ShadowStrokeRadius#,#ShadowStrokeRadius#
X=((#SCREENAREAWIDTH# / 2 - #Size# / 2) + #ShadowX#)
Y=((#SCREENAREAHEIGHT# / 2 - #Size# / 2) + #ShadowY#)
Hidden=(1-#EnableShadow#)

[Base]
Meter=Shape
MeterStyle=Hypersphube
Squirc=(0),(#Radius#) | CurveTo (#Radius#),(0),(0),((#Size# / [&hp0])),((#Size# / [&hp1])),0 | CurveTo #SizeWithStroke#,#Radius#,(#SizeWithStroke# - (#Size# / [&hp2])),0,(#SizeWithStroke#),((#Size# / [&hp3])) | CurveTo (#Radius#),(#SizeWithStroke#),(#SizeWithStroke#),(#SizeWithStroke# - (#Size# / [&hp4])),(#SizeWithStroke# - (#Size# / [&hp5])),(#SizeWithStroke#) | CurveTo (0),(#Radius#),((#Size# / [&hp6])),(#SizeWithStroke#),(0),(#SizeWithStroke# - (#Size# / [&hp7]))
Stroke=StrokeWidth #StrokeWidth# | Stroke Color #StrokeColor#
Fill=Fill Color #BackgroundColor#
Modifiers=Offset #StrokeRadius#,#StrokeRadius#
X=(#SCREENAREAWIDTH# / 2 - #Size# / 2)
Y=(#SCREENAREAHEIGHT# / 2 - #Size# / 2)
