@class SGMessagesDaemonConnection, NSMutableDictionary;
@protocol SGMessagesSuggestionsServiceDelegate;

@interface SGMessagesSuggestionsService : SGSuggestionsService <SGSuggestionsServiceMessagesProtocol>

@property (retain) SGMessagesDaemonConnection *messagesDaemonConnection;
@property (retain) NSMutableDictionary *previousMessages;
@property (weak) id<SGMessagesSuggestionsServiceDelegate> delegate;

- (id)init;
- (void)setupContextIfNeededForConversation:(id)a0;
- (void)harvestedSuggestionsFromMessage:(id)a0 bundleIdentifier:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)harvestedSuggestionsFromMessages:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)sendContextForMessage:(id)a0;
- (void)suggestionsFromMessage:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setManagerForTesting:(id)a0;
- (BOOL)isMessageEligibleForSuggestions:(id)a0;
- (void)harvestedSuggestionsFromMessage:(id)a0 bundleIdentifier:(id)a1 options:(unsigned long long)a2 withCompletion:(id /* block */)a3;

@end
