@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest

@property (readonly, nonatomic) VNCoreMLModel *model;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

+ (Class)configurationClass;

- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)sequencedRequestPreviousObservationsKey;
- (void).cxx_destruct;
- (id)description;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithModel:(id)a0;
- (BOOL)allowsCachingOfResults;
- (id)initWithModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)newDefaultRequestInstance;

@end
