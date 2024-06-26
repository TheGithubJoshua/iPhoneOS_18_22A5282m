@protocol NSSecureCoding;

@interface SGXPCResponse3 : SGXPCResponse2

@property (readonly, nonatomic) id<NSSecureCoding> response3;

+ (BOOL)supportsSecureCoding;
+ (id)responseWith:(id)a0 also:(id)a1 also:(id)a2;
+ (id)responseWithError:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)response2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)response1;

@end
