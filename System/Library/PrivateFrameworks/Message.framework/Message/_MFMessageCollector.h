@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
}

@property (copy, nonatomic) id /* block */ transmogrifier;

- (id)messages;
- (id)init;
- (id)copyMessages;
- (void)newMessagesAvailable:(id)a0;
- (BOOL)shouldCancel;
- (void).cxx_destruct;

@end
