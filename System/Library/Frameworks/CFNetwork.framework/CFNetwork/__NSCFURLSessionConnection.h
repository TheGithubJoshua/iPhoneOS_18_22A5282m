@class NSURLResponse, NSURLSessionTask, NSObject;
@protocol OS_dispatch_queue, __NSCFURLSessionConnectionDelegate, OS_dispatch_data;

@interface __NSCFURLSessionConnection : NSObject <NSCopying> {
    NSURLSessionTask *_task;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<__NSCFURLSessionConnectionDelegate> _delegate;
    BOOL _isFromCache;
    NSURLResponse *_cacheResponse;
    NSObject<OS_dispatch_data> *_cacheData;
    unsigned long long _cacheDataMax;
    long long _maxCacheEntrySize;
}

- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)a0;
- (void)suspend;
- (void)cancel;
- (void)setPoolPriority:(long long)a0;
- (void)setBytesPerSecondLimit:(long long)a0;
- (void)resume;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setIsDownload:(BOOL)a0;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)a0;
- (void)setPriorityHint:(float)a0 incremental:(BOOL)a1;
- (void)expectedProgressTargetChanged;
- (id)initWithTask:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;

@end
