@interface UICellAccessoryReorder : UICellAccessory

@property (nonatomic) BOOL showsVerticalSeparator;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_identifier;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
