@class UILabel, NSTimeZone, MTUIDigitalClockLabel;
@protocol MTUIWorldClockCellViewDelegate;

@interface MTUIWorldClockCellView : UIView <MTClock> {
    NSTimeZone *_timeZone;
    long long _nowInMinutes;
    BOOL _editing;
}

@property (weak, nonatomic) id<MTUIWorldClockCellViewDelegate> delegate;
@property (readonly, nonatomic) BOOL started;
@property (readonly, nonatomic) MTUIDigitalClockLabel *digitalClock;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (readonly, nonatomic) UILabel *combinedLabel;
@property (nonatomic) BOOL shouldStackViews;
@property (readonly, nonatomic) long long runMode;

+ (double)defaultHeight;
+ (id)dayAndTimeZoneOffsetStringFromDate:(id)a0 withTimeZoneOffset:(long long)a1 timeZoneAbbreviation:(id)a2 spaceBeforeTimeDesignator:(BOOL)a3;
+ (id)dayAndTimeZoneOffsetStringFromDate:(id)a0 withTimeZoneOffset:(long long)a1 timeZoneAbbreviation:(id)a2 spaceBeforeTimeDesignator:(BOOL)a3 hoursOnly:(BOOL)a4;

- (double)updateInterval;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (void)handleTextSizeChange:(id)a0;
- (void)localeChange:(id)a0;
- (void)updateTimeContinuously:(long long)a0;
- (void).cxx_destruct;
- (void)setTimeZone:(id)a0;
- (void)updateLabelAdjustFontSize;
- (void)updateTime;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (double)coarseUpdateInterval;
- (void)layoutSubviews;
- (void)significantTimeChange:(id)a0;
- (void)_configureFonts;

@end
