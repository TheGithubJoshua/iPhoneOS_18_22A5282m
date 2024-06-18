@class ARFrame, AVDepthData;

@interface PVARMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ARFrame *arFrame;
@property (readonly, nonatomic) AVDepthData *depthData;
@property (readonly, nonatomic) int depthFreshness;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithARFrame:(id)a0;
- (id)initWithARFrame:(id)a0 depthData:(id)a1 depthFreshness:(int)a2;

@end
