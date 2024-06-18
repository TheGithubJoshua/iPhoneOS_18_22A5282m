@class NSObject, AMSPurchaseInfo;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder {
    id<AMSBagProtocol> _bag;
}

@property (readonly, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *purchaseRequestQueue;

+ (id)bagURLFromPurchaseInfo:(id)a0 bag:(id)a1 error:(id *)a2;
+ (id)_buyProductURLKeysForProductType:(id)a0 prefix:(id)a1;
+ (id)_bagURLKeysFromPurchaseInfo:(id)a0;
+ (long long)_anisetteTypeFromAccount:(id)a0;
+ (BOOL)isRedirectBagURLOverrideEnabled;
+ (id)_bagURLKeysForPurchaseType:(long long)a0 withProductType:(id)a1 purchase:(id)a2 prefix:(id)a3;
+ (id)_parametersFromPurchaseInfo:(id)a0 error:(id *)a1;
+ (void)configureRequest:(id)a0 purchaseInfo:(id)a1 bag:(id)a2 error:(id *)a3;

- (id)bag;
- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)initWithPurchaseInfo:(id)a0;
- (id)encodeRequest;
- (void).cxx_destruct;
- (void)setBag:(id)a0;

@end
