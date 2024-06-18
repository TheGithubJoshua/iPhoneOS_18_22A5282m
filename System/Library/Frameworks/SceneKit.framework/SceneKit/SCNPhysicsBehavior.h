@interface SCNPhysicsBehavior : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)bodyA;
- (id)bodyB;
- (BOOL)hasReferenceToPhysicsBody:(id)a0;

@end
