@class BWDeepZoomProcessorInput;
@protocol BWDeepZoomProcessorControllerDelegate;

@interface BWDeepZoomProcessorRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWDeepZoomProcessorInput *input;
@property (readonly, nonatomic) id<BWDeepZoomProcessorControllerDelegate> delegate;

- (id)description;
- (void)dealloc;

@end
