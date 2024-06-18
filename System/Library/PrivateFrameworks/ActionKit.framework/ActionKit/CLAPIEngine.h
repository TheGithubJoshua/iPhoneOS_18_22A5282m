@class NSString, NSURL, NSMutableSet;
@protocol CLAPIEngineDelegate;

@interface CLAPIEngine : NSObject

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) id<CLAPIEngineDelegate> delegate;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) NSMutableSet *transactions;
@property (nonatomic) BOOL clearsCookies;

+ (id)engine;
+ (void)initialize;
+ (id)defaultBaseURL;
+ (id)engineWithDelegate:(id)a0;

- (id)init;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (BOOL)isReady;
- (id)initWithDelegate:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (id)_URLWithPath:(id)a0;
- (id)_createAndStartConnectionForTransaction:(id)a0;
- (id)_transactionForConnection:(id)a0;
- (id)_transactionForConnectionIdentifier:(id)a0;
- (id)bookmarkLinkWithURL:(id)a0 name:(id)a1 options:(id)a2 userInfo:(id)a3;
- (id)bookmarkLinkWithURL:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void)cancelAllConnections;
- (void)cancelConnection:(id)a0;
- (id)changeNameOfItem:(id)a0 toName:(id)a1 userInfo:(id)a2;
- (id)changeNameOfItemAtHref:(id)a0 toName:(id)a1 userInfo:(id)a2;
- (id)changePrivacyOfItem:(id)a0 toPrivate:(BOOL)a1 userInfo:(id)a2;
- (id)changePrivacyOfItemAtHref:(id)a0 toPrivate:(BOOL)a1 userInfo:(id)a2;
- (id)createAccountWithEmail:(id)a0 password:(id)a1 acceptTerms:(BOOL)a2 userInfo:(id)a3;
- (id)deleteItem:(id)a0 userInfo:(id)a1;
- (id)deleteItemAtHref:(id)a0 userInfo:(id)a1;
- (id)getAccountInformationWithUserInfo:(id)a0;
- (id)getItemInformation:(id)a0 userInfo:(id)a1;
- (id)getItemInformationAtURL:(id)a0 userInfo:(id)a1;
- (id)getItemListStartingAtPage:(long long)a0 itemsPerPage:(long long)a1 userInfo:(id)a2;
- (id)getItemListStartingAtPage:(long long)a0 ofType:(long long)a1 itemsPerPage:(long long)a2 showOnlyItemsInTrash:(BOOL)a3 userInfo:(id)a4;
- (id)getItemListStartingAtPage:(long long)a0 ofType:(long long)a1 itemsPerPage:(long long)a2 userInfo:(id)a3;
- (id)getStoreProductsWithUserInfo:(id)a0;
- (id)redeemStoreReceipt:(id)a0 userInfo:(id)a1;
- (long long)requestTypeForConnectionIdentifier:(id)a0;
- (id)restoreItem:(id)a0 userInfo:(id)a1;
- (id)restoreItemAtHref:(id)a0 userInfo:(id)a1;
- (id)uploadFileWithName:(id)a0 fileData:(id)a1 fileURL:(id)a2 options:(id)a3 userInfo:(id)a4;
- (id)uploadFileWithName:(id)a0 fileData:(id)a1 options:(id)a2 userInfo:(id)a3;
- (id)uploadFileWithName:(id)a0 fileData:(id)a1 userInfo:(id)a2;
- (id)uploadFileWithName:(id)a0 fileURL:(id)a1 options:(id)a2 userInfo:(id)a3;
- (id)userInfoForConnectionIdentifier:(id)a0;

@end