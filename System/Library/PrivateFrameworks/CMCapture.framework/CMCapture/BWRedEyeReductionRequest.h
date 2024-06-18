@class BWRedEyeReductionControllerInput;
@protocol BWRedEyeReductionControllerDelegate;

@interface BWRedEyeReductionRequest : NSObject

@property (readonly, nonatomic) BWRedEyeReductionControllerInput *input;
@property (readonly, nonatomic) id<BWRedEyeReductionControllerDelegate> delegate;
@property (nonatomic) int mode;

- (id)description;
- (void)dealloc;
- (id)initWithInput:(id)a0 delegate:(id)a1;

@end
