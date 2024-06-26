@class NSMutableSet;

@interface ATXHeuristicCacheExpirer : NSObject <NSSecureCoding> {
    NSMutableSet *_expirationEntries;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)expire;
- (id)initWithCoder:(id)a0;
- (void)_start;
- (id)init;
- (void)_stop;
- (void)startExpiring:(id)a0 cache:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopExpiring:(id)a0 cache:(id)a1;

@end
