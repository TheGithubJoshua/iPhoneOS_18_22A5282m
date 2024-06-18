@interface WBSExtensionMessageReplySender : NSObject {
    id /* block */ _block;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void)sendReplyIfNotAlreadySent:(id)a0;

@end
