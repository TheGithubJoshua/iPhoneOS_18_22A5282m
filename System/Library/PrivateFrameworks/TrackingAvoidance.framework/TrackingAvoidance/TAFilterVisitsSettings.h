@class NSSet;

@interface TAFilterVisitsSettings : NSObject

@property (readonly, nonatomic) double maxSuspiciousDuration;
@property (readonly, nonatomic) double minInterVisitDistance;
@property (readonly, nonatomic) unsigned long long minNSigmaBetweenVisits;
@property (readonly, nonatomic) double entryDisplayOnBudget;
@property (readonly, nonatomic) double exitDisplayOnBudget;
@property (readonly, nonatomic) NSSet *sensitiveLOITypes;
@property (readonly, nonatomic) double minObservationInterval;
@property (readonly, nonatomic) unsigned long long threeVisitImmediacyType;

+ (double)_determinDefaultEntryDisplayOnBudget;
+ (double)_determinDefaultExitDisplayOnBudget;
+ (id)defaultVisitsSensitiveLOITypes;
+ (BOOL)_isLegacyHardware;

- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)initWithMaxSuspiciousDurationOrDefault:(id)a0 minInterVisitDistanceOrDefault:(id)a1 minNSigmaBetweenVisitsOrDefault:(id)a2 entryDisplayOnBudgetOrDefault:(id)a3 exitDisplayOnBudgetOrDefault:(id)a4 sensitiveLOITypesOrDefault:(id)a5 minObservationIntervalOrDefault:(id)a6 threeVisitImmediacyTypeOrDefault:(id)a7;
- (id)sensitiveLOITypesToString;
- (id)initWithMaxSuspiciousDuration:(double)a0 minInterVisitDistance:(double)a1 minNSigmaBetweenVisits:(unsigned long long)a2 entryDisplayOnBudget:(double)a3 exitDisplayOnBudget:(double)a4 sensitiveLOITypes:(id)a5 minObservationInterval:(double)a6 threeVisitImmediacyType:(unsigned long long)a7;

@end
