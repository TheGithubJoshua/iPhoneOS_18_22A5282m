@class NSString, PXCloudQuotaOfferProvider;

@interface PXCloudQuotaOfferController : PXCloudQuotaController <PXChangeObserver, ICQBannerViewDelegate, PXSettingsKeyObserver> {
    PXCloudQuotaOfferProvider *_offerProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_mockOfferIncludeAssetCounts;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)_mockOfferLevel;
- (void)_updateInformationView;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)dealloc;
- (id)presentingViewControllerForBannerView:(id)a0;

@end
