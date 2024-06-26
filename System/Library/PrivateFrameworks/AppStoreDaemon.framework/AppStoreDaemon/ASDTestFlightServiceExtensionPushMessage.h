@class NSDictionary, NSDate;

@interface ASDTestFlightServiceExtensionPushMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSDate *timestamp;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimestamp:(id)a0 userInfo:(id)a1;

@end
