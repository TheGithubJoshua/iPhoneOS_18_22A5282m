@class PLLazyObject, NSLocale;

@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthYearDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
    NSLocale *_locale;
}

- (id)initWithLocale:(id)a0;
- (id)init;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 options:(unsigned long long)a2;
- (id)monthYearDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)newYearDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 options:(unsigned long long)a4;
- (void).cxx_destruct;
- (id)newShortMonthYearDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3;
- (id)dateRangeFormatter;
- (id)newMonthYearDateRangeFormatter;
- (id)newYearlessDateRangeFormatter;
- (id)recentDateRangeFormatter;

@end
