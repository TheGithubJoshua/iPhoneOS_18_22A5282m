@class NSObject, CDRecentInfo;
@protocol OS_dispatch_queue;

@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>

@property (retain, nonatomic) CDRecentInfo *recentPurgeableResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedPurgeableResultsCache;
+ (id)fetchVolumeWithPath:(id)a0;

- (BOOL)isStaleForVolume:(id)a0;
- (id)initEmpty;
- (void)updateRecentVolumeInfo:(id)a0;
- (BOOL)isStale;
- (void)log;
- (id)thresholdsForVolume:(id)a0;
- (id)bsdDiskForVolume:(id)a0;
- (id)recentPurgeableTotals:(int)a0;
- (id)_recentPurgeableTotals:(int)a0 validateResults:(BOOL)a1;
- (id)servicesForVolume:(id)a0;
- (BOOL)hasInvalids;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1;
- (void)invalidateAllForgettingPushers:(BOOL)a0;
- (void)keepUpToDate:(id)a0;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2 targetVolume:(id)a3;
- (void)absorbRecentInfo:(id)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (long long)recentStateForVolume:(id)a0;
- (BOOL)isInvalidForVolume:(id)a0;

@end
