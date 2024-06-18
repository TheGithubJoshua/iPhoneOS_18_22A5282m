@class PLTimer, NSMutableDictionary, NSDate, NSMutableArray;

@interface PLTimeReferenceDynamic : PLTimeReference

@property (retain) NSMutableArray *offsetHistory;
@property int offsetHistoryHead;
@property (retain) PLTimer *periodicCurrentTime;
@property (retain) NSMutableDictionary *timeChangeBlocks;
@property double tooFarInFutureDistance;
@property double tooFarInPastDistance;
@property (retain) NSDate *lastQueryTime;

+ (double)nearestDistanceFromDate:(id)a0 toRegionWithStartDate:(id)a1 andEndDate:(id)a2;

- (void)registerForClockSetNotification;
- (id)newOffsetEntryWithCurrentTime;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)setOffset:(double)a0;
- (void)initializeOffsetWithEntries:(id)a0;
- (BOOL)shouldQueryCurrentTime;
- (void)initializeOffsetHistoryWithEntries:(id)a0;
- (id)removeTimeOffsetFromReferenceTime:(id)a0;
- (void).cxx_destruct;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)a0;
- (void)notifyTimeChange:(double)a0;
- (void)checkForTimeChangeWithCurrentTime:(id)a0;
- (void)registerForTimeChangedNotification;
- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;

@end
