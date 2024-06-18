@class NSString, NSArray, AVAssetWriterHelper, NSURL, NSError, AVAssetWriterInternal;

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {
    AVAssetWriterInternal *_internal;
}

@property (readonly, retain, getter=_helper) AVAssetWriterHelper *helper;
@property (readonly, copy, nonatomic) NSURL *outputURL;
@property (readonly, copy, nonatomic) NSString *outputFileType;
@property (readonly, nonatomic) NSArray *availableMediaTypes;
@property (readonly) long long status;
@property (readonly) NSError *error;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)_errorForOSStatus:(int)a0;
+ (id)assetWriterWithURL:(id)a0 fileType:(id)a1 error:(id *)a2;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (void)setPreferredVolume:(float)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })preferredOutputSegmentInterval;
- (void)setPreferredRate:(float)a0;
- (void)setProducesCombinableFragments:(BOOL)a0;
- (void)setInitialSegmentStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)init;
- (void)setRequiresInProcessOperation:(BOOL)a0;
- (void)setUsesVirtualCaptureCard:(BOOL)a0;
- (void)setPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)startWriting;
- (void)setMovieTimeScale:(int)a0;
- (void)addInput:(id)a0;
- (BOOL)usesVirtualCaptureCard;
- (void)flush;
- (void)declareKeyPathDependenciesWithRegistry:(id)a0;
- (long long)initialMovieFragmentSequenceNumber;
- (BOOL)finishWriting;
- (void)setMovieFragmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)flushSegment;
- (void)setDelegate:(id)a0;
- (void)addInputGroup:(id)a0;
- (void)cancelWriting;
- (BOOL)canAddInput:(id)a0;
- (void)setPreferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setInitialMovieFragmentSequenceNumber:(long long)a0;
- (id)delegate;
- (void)addCallbackToCancelDuringDeallocation:(id)a0;
- (int)movieTimeScale;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })movieFragmentInterval;
- (id)outputFileTypeProfile;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })initialSegmentStartTime;
- (float)preferredVolume;
- (BOOL)canAddInputGroup:(id)a0;
- (void)dealloc;
- (void)setOutputFileTypeProfile:(id)a0;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setOverallDurationHint:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)producesCombinableFragments;
- (BOOL)requiresInProcessOperation;
- (id)inputGroups;
- (float)preferredRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)initWithContentType:(id)a0;
- (BOOL)_initInternalObject;
- (BOOL)_setHelper:(id)a0 ifCurrentHelper:(id)a1;
- (BOOL)_setHelper:(id)a0 ifCurrentHelper:(id)a1 withBlock:(id /* block */)a2;
- (BOOL)_supportsSampleReferencesReturningError:(id *)a0;
- (void)_transitionToFailedStatusWithError:(id)a0;
- (BOOL)canApplyOutputSettings:(id)a0 forMediaType:(id)a1;
- (id)finishWritingDelegate;
- (id)initWithFileType:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 fileType:(id)a1 error:(id *)a2;
- (BOOL)isVirtualCaptureCardSupported;
- (void)setFinishWritingDelegate:(id)a0;
- (void)setWritesSinglePassUsingPredeterminedFileSize:(long long)a0 mediaDataSize:(long long)a1;

@end
