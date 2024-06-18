@class PHImageRequestOptions, PHImageRequest, NSProgress, PHCompositeMediaResult;

@interface PHImageRequestContext : PHMediaRequestContext {
    NSProgress *_progress;
    PHImageRequest *_initialRequest;
    PHImageRequest *_intermediateRequest;
    PHImageRequest *_finalRequest;
    struct atomic_flag { _Atomic BOOL _Value; } _firstNonFastResultWasObserved;
    struct atomic_flag { _Atomic BOOL _Value; } _finalResultSent;
    PHCompositeMediaResult *_delayedFinalInvalidDataResult;
}

@property (readonly, nonatomic) PHImageRequestOptions *imageOptions;

- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (BOOL)shouldLimitRepairRequestsPerProcess;
- (id)_produceFinalImageRequestForRequest:(id)a0;
- (BOOL)shouldReportProgress;
- (BOOL)isSynchronous;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)_videoBehavior;
- (id)initialRequests;
- (id)_lazyProgress;
- (id)_produceIntermediateImageRequestForRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isVideoFrameRequest;
- (BOOL)_shouldLoadHDRGainMapBasedOnChoosingPolicy:(long long)a0;
- (id /* block */)progressHandler;
- (id)_initialBehavior;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (long long)type;
- (id)progresses;
- (BOOL)isNetworkAccessAllowed;
- (BOOL)representsShareableHighQualityResource;

@end
