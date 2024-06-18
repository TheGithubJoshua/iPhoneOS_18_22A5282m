@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer

@property (readonly, copy, nonatomic) NSString *sceneID;

- (id)_succinctDescription;
- (BOOL)isExternalSceneLayer;
- (long long)alignment;
- (id)initWithExternalSceneID:(id)a0 level:(double)a1;
- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithExternalSceneID:(id)a0 trackingContext:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithXPCDictionary:(id)a0;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1 sceneID:(id)a2;

@end
