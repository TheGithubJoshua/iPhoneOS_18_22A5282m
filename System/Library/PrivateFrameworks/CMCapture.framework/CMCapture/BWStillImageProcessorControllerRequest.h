@class BWStillImageProcessorControllerInput;
@protocol BWStillImageProcessorControllerDelegate;

@interface BWStillImageProcessorControllerRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWStillImageProcessorControllerInput *input;
@property (readonly, nonatomic) id<BWStillImageProcessorControllerDelegate> delegate;

- (id)description;
- (void)dealloc;
- (id)initWithInput:(id)a0 delegate:(id)a1;
- (BOOL)readyForProcessing;

@end
