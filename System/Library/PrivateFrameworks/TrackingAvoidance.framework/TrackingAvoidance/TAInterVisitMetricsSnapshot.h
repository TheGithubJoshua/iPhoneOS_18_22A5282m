@class NSMutableDictionary, NSDate;

@interface TAInterVisitMetricsSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) NSDate *initialTime;
@property (readonly, nonatomic) NSDate *lastUpdateTime;
@property (readonly, nonatomic) unsigned long long maxUniqueAddresses;
@property (readonly, nonatomic) NSMutableDictionary *accumulatedDeviceMetrics;
@property (readonly, nonatomic) NSMutableDictionary *firstAssociatedLocationPerDevice;
@property (readonly, nonatomic) NSMutableDictionary *lastAssociatedLocationPerDevice;
@property (readonly, nonatomic) NSMutableDictionary *lastAdvPerDevice;

- (id)initWithCoder:(id)a0;
- (void)updateWithInterVisitMetricsSnapshot:(id)a0 store:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)visitEntryDelayCorrection:(id)a0 store:(id)a1;
- (void)updateInterVisitMetric:(id)a0 store:(id)a1 withUpdatedTime:(id)a2 andCloseSnapshot:(BOOL)a3;
- (id)initWithTime:(id)a0 maxUniqueAddresses:(unsigned long long)a1;

@end
