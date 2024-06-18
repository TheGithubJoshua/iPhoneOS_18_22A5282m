@class HKCalendarCache, HDProfile, HKSeriesType;

@interface HKHRAFibBurdenTachogramClassificationsRetriever : NSObject {
    HDProfile *_profile;
    HKSeriesType *_seriesType;
    HKCalendarCache *_calendarCache;
    id /* block */ _dateGenerator;
}

- (id)tachogramClassificationsForLastSixWeeksOfWeekday:(long long)a0 tachogramClassifier:(id)a1 error:(id *)a2;
- (id)initWithProfile:(id)a0 calendarCache:(id)a1;
- (id)_tachogramClassificationsWithPredicate:(id)a0 tachogramClassifier:(id)a1 error:(id *)a2 dayIndexBlock:(id /* block */)a3 filterBlock:(id /* block */)a4;
- (id)tachogramClassificationsDayIndexRange:(struct { long long x0; long long x1; })a0 tachogramClassifier:(id)a1 error:(id *)a2;
- (id)initWithProfile:(id)a0 dateGenerator:(id /* block */)a1 calendarCache:(id)a2;
- (BOOL)_shouldAnalyzeSample:(id)a0;
- (void).cxx_destruct;
- (id)tachogramClassificationsForLastSixWeeksOfHoursFrom:(long long)a0 to:(long long)a1 julianDayToMajorityTimeZone:(id)a2 tachogramClassifier:(id)a3 error:(id *)a4;
- (id)_totalDatePredicateForStartDayIndex:(long long)a0 endDayIndex:(long long)a1;

@end
