@interface CUIKDateStrings : NSObject

+ (id)_significantLocaleComponents:(id)a0;
+ (id)overlayYearStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)_languageIDfromLocalID:(id)a0;
+ (id)_zodiacSymbolForDate:(id)a0 inCalendar:(id)a1;
+ (BOOL)supportsOverlayCalendarWithIdentifier:(id)a0;
+ (id)_newDateFormatterForTemplate:(id)a0 calendar:(id)a1;
+ (id)yearMonthDayStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)mediumStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)overlayShortStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)yearStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)yearMonthStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)cachedDateFormatterForTemplate:(id)a0 calendar:(id)a1;
+ (id)_newDateFormatterForDateStyle:(unsigned long long)a0 timeStyle:(unsigned long long)a1 calendar:(id)a2;
+ (id)overlayCalendarPickerDisplayNameForCalendarWithIdentifier:(id)a0;
+ (id)_overlayDayNumberStringForDate:(id)a0 day:(long long)a1 inCalendar:(id)a2;
+ (id)cachedDateFormatterForFormat:(id)a0 calendar:(id)a1;
+ (id)_cachedDateFormatterForDomain:(id)a0 calendar:(id)a1 formatterKey:(id)a2 creationBlock:(id /* block */)a3;
+ (id)_newDateFormatterForFormat:(id)a0 calendar:(id)a1;
+ (id)monthDayStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)cachedDateFormatterForDateStyle:(unsigned long long)a0 timeStyle:(unsigned long long)a1 calendar:(id)a2;
+ (id)overlayMediumStringForDate:(id)a0 inCalendar:(id)a1;
+ (unsigned long long)_overlayCalendarTypeForCalendarIdentifier:(id)a0;
+ (id)overlayLocalizedStringForKey:(id)a0 calendar:(id)a1;
+ (id)monthStringForDate:(id)a0 inCalendar:(id)a1;
+ (id)overlayFirstDayOfLunarMonthLocalizedStringInCalendar:(id)a0;
+ (id)longStringForDate:(id)a0 inCalendar:(id)a1;

@end
