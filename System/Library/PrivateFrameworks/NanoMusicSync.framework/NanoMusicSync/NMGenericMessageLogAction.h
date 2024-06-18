@class NSString;

@interface NMGenericMessageLogAction : NMLogAction {
    NSString *_message;
}

+ (id)logActionWithMessage:(id)a0;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)logMessage;

@end
