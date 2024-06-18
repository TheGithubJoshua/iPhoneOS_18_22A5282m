@class NSString, NSMutableDictionary, ATXMemoryPressureMonitor;

@interface ATXScoreInterpreterCache : NSObject <ATXMemoryPressureObserver> {
    NSMutableDictionary *_cachedInterpreters;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _memoryPressureAllowsCaching;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)resetCache;
- (id)scoreInterpreterForConsumerSubType:(unsigned char)a0;
- (void).cxx_destruct;
- (id)_assetNamesToSkipCaching;
- (void)dealloc;
- (void)handleMemoryPressureOfType:(unsigned long long)a0;

@end
