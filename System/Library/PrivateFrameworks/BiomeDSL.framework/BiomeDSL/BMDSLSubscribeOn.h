@class BMDSL;
@protocol BMDSLScheduler;

@interface BMDSLSubscribeOn : BPSPublisher

@property (readonly, nonatomic) BMDSL *upstream;
@property (readonly, nonatomic) id<BMDSLScheduler> scheduler;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 scheduler:(id)a1;

@end
