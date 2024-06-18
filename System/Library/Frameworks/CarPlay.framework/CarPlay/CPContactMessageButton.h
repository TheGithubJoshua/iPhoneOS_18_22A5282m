@class NSString;

@interface CPContactMessageButton : CPButton

@property (readonly, copy, nonatomic) NSString *phoneOrEmail;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhoneOrEmail:(id)a0;

@end
