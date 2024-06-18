@class NSNumber, NSTimer;
@protocol MRUVolumeControllerCoordinationDelegate, MRUVolumeControllerDelegate;

@interface MRUVolumeController : MPVolumeController {
    NSTimer *_optimisticTimer;
    id<MRUVolumeControllerDelegate> _delegate;
}

@property (retain, nonatomic) NSNumber *optimisticValue;
@property (weak, nonatomic) id<MRUVolumeControllerCoordinationDelegate> coordinationDelegate;
@property (weak, nonatomic) id<MRUVolumeControllerDelegate> delegate;

- (void)restoreDelegate;
- (void)setVolumeValue:(float)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (float)volumeValue;
- (void)beginEqualization;
- (void)finishEqualization;

@end
