@class _UIKeyShortcutHUDModel, _UIKeyShortcutHUDClientTraits;

@interface _UIKeyShortcutHUDConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _UIKeyShortcutHUDModel *model;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (nonatomic) long long presentedModifierFlag;
@property (nonatomic) long long initialHeldModifierFlags;
@property (retain, nonatomic) _UIKeyShortcutHUDClientTraits *clientTraits;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
