@class NSArray;

@interface BKSHIDEventPointerAttributes : BKSHIDEventDigitizerAttributes

@property (nonatomic) long long contextMove;
@property (nonatomic) long long contextType;
@property (nonatomic) unsigned short pointerState;
@property (copy, nonatomic) NSArray *hitTestContexts;
@property (nonatomic) struct CGPoint { double x; double y; } unacceleratedRelativePosition;
@property (nonatomic) struct CGPoint { double x; double y; } acceleratedRelativePosition;
@property (nonatomic) double unacceleratedRelativePositionX;
@property (nonatomic) double unacceleratedRelativePositionY;
@property (nonatomic) double acceleratedRelativePositionX;
@property (nonatomic) double acceleratedRelativePositionY;
@property (nonatomic) long long fingerDownCount;
@property (nonatomic) unsigned char pointerEdgeMask;

+ (id)protobufSchema;

- (unsigned short)pointerState;
- (double)unacceleratedRelativePositionY;
- (void)setAcceleratedRelativePositionY:(double)a0;
- (void)setPointerState:(unsigned short)a0;
- (double)acceleratedRelativePositionX;
- (double)unacceleratedRelativePositionX;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUnacceleratedRelativePositionY:(double)a0;
- (double)acceleratedRelativePositionY;
- (void)setUnacceleratedRelativePositionX:(double)a0;
- (void)setAcceleratedRelativePositionX:(double)a0;

@end
