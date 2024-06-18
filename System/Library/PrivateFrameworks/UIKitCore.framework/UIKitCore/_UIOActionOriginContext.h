@class NSString;

@interface _UIOActionOriginContext : NSObject <NSSecureCoding, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sceneIdentity;
@property (readonly, copy, nonatomic) NSString *displayIdentifier;
@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) unsigned long long layerId;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } layerReferencePoint;

+ (id)defaultOriginContext;

- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (struct CGPoint { double x0; double x1; })translatedReferencePointForDestinationView:(id)a0;

@end
