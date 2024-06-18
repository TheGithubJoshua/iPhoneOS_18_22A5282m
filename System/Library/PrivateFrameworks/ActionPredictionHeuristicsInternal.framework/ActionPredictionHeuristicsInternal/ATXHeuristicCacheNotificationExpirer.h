@class NSString;

@interface ATXHeuristicCacheNotificationExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {
    NSString *_notificationName;
    id _token;
    BOOL _isLocal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)_start;
- (void)_stop;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initLocal:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initDistributed:(id)a0;

@end
