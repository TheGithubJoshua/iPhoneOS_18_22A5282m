@class UIScene, NSPredicate;

@interface UISceneActivationConditions : NSObject <NSCopying, NSSecureCoding> {
    NSPredicate *_canActivatePredicate;
    NSPredicate *_prefersPredicate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setUIScene:) UIScene *_UIScene;
@property (copy, nonatomic) NSPredicate *canActivateForTargetContentIdentifierPredicate;
@property (copy, nonatomic) NSPredicate *prefersToActivateForTargetContentIdentifierPredicate;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)_validateCompileTimeIssues:(id *)a0 runTimeIssues:(id *)a1;
- (unsigned long long)hash;
- (long long)_suitabilityForTargetContentIdentifier:(id)a0 errorString:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
