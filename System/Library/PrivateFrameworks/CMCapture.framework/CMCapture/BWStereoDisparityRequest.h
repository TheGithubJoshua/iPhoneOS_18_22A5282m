@class BWStereoDisparityProcessorInput;
@protocol BWStillImageProcessorControllerDelegate;

@interface BWStereoDisparityRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWStereoDisparityProcessorInput *input;
@property (readonly, nonatomic) id<BWStillImageProcessorControllerDelegate> delegate;

- (id)description;
- (void)dealloc;

@end
