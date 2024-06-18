@interface WFIntentDynamicResolutionRequest : NSObject

@property (copy, nonatomic) id /* block */ resolutionBlock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;

@end
