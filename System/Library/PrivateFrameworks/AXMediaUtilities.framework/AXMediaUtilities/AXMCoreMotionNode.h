@interface AXMCoreMotionNode : AXMSourceNode

@property (nonatomic) double lastSampleTime;
@property (nonatomic) unsigned long long samplesPerSecond;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)nodeInitialize;
- (void)triggerWithCoreMotionManager:(id)a0 deviceOrientation:(long long)a1 cacheKey:(id)a2 resultHandler:(id /* block */)a3;

@end
