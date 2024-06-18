@class NSDictionary;

@interface ASDIAPInfoResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *iaps;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithIAPs:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
