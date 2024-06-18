@class NSString, GEOPBTransitPaymentMethod;

@interface GEOTransitPaymentMethod : NSObject <NSCopying> {
    GEOPBTransitPaymentMethod *_pbPaymentMethod;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) int paymentMethodType;
@property (readonly, nonatomic) int addValueNameType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPaymentMethod:(id)a0;

@end
