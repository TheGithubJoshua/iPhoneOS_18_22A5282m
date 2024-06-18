@class SGFuture;
@protocol SGDSuggestManagerMessagesProtocol;

@interface SGMessagesDaemonConnection : NSObject {
    SGFuture *_daemonConnectionFuture;
    id<SGDSuggestManagerMessagesProtocol> _remoteSuggestionManagerForTesting;
}

- (void).cxx_destruct;
- (void)setManagerForTesting:(id)a0;
- (id)initWithDaemonConnectionFuture:(id)a0;
- (id)remoteSuggestionManagerWithErrorHandler:(id /* block */)a0;

@end
