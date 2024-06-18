@class NSDecimalNumber, NSString, SKProductSubscriptionPeriod, NSLocale;

@interface SKProductDiscount : NSObject {
    id _internal;
}

@property (readonly, nonatomic) NSDecimalNumber *price;
@property (readonly, nonatomic) NSLocale *priceLocale;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
@property (readonly, nonatomic) unsigned long long numberOfPeriods;
@property (readonly, nonatomic) unsigned long long paymentMode;
@property (readonly, nonatomic) unsigned long long type;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)_setNumberOfPeriods:(unsigned long long)a0;
- (void)_setPaymentMode:(unsigned long long)a0;
- (void)_setIdentifier:(id)a0;
- (id)copyXPCEncoding;
- (void)_setPrice:(id)a0;
- (void)_setType:(unsigned long long)a0;
- (id)initWithXPCEncoding:(id)a0;
- (void)_setPriceLocale:(id)a0;
- (void).cxx_destruct;
- (void)_setSubscriptionPeriod:(id)a0;

@end
