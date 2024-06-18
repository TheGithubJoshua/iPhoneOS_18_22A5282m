@protocol UIMutableTransformerDelegate;

@interface UIMutableTransformer : UITransformer

@property (weak, nonatomic, setter=_setDelegate:) id<UIMutableTransformerDelegate> _delegate;

- (void)_updateTransform;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removeAll;
- (void)replaceTransform:(id)a0 withTransform:(id)a1 reason:(id)a2;
- (void)_ensureTransformsStructuresExists;
- (void)removeTransform:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTransform:(id)a0 reason:(id)a1;

@end
