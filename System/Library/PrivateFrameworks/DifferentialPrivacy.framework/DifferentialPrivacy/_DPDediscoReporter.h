@interface _DPDediscoReporter : _DPReportGenerator

+ (id)filterNonConformingDediscoRecordsFrom:(id)a0;
+ (id)jsonReportFromObject:(id)a0 replacing:(id)a1 with:(id)a2;

- (BOOL)reportDediscoKeys:(id)a0 storage:(id)a1;
- (BOOL)_isCommSafetyEnabled;
- (id)reportToDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;
- (id)extendCommSafetyKey:(id)a0;
- (id)_commSafetyAgeGroup;
- (id)keysWithDefaultValues;
- (BOOL)markSubmitted:(id)a0 storage:(id)a1;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (id)_commSafetyAccountCountryCode;
- (BOOL)reportDediscoRecords:(id)a0;
- (id)defaultRecordsWithValues:(id)a0 key:(id)a1 properties:(id)a2;
- (id)directlyUploadDediscoRecords:(id)a0 forKey:(id)a1 keyProperties:(id)a2 storage:(id)a3;

@end
