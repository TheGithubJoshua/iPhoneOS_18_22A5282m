@class NSArray, NSString, VNScreenGazeState;

@interface VNDetectScreenGazeRequest : VNStatefulRequest <VNFaceObservationAccepting> {
    VNScreenGazeState *_state;
}

@property (nonatomic) long long temporalSmoothingFrameCount;
@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;
+ (Class)configurationClass;
+ (unsigned long long)applicableRevisionForDependentRequestOfClass:(Class)a0 beingPerformedByRevision:(unsigned long long)a1;

- (id)init;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;

@end
