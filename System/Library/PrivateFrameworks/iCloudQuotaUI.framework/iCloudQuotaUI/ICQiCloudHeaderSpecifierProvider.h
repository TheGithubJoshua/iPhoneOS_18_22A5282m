@class NSArray, NSString, AIDAAccountManager, PSListController, ICQCloudStorageSpecifierProvider;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate;

@interface ICQiCloudHeaderSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager *_accountManager;
    PSListController<AAUISpecifierProviderDelegate> *_listController;
    ICQCloudStorageSpecifierProvider *_storageGroupSpecifierProvider;
    id<AAUISpecifierProvider> _storageViolationTipSpecifierProvider;
    NSArray *_storageSpecifiers;
}

@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountManager:(id)a0;
- (BOOL)handleURL:(id)a0;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1;
- (void).cxx_destruct;
- (id)account;
- (id)initWithAccountManager:(id)a0 navigationController:(id)a1;

@end
