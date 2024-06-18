@class GEOMapDataSubscriptionDownloader, NSProgress, NSError, GEOMapDataSubscriptionState;

@interface _GEOMapDataSubscriptionDownloadState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _fullyLoadedForLatestVersions;
    BOOL _fullyLoadedForStaleVersions;
    unsigned long long _dataCount;
    unsigned long long _dataSize;
    NSProgress *_pendingProgress;
    NSError *_lastError;
    GEOMapDataSubscriptionDownloader *_downloader;
    GEOMapDataSubscriptionState *_externalState;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
