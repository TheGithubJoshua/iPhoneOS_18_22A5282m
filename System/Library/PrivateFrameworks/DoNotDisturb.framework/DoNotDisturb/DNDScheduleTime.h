@interface DNDScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long hour;
@property (readonly, nonatomic) unsigned long long minute;

+ (id)defaultStartTime;
+ (id)defaultEndTime;

- (id)initWithCoder:(id)a0;
- (id)dateComponents;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithTime:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithHour:(unsigned long long)a0 minute:(unsigned long long)a1;

@end
