@class PKPassTileAccessorySpinner, PKPassTileAccessoryButton;

@interface PKPassTileAccessory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileAccessorySpinner *accessoryTypeSpinner;
@property (readonly, nonatomic) PKPassTileAccessoryButton *accessoryTypeButton;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;

+ (id)_createForDictionary:(id)a0;
+ (id)_createForType:(long long)a0 resolved:(BOOL)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setupWithDictionary:(id)a0;
- (id)createResolvedAccessoryWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedAccessory:(id)a0;

@end