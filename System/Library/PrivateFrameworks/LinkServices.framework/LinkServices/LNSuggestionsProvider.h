@class NSXPCConnection;

@interface LNSuggestionsProvider : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)init;
- (id)suggestedActionsForSuggestionsRequests:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
