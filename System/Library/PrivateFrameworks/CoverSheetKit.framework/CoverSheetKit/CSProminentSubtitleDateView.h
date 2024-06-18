@class NSString, NSDateFormatter, NSLocale;

@interface CSProminentSubtitleDateView : CSProminentTextElementView

@property (retain, nonatomic) NSDateFormatter *formatter;
@property (retain, nonatomic) NSDateFormatter *alternateDateFormatter;
@property (copy, nonatomic) NSString *alternateCalendarIdentifier;
@property (retain, nonatomic) NSLocale *alternateCalendarLocale;

+ (unsigned long long)elementType;

- (id)overrideString;
- (id)_alternateDateString;
- (id)initWithDate:(id)a0 font:(id)a1 textColor:(id)a2;
- (id)_dateString;
- (void)_updateLabel;
- (void)setDate:(id)a0;
- (void)setAlternateCalendarIdentifier:(id)a0 locale:(id)a1;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 textColor:(id)a1;
- (BOOL)_wantsCompactForOrientation;

@end
