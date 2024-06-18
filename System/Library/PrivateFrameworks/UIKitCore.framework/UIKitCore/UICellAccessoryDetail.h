@interface UICellAccessoryDetail : UICellAccessory

@property (copy, nonatomic) id /* block */ actionHandler;

+ (BOOL)supportsSecureCoding;

- (id)_identifier;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
