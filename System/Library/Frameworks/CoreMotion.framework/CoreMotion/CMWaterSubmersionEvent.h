@class NSDate;

@interface CMWaterSubmersionEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long state;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithEvent:(long long)a0 andDate:(id)a1;

@end
