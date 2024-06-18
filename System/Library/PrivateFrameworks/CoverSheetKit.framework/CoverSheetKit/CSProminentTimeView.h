@class NSString, NSDateFormatter, UIFont;

@interface CSProminentTimeView : CSProminentTextElementView

@property (retain, nonatomic) NSDateFormatter *timeFormatter;
@property (nonatomic) BOOL usesLightTimeFontVariant;
@property (nonatomic) BOOL usesLandscapeTimeFontVariant;
@property (retain, nonatomic) UIFont *baseFont;
@property (copy, nonatomic) NSString *numberingSystem;

+ (unsigned long long)elementType;
+ (id)_lightVariantForBaseFont:(id)a0 size:(double)a1;
+ (id)_prominentFontFromBaseFont:(id)a0 usingLightVariant:(BOOL)a1 usingLandscapeVariant:(BOOL)a2;

- (void)_updateTimeFormatterNumberingSystem;
- (void)_updateTimeFormatter;
- (id)initWithDate:(id)a0 font:(id)a1 textColor:(id)a2;
- (void)setDate:(id)a0;
- (id)_timeString;
- (void)currentLocaleDidChange:(id)a0;
- (id)_correctedDateFormat;
- (id)_localeAccountingForNumberingSystem:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateTimeString;
- (id)initWithDate:(id)a0 baseFont:(id)a1 textColor:(id)a2;
- (void)dealloc;
- (void)layoutSubviews;

@end
