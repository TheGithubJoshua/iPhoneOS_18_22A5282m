@class NSArray;

@interface VNGenerateImageSaliencyRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (Class)configurationClass;

- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)_smartCamCombinedModelImageSaliencyObservationsForRevision:(unsigned long long)a0 performedInContext:(id)a1 error:(id *)a2;

@end
