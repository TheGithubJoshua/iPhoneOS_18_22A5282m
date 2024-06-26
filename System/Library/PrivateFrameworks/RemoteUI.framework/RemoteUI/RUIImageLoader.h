@class NSMutableDictionary, NSTimer, NSMutableSet, NSNotificationCenter, NSLock, NSMutableArray;

@interface RUIImageLoader : NSObject {
    NSLock *_queueLock;
    NSMutableArray *_loadQueue;
    NSMutableSet *_loadsInProgress;
    NSLock *_cacheLock;
    NSMutableDictionary *_imageCache;
    NSMutableArray *_imageCacheLRU;
    NSMutableDictionary *_loadCompletions;
    struct __CFRunLoop { } *_loaderRunLoop;
    struct __CFRunLoopSource { } *_loaderSource;
    NSNotificationCenter *_notificationCenter;
    NSTimer *_loadStatusNotificationTimer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _startupLock;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _startupCondition;
}

+ (id)sharedImageLoader;

- (id)init;
- (id)notificationCenter;
- (void).cxx_destruct;
- (void)_loadingStatusChanged;
- (BOOL)isLoadingImages;
- (void)_callCompletionsForURL:(id)a0 image:(struct CGImage { } *)a1 error:(id)a2;
- (void)_imageLoadFinished:(id)a0;
- (void)_loadImageURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)_locked_URLIsLoading:(id)a0;
- (void)_locked_imageLoadStarted:(id)a0;
- (void)_locked_loadImageForURL:(id)a0;
- (void)_mainThread_postLoadingStatusChanged;
- (void)_postImageLoadedNotification:(id)a0;
- (void)_postLoadingStatusChanged;
- (void)_setImageData:(id)a0 forURL:(id)a1 error:(id)a2;
- (void)_startLoader;
- (struct CGImage { } *)imageForURL:(id)a0 loadIfAbsent:(BOOL)a1;
- (void)imageForURL:(id)a0 scale:(double)a1 completion:(id /* block */)a2;

@end
