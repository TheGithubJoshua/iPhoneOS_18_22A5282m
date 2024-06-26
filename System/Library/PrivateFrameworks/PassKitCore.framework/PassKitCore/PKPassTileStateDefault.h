@class NSString, PKPassTileAccessory;

@interface PKPassTileStateDefault : PKPassTileState

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) PKPassTileAccessory *accessory;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_setupWithDictionary:(id)a0;
- (id)createResolvedStateWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedState:(id)a0;

@end
