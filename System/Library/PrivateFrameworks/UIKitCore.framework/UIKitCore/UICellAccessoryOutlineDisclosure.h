@class UIImage;

@interface UICellAccessoryOutlineDisclosure : UICellAccessory

@property (readonly, nonatomic) double rotationAngle;
@property (retain, nonatomic, getter=_customImage, setter=_setCustomImage:) UIImage *_customImage;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ actionHandler;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_identifier;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
