[MeasureHypersphube]
Measure=Calc
Formula=#Min# + (MeasureAudio * (#Max# - #Min#))
UpdateDivider=1
OnChangeAction=[!SetVariable Hypersphube "([&MeasureHypersphube] / 100)"][!UpdateMeterGroup Hypersphube][!Redraw]

[hp0]
Measure=Calc
Formula=(#Min# + (MeasureBand0 * (#Max# - #Min#))) / 100
[hp1]
Measure=Calc
Formula=(#Min# + (MeasureBand1 * (#Max# - #Min#))) / 100
[hp2]
Measure=Calc
Formula=(#Min# + (MeasureBand2 * (#Max# - #Min#))) / 100
[hp3]
Measure=Calc
Formula=(#Min# + (MeasureBand3 * (#Max# - #Min#))) / 100
[hp4]
Measure=Calc
Formula=(#Min# + (MeasureBand4 * (#Max# - #Min#))) / 100
[hp5]
Measure=Calc
Formula=(#Min# + (MeasureBand5 * (#Max# - #Min#))) / 100
[hp6]
Measure=Calc
Formula=(#Min# + (MeasureBand6 * (#Max# - #Min#))) / 100
[hp7]
Measure=Calc
Formula=(#Min# + (MeasureBand7 * (#Max# - #Min#))) / 100
