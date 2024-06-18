@class NSDate, TADisplayOnCalculator, TALocationLite, NSMutableDictionary, NSMutableArray, TACLVisit, NSMutableOrderedSet, NSNumber;

@interface TAVisitSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableOrderedSet *lruUtAdvertisementCache;
@property (nonatomic) unsigned long long uniqueUTBufferSizeCap;
@property (nonatomic) unsigned long long displayEventBufferSizeCap;
@property (retain, nonatomic) NSMutableArray *displayEvents;
@property (retain, nonatomic) NSDate *exitIntervalBeginning;
@property (retain, nonatomic) TADisplayOnCalculator *displayOnCalculator;
@property (retain, nonatomic) NSNumber *distanceToClosestLoi;
@property (retain, nonatomic) NSDate *entryDurationOfConsiderationClosed;
@property (nonatomic) unsigned long long maxNSigmaBetweenLastLocationAndVisit;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) TACLVisit *representativeVisit;
@property (readonly, copy, nonatomic) TALocationLite *latestLocation;
@property (readonly, nonatomic) unsigned long long loiType;
@property (readonly, nonatomic) NSMutableDictionary *latestUtAdvertisements;
@property (readonly, nonatomic) NSMutableDictionary *earliestUtAdvertisements;
@property (readonly, nonatomic) BOOL latestLocationInsideVisit;

- (id)initWithCoder:(id)a0;
- (void)addScanState:(id)a0;
- (id)getEntryIntervalEvaluatedUntil;
- (void)setRepresentativeVisit:(id)a0;
- (void)addUTAdvertisement:(id)a0;
- (id)getEntryAdvertisementsWithDisplayOnBudget:(double)a0;
- (void)updateEntryIntervalWithDisplayOnBudget:(double)a0 evaluateToEnd:(BOOL)a1;
- (BOOL)setDepartureVisit:(id)a0;
- (id)mostRecentAdvertisementDate;
- (void)updateLoiType:(id)a0;
- (id)getLocationRepresentingSnapshot;
- (void)encodeWithCoder:(id)a0;
- (void)pruneDisplayEvents;
- (void).cxx_destruct;
- (void)updateLatestLocation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)calculateExitIntervalWithDisplayOnBudget:(double)a0;
- (unsigned long long)evaluateSnapshotQualityWithMinDwellDuration:(double)a0 minDisplayOnDuration:(double)a1;
- (void)closeSnapshotCleanup;
- (double)getDurationOfVisitEntryConsideredWithDisplayOnBudget:(double)a0;
- (id)getExitAdvertisementsWithDisplayOnBudget:(double)a0;
- (id)getDepartureDelay;
- (void)addSystemState:(id)a0;
- (id)getArrivalDelay;
- (id)initWithTACLVisit:(id)a0 uniqueUTBufferCap:(unsigned long long)a1 displayEventBufferSizeCap:(unsigned long long)a2 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)a3;
- (double)getDurationOfVisitExitConsideredWithDisplayOnBudget:(double)a0;
- (double)getDisplayOnTimeUntilEndDate:(id)a0;

@end