@class NSString, PKPayLaterFinancingPlan;

@interface PKPayLaterMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPayLaterFinancingPlan *_financingPlan;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRefund;
- (BOOL)isSettlement;
- (id)mapsURL;
- (void).cxx_destruct;
- (id)identifier;
- (long long)type;
- (id)initWithFinancingPlan:(id)a0;
- (id)mapsMerchantLookupRequest;

@end
