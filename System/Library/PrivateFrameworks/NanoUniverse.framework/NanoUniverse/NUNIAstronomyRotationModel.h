@class CADisplayLink;
@protocol NUNIRotatable, NUNIAstronomyRotationModelObserver;

@interface NUNIAstronomyRotationModel : NSObject {
    CADisplayLink *_displayLink;
    long long _state;
    struct CLLocationCoordinate2D { double latitude; double longitude; } _landingCoordinate;
    void /* unknown type, empty encoding */ _accumulatedPushVector;
    float _effectivePushDeceleration;
    float _effectivePullAcceleration;
    double _pushStartTime;
    double _pullStartTime;
    double _previousDisplayLinkCallbackTime;
    BOOL _isPulling;
}

@property (readonly, nonatomic) const struct NUNIAstronomyInteractionSettings { float x0; float x1; float x2; float x3; } *interactionSettings;
@property (weak, nonatomic) id<NUNIRotatable> rotatable;
@property (weak, nonatomic) id<NUNIAstronomyRotationModelObserver> observer;
@property (nonatomic, getter=isPulling) BOOL pulling;

- (id)init;
- (void)push:(SEL)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_update;
- (void)_handleDisplayLink;
- (BOOL)isAtHomeCoordinate;

@end
