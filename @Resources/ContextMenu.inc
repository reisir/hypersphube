[Rainmeter]
RightMouseUpAction=[!SkinCustomMenu]
Group=Hypersphube
ContextTitle=#CURRENTCONFIG#
ContextAction=["#CURRENTPATH#"]
ContextTitle2=-
ContextAction2=
ContextTitle3=Edit variables
ContextAction3=["#CONFIGEDITOR#" "#@#Variables.inc"]
ContextTitle4=Refresh Hypersphube
ContextAction4=[!RefreshGroup Hypersphube]
ContextTitle5=-
ContextAction5=
ContextTitle6=Toggle FunkyMode
ContextAction6=[!SetVariable "FunkyMode" "([#FunkyMode] = 1 ? 0 : 1)"][!WriteKeyValue Variables "FunkyMode" [#FunkyMode] "#@#Variables.inc"][!Refresh]
ContextTitle7=-
ContextAction7=
ContextTitle8=Open skin menu
ContextAction8=[!SkinMenu]
ContextTitle9=Unload skin
ContextAction9=[!DeactivateConfig]

