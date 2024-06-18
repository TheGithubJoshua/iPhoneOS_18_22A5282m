@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPPeopleSuggester : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueueForSweeping;
}

+ (id)sharedInstance;

- (id)init;
- (id)_rankedContactIdentifiersMatchingName:(id)a0;
- (id)rankedContactIdentifiers;
- (void)_sweepCache;
- (void).cxx_destruct;
- (double)_cacheEntryAgeThresholdSecondsSince1970;
- (id)rankedContactIdentifiersMatchingName:(id)a0;

@end
