@class CNContactStore, CNContact;

@interface CNSiriContactContextProvider : NSObject <AFContextProvider>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *store;
@property (nonatomic) BOOL isEnabled;

+ (id)descriptorForRequiredKeys;

- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)a0;
- (void).cxx_destruct;
- (id)defaultContextManager;
- (void)setEnabled:(BOOL)a0;
- (void)dealloc;
- (void)_removeContextProviderOnMainThread;
- (id)initWithContact:(id)a0 store:(id)a1;

@end
