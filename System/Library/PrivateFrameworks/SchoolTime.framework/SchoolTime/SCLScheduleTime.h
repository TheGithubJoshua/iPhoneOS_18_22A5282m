@class NSDateComponents;

@interface SCLScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long hour;
@property (readonly, nonatomic) unsigned long long minute;
@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScheduleTime:(id)a0;

@end
