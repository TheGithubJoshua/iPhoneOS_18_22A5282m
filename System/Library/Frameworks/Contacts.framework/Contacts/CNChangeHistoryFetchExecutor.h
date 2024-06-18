@class CNContactStore, CNChangeHistoryFetchRequest;

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request;
@property (readonly, nonatomic) CNContactStore *store;

+ (id)os_log;

- (id)fetchCount:(id *)a0;
- (id)run:(id *)a0;
- (id)initWithRequest:(id)a0 store:(id)a1;
- (id)keysToFetch;
- (BOOL)validateFetchRequest;
- (id)fetchEvents:(id *)a0;
- (id)fullSync;
- (id)contactLinkingEventsForContacts:(id)a0 withFactory:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)countOfDeltaSync;
- (id)deltaSync;

@end
