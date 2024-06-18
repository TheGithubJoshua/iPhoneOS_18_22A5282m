@class NSNumber;

@interface CATIDSMessageOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=shouldFireAndForget) BOOL fireAndForget;
@property (retain, nonatomic) NSNumber *deliveryTimeout;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
