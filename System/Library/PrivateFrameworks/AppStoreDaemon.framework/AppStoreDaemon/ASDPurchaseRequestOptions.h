@class NSArray;

@interface ASDPurchaseRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *purchases;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPurchases:(id)a0;

@end
