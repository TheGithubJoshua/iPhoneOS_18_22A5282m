@class NSString, NSCalendar, NSDateComponents;

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator>

@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) long long iconFormat;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (readonly, nonatomic) double canvasScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_countriesRequiringBlackDayOfWeek;
+ (id)_whiteImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)_dayNumberStringFromDateComponents:(id)a0 calendar:(id)a1;
+ (id)_dateNameFromDateComponents:(id)a0 calendar:(id)a1 type:(long long)a2 forceAbbreviated:(BOOL)a3;
+ (BOOL)_isBlackDayOfWeekRequiredForLocale:(id)a0;

- (void)_drawDayNumber;
- (id)_iconBlackColor;
- (struct CGImage { } *)iconImageWithDateComponents:(id)a0 calendar:(id)a1 format:(long long)a2 size:(struct CGSize { double x0; double x1; })a3 scale:(double)a4;
- (double)_roundSpecToActual:(double)a0;
- (void)_drawIconInContext:(struct CGContext { } *)a0 iconBase:(id)a1;
- (id)_dayNumberFont;
- (void).cxx_destruct;
- (id)_iconRedColor;
- (id)initWithForceNoTextEffects:(BOOL)a0;
- (void)_drawDateName;
- (id)_colorForDayOfWeek;
- (id)_dateNameFont;

@end
