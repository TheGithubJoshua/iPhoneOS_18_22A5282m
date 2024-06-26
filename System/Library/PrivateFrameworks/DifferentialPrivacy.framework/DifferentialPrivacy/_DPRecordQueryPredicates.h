@interface _DPRecordQueryPredicates : NSObject

+ (id)entityForKey:(id)a0;
+ (id)predicateForRecordsNotSubmitted;
+ (void)initialize;
+ (id)predicateForRecordsMatchingKey:(id)a0;
+ (id)predicateForRecordsNotSubmittedForKeyBeginsWith:(id)a0;
+ (id)predicateForRecordsNotSubmittedForKey:(id)a0;
+ (id)predicateForRecordsOlderThan:(id)a0;
+ (id)predicateForRecordsWithVersionMismatch;
+ (id)predicateForKey:(id)a0;
+ (id)predicateForRecordsSubmitted;
+ (id)predicateForRecordsInDateRangeStart:(id)a0 end:(id)a1;
+ (id)predicateForKey:(id)a0 beginsWith:(BOOL)a1 matchReportVersion:(BOOL)a2;
+ (id)predicateForRecordsSubmittedForKey:(id)a0;
+ (id)predicateForKeyBeginsWith:(id)a0;
+ (id)predicateForAllRecords;
+ (id)predicateForKey:(id)a0 beginsWith:(BOOL)a1 submitted:(BOOL)a2 matchReportVersion:(BOOL)a3;

@end
