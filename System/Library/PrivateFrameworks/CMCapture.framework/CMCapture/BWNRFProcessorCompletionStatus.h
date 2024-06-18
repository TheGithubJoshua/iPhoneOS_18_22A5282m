@class NRFCompletionStatus;

@interface BWNRFProcessorCompletionStatus : NSObject {
    NRFCompletionStatus *_completionStatus;
}

- (id)description;
- (void)dealloc;

@end
