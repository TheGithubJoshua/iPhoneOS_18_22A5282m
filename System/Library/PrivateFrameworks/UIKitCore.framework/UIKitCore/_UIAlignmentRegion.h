@class NSString;
@protocol _UIHyperregion;

@interface _UIAlignmentRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double *_temp;
@property (retain, nonatomic, setter=_setRegion:) id<_UIHyperregion> _region;
@property (nonatomic, setter=_setMaximumDistance:) double _maximumDistance;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (id)initWithCoder:(id)a0;
- (void)_closestPoint:(double *)a0 toPoint:(const double *)a1;
- (id)initWithDimensions:(unsigned long long)a0;
- (BOOL)_isBoundaryCrossedFromPoint:(const double *)a0 toPoint:(const double *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)_isAlignedForClosestPoint:(double *)a0 toPoint:(const double *)a1;

@end