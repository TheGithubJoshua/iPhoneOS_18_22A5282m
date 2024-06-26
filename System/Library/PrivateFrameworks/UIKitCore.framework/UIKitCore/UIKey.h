@class NSString;

@interface UIKey : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic, setter=_setUnmodifiedInput:) NSString *unmodifiedInput;
@property (retain, nonatomic, setter=_setModifiedInput:) NSString *modifiedInput;
@property (nonatomic, setter=_setModifierFlags:) long long modifierFlags;
@property (nonatomic, setter=_setKeyCode:) long long keyCode;
@property (readonly, nonatomic) NSString *characters;
@property (readonly, nonatomic) NSString *charactersIgnoringModifiers;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)modifiersEqual:(long long)a0;
- (id)_initWithKey:(id)a0;
- (BOOL)equalsKeyCode:(long long)a0 modifiers:(long long)a1;
- (id)initWithKeyboardEvent:(id)a0;
- (long long)modiferFlagsWithoutCapsLockOrNumberPad;
- (BOOL)unmodifiedKeyCodeEquals:(long long)a0;

@end
