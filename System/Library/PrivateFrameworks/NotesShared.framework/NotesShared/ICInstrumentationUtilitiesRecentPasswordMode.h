@interface ICInstrumentationUtilitiesRecentPasswordMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) short lockedNotesMode;
@property (nonatomic) long long contextPath;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
