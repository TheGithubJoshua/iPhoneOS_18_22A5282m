@class NSArray, NSMutableArray;
@protocol AXSSMotionTrackingVideoFileInputManagerDelegate;

@interface AXSSMotionTrackingVideoFileInputManager : NSObject

@property (class, readonly, nonatomic) BOOL allowVideoFileInput;

@property (nonatomic) BOOL _monitoring;
@property (retain, nonatomic) NSMutableArray *_videoFileInputNames;
@property (readonly, copy, nonatomic) NSArray *videoFileInputNames;
@property (weak, nonatomic) id<AXSSMotionTrackingVideoFileInputManagerDelegate> delegate;

- (id)init;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)_videoFileInputNamesChanged:(id)a0;
- (void)dealloc;
- (void)_update;

@end
