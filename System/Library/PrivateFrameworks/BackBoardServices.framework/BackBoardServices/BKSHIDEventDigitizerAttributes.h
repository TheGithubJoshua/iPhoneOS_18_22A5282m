@class NSArray;

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) float maximumForce;
@property (nonatomic) double maximumPositionZ;
@property (nonatomic) struct CGSize { double width; double height; } digitizerSurfaceSize;
@property (nonatomic) double digitizerSurfaceWidth;
@property (nonatomic) double digitizerSurfaceHeight;
@property (retain, nonatomic) NSArray *pathAttributes;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) long long activeModifiers;
@property (nonatomic) unsigned char touchStreamIdentifier;
@property (nonatomic) BOOL systemGesturesPossible;
@property (nonatomic) BOOL systemGestureStateChange;
@property (nonatomic) long long sceneTouchBehavior;

+ (id)protobufSchema;

- (void)setDigitizerSurfaceWidth:(double)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (double)digitizerSurfaceWidth;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)digitizerSurfaceHeight;
- (void)setDigitizerSurfaceHeight:(double)a0;

@end
