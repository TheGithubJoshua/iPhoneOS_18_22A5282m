@class NSArray, NSString, NSObject;
@protocol WFStatisticsSampleProvider;

@interface WFConcreteStatisticsSampleProvider : NSProxy <WFStatisticsSampleProvider>

@property (retain, nonatomic) NSObject<WFStatisticsSampleProvider> *sampleProvider;
@property (readonly, nonatomic) BOOL canProvideDataSamples;
@property (readonly, nonatomic) NSArray *dataSamples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithSampleProvider:(id)a0;

@end
