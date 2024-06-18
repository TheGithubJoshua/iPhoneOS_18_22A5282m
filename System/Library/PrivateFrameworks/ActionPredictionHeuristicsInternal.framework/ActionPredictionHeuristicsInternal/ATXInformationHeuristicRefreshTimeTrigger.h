@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface ATXInformationHeuristicRefreshTimeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    NSObject<OS_dispatch_source> *_source;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *fireDate;

- (id)initWithCoder:(id)a0;
- (void)_start;
- (void)_stop;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFireDate:(id)a0;
- (id)description;

@end
