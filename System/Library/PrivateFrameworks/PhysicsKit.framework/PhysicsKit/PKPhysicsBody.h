@class NSArray, PKPhysicsWorld, NSMutableArray;
@protocol NSObject;

@interface PKPhysicsBody : NSObject <NSCopying, NSSecureCoding> {
    id<NSObject> _representedObject;
    struct b2BodyDef { BOOL _sk_affectedByGravity; unsigned int _sk_fieldCategoryBitMask; unsigned int _sk_categoryBitMask; unsigned int _sk_collisionBitMask; unsigned int _sk_intersectionCallbackBitMask; int type; struct b2Vec2 { float x; float y; } position; float angle; struct b2Vec2 { float x; float y; } linearVelocity; float angularVelocity; float charge; float linearDamping; float angularDamping; BOOL allowSleep; BOOL awake; BOOL fixedRotation; BOOL bullet; BOOL active; void *userData; } _bodyDef;
    struct b2Body { BOOL x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned short x6; int x7; struct b2Transform { struct b2Vec2 { float x0; float x1; } x0; struct b2Rot { float x0; float x1; } x1; } x8; struct b2Transform { struct b2Vec2 { float x0; float x1; } x0; struct b2Rot { float x0; float x1; } x1; } x9; struct b2Sweep { struct b2Vec2 { float x0; float x1; } x0; union b2Position { struct { struct b2Vec2 { float x0; float x1; } x0; float x1; float x2; } x0; } x1; union b2Position { struct { struct b2Vec2 { float x0; float x1; } x0; float x1; float x2; } x0; } x2; float x3; } x10; struct b2Vec2 { float x0; float x1; } x11; float x12; struct b2Vec2 { float x0; float x1; } x13; float x14; struct b2World *x15; struct b2Body *x16; struct b2Body *x17; struct b2Fixture *x18; int x19; struct b2JointEdge *x20; struct b2ContactEdge *x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; void *x30; } *_body;
    struct PKCField { } *_field;
    int _dynamicType;
    struct vector<PKPhysicsShape *, std::allocator<PKPhysicsShape *>> { struct PKPhysicsShape **__begin_; struct PKPhysicsShape **__end_; struct __compressed_pair<PKPhysicsShape **, std::allocator<PKPhysicsShape *>> { struct PKPhysicsShape **__value_; } __end_cap_; } _shapes;
    PKPhysicsWorld *_world;
    NSMutableArray *_joints;
    BOOL _inUse;
    int _shapeType;
    struct shared_ptr<PKPath> { struct PKPath *__ptr_; struct __shared_weak_count *__cntrl_; } _pathPtr;
    struct shared_ptr<QuadTree> { struct QuadTree *__ptr_; struct __shared_weak_count *__cntrl_; } _quadTree;
    struct CGPoint { double x; double y; } _p0;
    struct CGPoint { double x; double y; } _p1;
    struct CGSize { double width; double height; } _size;
    double _radius;
    double _edgeRadius;
    struct CGImage { } *_mask;
    struct shared_ptr<PKPath> { struct PKPath *__ptr_; struct __shared_weak_count *__cntrl_; } _outline;
    BOOL _isPinned;
    BOOL _allowsRotation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void *_shapes;
@property (nonatomic) struct b2BodyDef { BOOL x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct b2Vec2 { float x0; float x1; } x6; float x7; struct b2Vec2 { float x0; float x1; } x8; float x9; float x10; float x11; float x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; void *x18; } _bodyDef;
@property (nonatomic) struct b2Body { BOOL x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; unsigned short x6; int x7; struct b2Transform { struct b2Vec2 { float x0; float x1; } x0; struct b2Rot { float x0; float x1; } x1; } x8; struct b2Transform { struct b2Vec2 { float x0; float x1; } x0; struct b2Rot { float x0; float x1; } x1; } x9; struct b2Sweep { struct b2Vec2 { float x0; float x1; } x0; union b2Position { struct { struct b2Vec2 { float x0; float x1; } x0; float x1; float x2; } x0; } x1; union b2Position { struct { struct b2Vec2 { float x0; float x1; } x0; float x1; float x2; } x0; } x2; float x3; } x10; struct b2Vec2 { float x0; float x1; } x11; float x12; struct b2Vec2 { float x0; float x1; } x13; float x14; struct b2World *x15; struct b2Body *x16; struct b2Body *x17; struct b2Fixture *x18; int x19; struct b2JointEdge *x20; struct b2ContactEdge *x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; void *x30; } *_body;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) double rotation;
@property (nonatomic, getter=isDynamic) BOOL dynamic;
@property (nonatomic) BOOL usesPreciseCollisionDetection;
@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) BOOL pinned;
@property (nonatomic) struct shared_ptr<PKPath> { struct PKPath *x0; struct __shared_weak_count *x1; } outline;
@property (readonly, nonatomic) void *volume;
@property (nonatomic, getter=isResting) BOOL resting;
@property (nonatomic) double friction;
@property (nonatomic) double charge;
@property (nonatomic) double restitution;
@property (nonatomic) double linearDamping;
@property (nonatomic) double angularDamping;
@property (nonatomic) double density;
@property (nonatomic) double mass;
@property (readonly, nonatomic) double area;
@property (nonatomic) double radius;
@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (readonly, nonatomic) NSArray *joints;
@property (weak, nonatomic) id<NSObject> representedObject;
@property (copy, nonatomic) id /* block */ postStepBlock;
@property (nonatomic) struct CGVector { double x0; double x1; } velocity;
@property (nonatomic) double angularVelocity;

