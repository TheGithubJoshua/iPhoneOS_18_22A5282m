@class GKComponentSystem, NSString, GKEntity;

@interface GKComponent : NSObject <NSCopying, NSSecureCoding> {
    GKEntity *_entity;
    int _usesPerComponentUpdateCount;
    GKComponentSystem *_componentSystem;
    NSString *_componentName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL usesPerComponentUpdate;
@property (nonatomic) GKComponentSystem *componentSystem;
@property (nonatomic) NSString *componentName;
@property (readonly, weak, nonatomic) GKEntity *entity;

- (id)initWithCoder:(id)a0;
- (void)setEntity:(id)a0;
- (id)init;
- (id)copy;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0;
- (void)updateWithDeltaTime:(double)a0;
- (void)didAddToEntity;
- (void)willRemoveFromEntity;

@end
