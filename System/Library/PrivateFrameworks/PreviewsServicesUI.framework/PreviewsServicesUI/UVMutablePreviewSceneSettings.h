@interface UVMutablePreviewSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic) struct CGSize { double x0; double x1; } previewMaximumSize;
@property (nonatomic) long long previewSceneLayout;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)makeCopy;

@end
