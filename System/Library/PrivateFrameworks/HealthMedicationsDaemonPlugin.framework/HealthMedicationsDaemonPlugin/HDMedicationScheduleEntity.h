@interface HDMedicationScheduleEntity : HDHealthEntity

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (long long)protectionClass;
+ (id)propertyForSyncProvenance;
+ (id)privateSubEntities;
+ (BOOL)enumerateSchedulesWithPredicate:(id)a0 orderingTerms:(id)a1 transaction:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (BOOL)insertMedicationSchedule:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (id)schedulePredicateForMedicationIdentifier:(id)a0;
+ (id)schedulePredicateForScheduleIdentifier:(id)a0;
+ (BOOL)updateMedicationSchedulesToBeDeletedWithMedicationUUID:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
