@class NSString;

@interface SBAppClipPlaceholderWorkspaceEntity : SBWorkspaceEntity

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *futureSceneIdentifier;
@property (readonly, nonatomic) BOOL needsUpdate;

+ (BOOL)isAppClipUpdateAvailableForBundleIdentifier:(id)a0;

- (BOOL)supportsPresentationAtAnySize;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (BOOL)wantsExclusiveForeground;
- (BOOL)isAppClipPlaceholderEntity;
- (Class)viewControllerClass;
- (id)appClipPlaceholderEntity;
- (id /* block */)entityGenerator;
- (id)initWithBundleIdentifier:(id)a0 futureSceneIdentifier:(id)a1 needsUpdate:(BOOL)a2;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