+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1;
+ (id)bodyWithBodies:(id)a0;
+ (id)bodyWithCircleOfRadius:(double)a0;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath { } *)a0;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { } *)a0;
+ (id)bodyWithPolygonFromPath:(struct CGPath { } *)a0;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0;
+ (id)bodyWithCircleOfRadius:(double)a0 center:(struct CGPoint { double x0; double x1; })a1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1 edgeRadius:(double)a2;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0 edgeRadius:(double)a1;
+ (id)bodyWithOutline:(struct shared_ptr<PKPath> { struct PKPath *x0; struct __shared_weak_count *x1; })a0 offset:(struct CGPoint { double x0; double x1; })a1;
+ (id)initWithMarchingCubes:(void *)a0 pixelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)initWithQuadTree:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)active;
- (id)init;
- (id)copy;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setActive:(BOOL)a0;
- (id)_joints;
- (id)initWithBodies:(id)a0;
- (id)initWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1;
- (void)set_allowSleep:(BOOL)a0;
- (id)_world;
- (void)applyImpulse:(struct CGVector { double x0; double x1; })a0;
- (void)applyUnscaledForce:(struct CGVector { double x0; double x1; })a0;
- (void)applyUnscaledForce:(struct CGVector { double x0; double x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)applyUnscaledImpulse:(struct CGVector { double x0; double x1; })a0;
- (void)applyUnscaledImpulse:(struct CGVector { double x0; double x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithCircleOfRadius:(double)a0;
- (id)initWithEdgeChainFromPath:(struct CGPath { } *)a0;
- (id)initWithEdgeFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithEdgeLoopFromPath:(struct CGPath { } *)a0;
- (id)initWithPolygonFromPath:(struct CGPath { } *)a0;
- (id)initWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_inUse;
- (void)applyForce:(struct CGPoint { double x0; double x1; })a0;
- (id)_descriptionClassName;
- (id)allContactedBodies;
- (void)applyAngularImpulse:(double)a0;
- (void)applyForce:(struct CGPoint { double x0; double x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)applyImpulse:(struct CGVector { double x0; double x1; })a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)applyTorque:(double)a0;
- (void)reapplyScale:(double)a0 yScale:(double)a1;
- (BOOL)_allowSleep;
- (struct shared_ptr<QuadTree> { struct QuadTree *x0; struct __shared_weak_count *x1; })_quadTree;
- (void)clearBox2DData;
- (id)initWithCircleOfRadius:(double)a0 center:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithRectangleOfSize:(struct CGSize { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1 edgeRadius:(float)a2;
- (BOOL)isEqualToBody:(id)a0;
- (void)set_inUse:(BOOL)a0;
- (void)set_joints:(id)a0;
- (void)set_world:(id)a0;

@end