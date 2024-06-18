@class CAContext;

@interface BLSHFlipbookContext : NSObject

@property (readonly, nonatomic) CAContext *caContext;
@property (readonly, nonatomic) BOOL wantsTransform;
@property (readonly, nonatomic, getter=isInverted) BOOL inverted;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithCAContext:(id)a0 wantsTransform:(BOOL)a1 inverted:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
