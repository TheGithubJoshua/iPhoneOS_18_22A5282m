@class BWJasperDisparityProcessorInput;
@protocol BWJasperDisparityProcessorControllerDelegate;

@interface BWJasperDisparityProcessorRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWJasperDisparityProcessorInput *input;
@property (readonly, nonatomic) id<BWJasperDisparityProcessorControllerDelegate> delegate;

- (id)description;
- (void)dealloc;
- (id)initWithInput:(id)a0 delegate:(id)a1;

@end
