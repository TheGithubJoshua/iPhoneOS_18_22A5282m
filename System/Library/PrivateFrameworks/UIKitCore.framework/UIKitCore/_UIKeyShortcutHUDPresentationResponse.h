@interface _UIKeyShortcutHUDPresentationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL accepted;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
