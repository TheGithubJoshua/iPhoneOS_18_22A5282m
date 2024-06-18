@interface VNFaceAnalyzerCompoundRequest : VNHomologousObservationClassCompoundRequest

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)compoundRequestsForOriginalRequests:(id)a0 withPerformingContext:(id)a1 error:(id *)a2;
+ (Class)configurationClass;

- (long long)dependencyProcessingOrdinality;
- (void)assignOriginalRequestsResultsFromObservations:(id)a0 obtainedInPerformingContext:(id)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithDetectorType:(id)a0 configuration:(id)a1;
- (unsigned long long)detectionLevel;

@end
