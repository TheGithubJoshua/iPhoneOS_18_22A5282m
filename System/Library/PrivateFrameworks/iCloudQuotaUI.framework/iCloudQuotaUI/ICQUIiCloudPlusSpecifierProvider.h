@class NSArray, NSString, ICQCloudStorageSummary, AIDAAccountManager;
@protocol AAUISpecifierProviderDelegate;

@interface ICQUIiCloudPlusSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager *_accountManager;
    ICQCloudStorageSummary *_storageSummary;
}

@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountManager:(id)a0;
- (void).cxx_destruct;
- (id)account;
- (id)_buildiCloudPlusFeatureSpecifiersFrom:(id)a0;
- (id)_buildiCloudPlusGroupTitleSpecifierFrom:(id)a0;
- (id)_buildiCloudPlusSpecifiers;

@end
