@class NSString;

@interface PKDataReleaseEntityLookupSource : NSObject <PKMerchantLookupRequestSource> {
    NSString *_entity;
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
- (id)mapsMerchantLookupRequest;
- (id)initWithEntityIdentifier:(id)a0;

@end
