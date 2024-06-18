@interface FxPin : NSObject {
    struct FxPinPriv { id x0; id x1; id x2; id x3; id x4; id x5; int x6; Class x7; } *_priv;
}

- (Class)valueClass;
- (id)init;
- (void)setUUID:(id)a0;
- (int)index;
- (void)setDisplayName:(id)a0;
- (id)displayName;
- (id)uuid;
- (void)setValueClass:(Class)a0;
- (int)direction;
- (id)description;
- (void)setDirection:(int)a0;
- (id)stream;
- (void)dealloc;
- (id)properties;
- (void)setDescription:(id)a0;
- (id)parentPlug;
- (void)setParentPlug:(id)a0;

@end
