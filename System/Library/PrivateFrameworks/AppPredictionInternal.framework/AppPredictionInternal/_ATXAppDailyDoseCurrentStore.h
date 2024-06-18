@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppDailyDoseCurrentStore : NSObject {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _fd;
    NSMutableDictionary *_cache;
    NSDate *_expires;
}

- (id)init;
- (void)increaseDoseFor:(id)a0 by:(double)a1;
- (id)initWithPath:(id)a0;
- (void)_readCacheAndExpiration;
- (void)closePermanently;
- (id)_getCacheFromFile;
- (void)_overwrite;
- (BOOL)isExpiredAt:(id)a0;
- (void).cxx_destruct;
- (void)resetWithDurationMap:(id)a0 on:(id)a1;
- (BOOL)isExpiredNow;
- (void)_openFd;
- (void)dealloc;
- (double)currentDoseFor:(id)a0;

@end
