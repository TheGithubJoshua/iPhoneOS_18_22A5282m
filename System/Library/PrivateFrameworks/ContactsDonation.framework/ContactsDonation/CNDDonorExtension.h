@class NSExtension;
@protocol CNDonationExtensionLogger;

@interface CNDDonorExtension : NSObject

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) id<CNDonationExtensionLogger> logger;

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithExtension:(id)a0 logger:(id)a1;
- (void)redonateAllValuesWithReason:(unsigned long long)a0;
- (void)renewExpirationDateForDonatedValue:(id)a0 acknowledgementHandler:(id /* block */)a1;

@end
