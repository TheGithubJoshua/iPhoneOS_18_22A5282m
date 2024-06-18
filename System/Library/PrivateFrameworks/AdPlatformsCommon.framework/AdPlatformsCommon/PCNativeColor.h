@class NSArray;

@interface PCNativeColor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *lightModeColors;
@property (retain, nonatomic) NSArray *darkModeColors;
@property (nonatomic) long long gradientOrientation;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end