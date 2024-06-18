@class NSDate;

@interface SUManagedDeviceUpdateDelay : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDelayed;
@property (retain, nonatomic) NSDate *delayedStartDate;
@property (nonatomic) unsigned long long delayPeriod;

- (id)initWithCoder:(id)a0;
- (id)initWithDelay:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)delayEndDate;
- (unsigned long long)delayUnit;

@end
