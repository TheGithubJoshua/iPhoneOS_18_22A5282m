@protocol CAMPanoramaCaptureRequestDelegate;

@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double loggingVideoZoomFactor;
@property (readonly, nonatomic) long long loggingZoomInteractionType;
@property (readonly, weak, nonatomic) id<CAMPanoramaCaptureRequestDelegate> delegate;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 distinctPersistence:(BOOL)a1 includeAnalytics:(BOOL)a2;

@end
