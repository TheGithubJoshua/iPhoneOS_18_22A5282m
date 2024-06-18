@class NTKTaskScheduler, NSMutableDictionary;

@interface NTKPhotoAnalysisFileCache : NSObject {
    NSMutableDictionary *_cache;
    int _sequenceNumber;
    BOOL _cacheDirty;
    NTKTaskScheduler *_taskScheduler;
}

+ (id)sharedInstance;

- (BOOL)_load;
- (BOOL)_save;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPhotoAnalysis:(id)a0 forIdentifier:(id)a1;
- (void)_dirtyCache;
- (id)photoAnalysisForIdentifier:(id)a0;

@end
