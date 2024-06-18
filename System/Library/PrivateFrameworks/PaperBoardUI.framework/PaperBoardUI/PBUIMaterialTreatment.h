@class NSString, NSBundle;

@interface PBUIMaterialTreatment : NSObject <CALayerDelegate, CABackdropLayerDelegate, PBUIImageTreatment, NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double resolvedBackdropScale;
@property (readonly, nonatomic) BOOL usesStaticBackdropScaleFactor;
@property (copy, nonatomic) NSString *recipeName;
@property (retain, nonatomic) NSBundle *recipeBundle;
@property (nonatomic) double weighting;
@property (copy, nonatomic) id /* block */ backdropScaleAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canInterpolateToLowerScales;

- (id)initWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (BOOL)commitToRenderingTree:(id)a0 options:(id)a1 error:(out id *)a2;
- (id)initWithRecipeName:(id)a0 fromBundle:(id)a1;

@end
