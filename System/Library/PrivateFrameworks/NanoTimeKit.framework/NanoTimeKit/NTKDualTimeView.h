@class NTKDigitalTimeLabel, NSDate, CAReplicatorLayer, NTKFaceColorPalette, CALayer, UIView, NSCalendar, NSString, CLKClockTimerToken, UIColor, NSArray, CLKDevice, NTKAnalogHandsView;

@interface NTKDualTimeView : UIView <NTKTimeView> {
    NSDate *_overrideDate;
    NSCalendar *_calendar;
    CLKClockTimerToken *_clockTimerToken;
    UIColor *_digitalTimeActiveTickColor;
    UIColor *_digitalTimeInactiveTickColor;
    CAReplicatorLayer *_hourTickReplicatorLayer;
    CAReplicatorLayer *_minuteTickReplicatorLayer;
    NSArray *_digitalTicks;
    NTKFaceColorPalette *_blackPalette;
}

@property (retain, nonatomic) UIView *dialContainerView;
@property (retain, nonatomic) UIView *dialBackgroundView;
@property (retain, nonatomic) UIView *analogContainerView;
@property (retain, nonatomic) UIView *analogTickContainerView;
@property (retain, nonatomic) NTKAnalogHandsView *analogHandsView;
@property (retain, nonatomic) CLKDevice *device;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (nonatomic) BOOL editing;
@property (nonatomic) BOOL hideActiveTicks;
@property (nonatomic) BOOL useMonospacedDigitalNumbers;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NTKFaceColorPalette *colorPalette;
@property (readonly, nonatomic) NTKDigitalTimeLabel *digitalTimeLabel;
@property (readonly, nonatomic) UIView *digitalContainerView;
@property (readonly, nonatomic) CALayer *digitalTicksContainer;
@property (readonly, nonatomic) UIView *digitalTicksContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTimeOffset:(double)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)_activeTimeView;
- (struct CGSize { double x0; double x1; })_secondTickSize;
- (struct CGSize { double x0; double x1; })_minuteTickSize;
- (void)_applyColorToAnalogHands;
- (void)_applyColorToDigitalLabelAndTicks;
- (double)_cardinalSecondTickInset;
- (struct CGSize { double x0; double x1; })_cardinalSecondTickSize;
- (void)_colorizeAnalogTicksWithHourColor:(id)a0 minuteColor:(id)a1;
- (void)_colorizeDigitalTicksWithActiveColor:(id)a0 inactiveColor:(id)a1 now:(id)a2 secondFraction:(double)a3;
- (id)_customDialBackgroundView;
- (id)_dialColorForColorPalette:(id)a0;
- (void)_didFinishTimeViewSetup;
- (id)_digitalLabelFont;
- (id)_digitalStyle;
- (id)_digitalTimeLabelColorForColorPalette:(id)a0;
- (double)_digitalTimeLabelFontSize;
- (void)_endDigitalTicksTimer;
- (id)_hourMinuteHandFillColorForColorPalette:(id)a0;
- (id)_hourMinuteHandStrokeColorForColorPalette:(id)a0;
- (id)_hourTickColorForColorPalette:(id)a0;
- (unsigned long long)_hourTickCount;
- (double)_hourTickInset;
- (struct CGSize { double x0; double x1; })_hourTickSize;
- (id)_minuteTickColorForColorPalette:(id)a0;
- (unsigned long long)_minuteTickCount;
- (double)_minuteTickInset;
- (void)_refreshDigitalTicks;
- (void)_refreshDigitalTicksWithNow:(id)a0 secondFraction:(double)a1;
- (id)_secondHandColorForColorPalette:(id)a0;
- (id)_secondTickActiveColorForColorPalette:(id)a0;
- (id)_secondTickInactiveColorForColorPalette:(id)a0;
- (double)_secondTickInset;
- (void)_setupAnalogHandsView;
- (void)_setupAnalogTicks;
- (void)_setupAnalogTimeViews;
- (void)_setupDial;
- (void)_setupDigitalTicks;
- (void)_setupDigitalTimeViews;
- (void)_startDigitalTicksTimer;
- (void)_tearDownAnalogContainerView;
- (void)_tearDownDigitalContainerView;
- (void)applyGossamerColorPalette:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromColorPalette:(id)a1 toColorPalette:(id)a2;
- (void)applyTransitionFraction:(double)a0 fromColorPalette:(id)a1 toColorPalette:(id)a2 ignoreTimeView:(BOOL)a3;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1 andDevice:(id)a2;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)setSecondsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setupTimeViews;
- (BOOL)shouldUseCustomDialBackground;

@end