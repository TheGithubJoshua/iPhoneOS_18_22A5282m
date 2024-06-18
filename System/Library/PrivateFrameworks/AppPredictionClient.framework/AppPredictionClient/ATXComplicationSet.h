@class NSArray, NSString;

@interface ATXComplicationSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, copy, nonatomic) NSString *localizedTitle;

- (id)initWithCoder:(id)a0;
- (id)initWithComplications:(id)a0 localizedTitle:(id)a1;
- (id)initWithComplications:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
