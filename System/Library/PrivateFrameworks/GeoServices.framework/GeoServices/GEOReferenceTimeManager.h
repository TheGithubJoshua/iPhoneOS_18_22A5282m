@class NSString, GEOReferenceTimeData, geo_isolater, NSObject;
@protocol OS_dispatch_semaphore;

@interface GEOReferenceTimeManager : NSObject <GEOConfigChangeListenerDelegate> {
    GEOReferenceTimeData *_refTimeData;
    geo_isolater *_iso;
    NSObject<OS_dispatch_semaphore> *_syncSem;
    BOOL _synchronized;
    BOOL _IsGeod;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (BOOL)_didKernBootTimeChange;
- (BOOL)synchronized;
- (void)_kernBootTimeResult:(id /* block */)a0;
- (void)referenceTimeResult:(id /* block */)a0;
- (double)bestReferenceTime;
- (void)_persistBasisRefTimeData:(id)a0;
- (id)_initInternal;
- (id)_retrievePersistedBasisRefTimeData;
- (void)_startTimedSync;
- (void).cxx_destruct;
- (double)_referenceTime;
- (void)_syncWithTimed;
- (void)dealloc;
- (BOOL)_initFromPersistence;

@end
