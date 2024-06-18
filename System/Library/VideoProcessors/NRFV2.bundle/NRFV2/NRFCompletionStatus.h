@class FigMetalExecutionStatus;
@protocol MTLCommandBuffer;

@interface NRFCompletionStatus : NSObject

@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) FigMetalExecutionStatus *metalExecutionStatus;

- (id)init;
- (void).cxx_destruct;
- (void)waitForCompletion;

@end
