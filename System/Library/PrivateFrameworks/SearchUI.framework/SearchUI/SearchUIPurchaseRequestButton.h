@protocol NSObject;

@interface SearchUIPurchaseRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> purchaseRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (id)requestIdentifier;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)setupSubscription;
- (void)dealloc;
- (unsigned long long)type;
- (int)getRequestState;

@end
