@interface ActivityUIServices.ActivitySceneMetrics : NSObject <NSSecureCoding, BSXPCCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic) void /* unknown type, empty encoding */ cornerRadius;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;

@end
