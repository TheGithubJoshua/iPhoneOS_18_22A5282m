@protocol NSObject;

@interface SearchUIScreenTimeRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> screentimeRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (id)requestIdentifier;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)setupSubscription;
- (void)dealloc;
- (unsigned long long)type;
- (int)getRequestState;

@end
