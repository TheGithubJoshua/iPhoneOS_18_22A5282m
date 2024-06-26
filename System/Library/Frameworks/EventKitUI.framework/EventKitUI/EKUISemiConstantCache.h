@class UIImage, UIFont;

@interface EKUISemiConstantCache : NSObject {
    BOOL _calInterfaceIsLeftToRight;
    double _dayOccurrenceMinimumCachedLineHeightCompact;
    double _dayOccurrenceMinimumCachedLineHeightRegular;
    double _dayOccurrenceMinimumCachedLineHeightSmallCompact;
    double _dayOccurrenceMinimumCachedLineHeightSmallRegular;
    UIFont *_dayOccurrenceUncompressedSecondaryTextFont;
    UIFont *_weekAllDayLabelFontCompact;
    UIFont *_weekAllDayLabelFontRegular;
    UIFont *_weekAllDayTodayLabelFontCompact;
    UIImage *_inboxDisclosureImage;
}

@property (readonly) BOOL usesLargeText;
@property (readonly) double currentScaleFactor;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightRegular;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallRegular;
@property (readonly) UIFont *dayOccurrenceUncompressedSecondaryTextFont;
@property double weekAllDayBaselineForLargeFormatWeekView;
@property double weekAllDayBaselineForSmallFormatWeekView;
@property double weekAllDayOccurrenceHeight;
@property (readonly) UIFont *weekAllDayLabelFontCompact;
@property (readonly) UIFont *weekAllDayLabelFontRegular;
@property (readonly) UIFont *weekAllDayTodayLabelFontCompact;
@property (readonly) UIFont *weekAllDayTodayLabelFontRegular;
@property double minYearMonthHeaderFontSizeUsed;

+ (id)sharedInstance;

- (void)_localeChanged:(id)a0;
- (id)init;
- (id)statusGlyphForStatusType:(int)a0;
- (id)commentIconStringForFont:(id)a0;
- (void)_orientationChanged:(id)a0;
- (void).cxx_destruct;
- (long long)_participantStatusFromDetailAttendeesStatus:(int)a0;
- (id)_dayOccurrenceFontWithStyle:(id)a0 size:(double)a1 regularSize:(double)a2;
- (void)_contentCategorySizeChanged:(id)a0;
- (void)updateMetrics;
- (id)birthdayImageForFont:(id)a0;
- (id)inboxDisclosureImage;

@end
