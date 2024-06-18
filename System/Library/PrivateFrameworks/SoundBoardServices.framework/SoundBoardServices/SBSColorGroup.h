@class NSData, SBSColor;

@interface SBSColorGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SBSColor *background;
@property (readonly, nonatomic) SBSColor *primaryText;
@property (readonly, nonatomic) SBSColor *secondaryText;
@property (readonly, nonatomic) NSData *data;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithBackground:(id)a0 primaryText:(id)a1 secondaryText:(id)a2;

@end
