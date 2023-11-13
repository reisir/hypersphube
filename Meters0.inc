[Hypersphube]
Group=Hypersphube
DynamicVariables=1
UpdateDivider=-1
Shape=Path Squirc | Extend Stroke,Fill,Modifiers

[Shadow]
Meter=Shape
MeterStyle=Hypersphube
Squirc=(0),(#ShadowRadius#) | CurveTo (#ShadowRadius#),(0),(0),((#Size# / #Hypersphube#)),((#Size# / #Hypersphube#)),0 | CurveTo #ShadowSizeWithStroke#,#ShadowRadius#,(#ShadowSizeWithStroke# - (#Size# / #Hypersphube#)),0,(#ShadowSizeWithStroke#),((#Size# / #Hypersphube#)) | CurveTo (#ShadowRadius#),(#ShadowSizeWithStroke#),(#ShadowSizeWithStroke#),(#ShadowSizeWithStroke# - (#Size# / #Hypersphube#)),(#ShadowSizeWithStroke# - (#Size# / #Hypersphube#)),(#ShadowSizeWithStroke#) | CurveTo (0),(#ShadowRadius#),((#Size# / #Hypersphube#)),(#ShadowSizeWithStroke#),(0),(#ShadowSizeWithStroke# - (#Size# / #Hypersphube#))
Stroke=StrokeWidth #ShadowStrokeWidth# | Stroke Color #ShadowStrokeColor#
Fill=Fill Color #ShadowBackgroundColor#
Modifiers=Offset #ShadowStrokeRadius#,#ShadowStrokeRadius#
X=((#SCREENAREAWIDTH# / 2 - #Size# / 2) + #ShadowX#)
Y=((#SCREENAREAHEIGHT# / 2 - #Size# / 2) + #ShadowY#)
Hidden=(1-#EnableShadow#)

[Base]
Meter=Shape
MeterStyle=Hypersphube
Squirc=(0),(#Radius#) | CurveTo (#Radius#),(0),(0),((#Size# / #Hypersphube#)),((#Size# / #Hypersphube#)),0 | CurveTo #SizeWithStroke#,#Radius#,((#SizeWithStroke# - (#Size# / #Hypersphube#))),0,(#SizeWithStroke#),((#Size# / #Hypersphube#)) | CurveTo (#Radius#),(#SizeWithStroke#),(#SizeWithStroke#),((#SizeWithStroke# - (#Size# / #Hypersphube#))),((#SizeWithStroke# - (#Size# / #Hypersphube#))),(#SizeWithStroke#) | CurveTo (0),(#Radius#),((#Size# / #Hypersphube#)),(#SizeWithStroke#),(0),((#SizeWithStroke# - (#Size# / #Hypersphube#)))
Stroke=StrokeWidth #StrokeWidth# | Stroke Color #StrokeColor#
Fill=Fill Color #BackgroundColor#
Modifiers=Offset #StrokeRadius#,#StrokeRadius#
X=(#SCREENAREAWIDTH# / 2 - #Size# / 2)
Y=(#SCREENAREAHEIGHT# / 2 - #Size# / 2)
