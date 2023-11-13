[Rainmeter]
RightMouseUpAction=[!SkinCustomMenu]
Group=Hypersphube
ContextTitle=#CURRENTCONFIG#
ContextAction=["#CURRENTPATH#"]
ContextTitle2=-
ContextAction2=
ContextTitle3=Center horizontally
ContextAction3=[!SetWindowPosition "50%" "[#CURRENTCONFIGY]" "50%" "0%"]
ContextTitle4=Center vertically
ContextAction4=[!SetWindowPosition "([#CURRENTCONFIGX] + ([#CURRENTCONFIGWIDTH] / 2))" "50%" "50%" "50%"]
ContextTitle5=-
ContextAction5=
ContextTitle6=Edit variables
ContextAction6=["#CONFIGEDITOR#" "#@#settings.inc"]
ContextTitle7=Refresh Hypersphube
ContextAction7=[!RefreshGroup Hypersphube]
ContextTitle8=-
ContextAction8=
ContextTitle9=Open skin menu
ContextAction9=[!SkinMenu]
ContextTitle10=Unload skin
ContextAction10=[!DeactivateConfig]

