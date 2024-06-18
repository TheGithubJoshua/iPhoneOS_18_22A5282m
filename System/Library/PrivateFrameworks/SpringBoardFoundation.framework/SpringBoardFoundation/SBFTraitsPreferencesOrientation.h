@class NSString;

@interface SBFTraitsPreferencesOrientation : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (nonatomic) unsigned long long supportedOrientations;
@property (nonatomic) long long preferredOrientation;
@property (nonatomic) BOOL canDetermineActiveOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)initWithSupportedMask:(unsigned long long)a0 preferred:(long long)a1 determinesActiveOrientation:(BOOL)a2;
- (id)initWithSupportedMask:(unsigned long long)a0 determinesActiveOrientation:(BOOL)a1;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToOrientationPreferences:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithOrientationPreferences:(id)a0;

@end
