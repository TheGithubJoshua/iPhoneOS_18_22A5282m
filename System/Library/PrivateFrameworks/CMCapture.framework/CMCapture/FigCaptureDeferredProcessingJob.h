@class FigCaptureDeferredPhotoProcessorRequest, NSString, BWDeferredProcessingContainer;
@protocol FigCaptureDeferredProcessingJobDelegate;

@interface FigCaptureDeferredProcessingJob : NSObject {
    id<FigCaptureDeferredProcessingJobDelegate> _delegate;
    BWDeferredProcessingContainer *_container;
}

@property (readonly, nonatomic) FigCaptureDeferredPhotoProcessorRequest *processorRequest;
@property (nonatomic) long long startNS;
@property (nonatomic) long long durationNS;
@property (readonly, nonatomic) NSString *masterPortType;

+ (BOOL)isPotentiallyRecoverableError:(int)a0;

- (id)container;
- (void)start;
- (void)dealloc;
- (void)failedWithError:(int)a0;
- (void)completedWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithProcessorRequest:(id)a0 delegate:(id)a1 error:(int *)a2;

@end