@interface PVPersonDeduperLocationStep : PVPersonDeduperStep

- (id)name;
- (void)dedupePersons:(id)a0 withOtherPersons:(id)a1 updateBlock:(id /* block */)a2 resultBlock:(id /* block */)a3;
- (BOOL)isPersonSimilar:(id)a0 withOtherPerson:(id)a1 withDistance:(float)a2 minAgeType:(unsigned short)a3;
- (id)metricsKey;
- (id)momentWithBestLocationForPersons:(id)a0 andOtherPersons:(id)a1 personsByMomentLocalIdentifiersCache:(id)a2;

@end