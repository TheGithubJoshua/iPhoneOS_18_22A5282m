@class NSMutableDictionary;

@interface ASMessageQueue : NSObject {
    NSMutableDictionary *_identifierToMessageDictionary;
    struct __CFString { } *_domainName;
    struct __CFString { } *_queueName;
}

- (id)init;
- (id)messageWithIdentifier:(id)a0;
- (void)_synchronizePreferences;
- (void).cxx_destruct;
- (void)enumerateQueuedMessagesUsingBlock:(id /* block */)a0;
- (void)dealloc;
- (void)setMessage:(id)a0 identifier:(id)a1;
- (void)removeMessageWithIdentifier:(id)a0;
- (id)initWithQueueName:(id)a0;

@end
