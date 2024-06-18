@class NSString, PKPassAuxiliaryPassInformationItem;

@interface PKAuxiliaryItemMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPassAuxiliaryPassInformationItem *_item;
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
- (id)initWithAuxiliaryItem:(id)a0;
- (id)mapsMerchantLookupRequest;

@end
