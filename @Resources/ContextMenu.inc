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
ContextAction6=["#CONFIGEDITOR#" "#@#Variables.inc"]
ContextTitle7=Refresh Hypersphube
ContextAction7=[!RefreshGroup Hypersphube]
ContextTitle8=-
ContextAction8=
ContextTitle9=Toggle FunkyMode
ContextAction9=[!SetVariable "FunkyMode" "([#FunkyMode] = 1 ? 0 : 1)"][!WriteKeyValue Variables "FunkyMode" [#FunkyMode] "#@#Variables.inc"][!Refresh]
ContextTitle10=-
ContextAction10=
ContextTitle11=Open skin menu
ContextAction11=[!SkinMenu]
ContextTitle12=Unload skin
ContextAction12=[!DeactivateConfig]

