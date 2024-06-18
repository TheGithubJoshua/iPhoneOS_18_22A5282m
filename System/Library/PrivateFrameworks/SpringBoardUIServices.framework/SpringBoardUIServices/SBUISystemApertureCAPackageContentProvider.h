@class NSString, UIView;

@interface SBUISystemApertureCAPackageContentProvider : NSObject <SBUISystemApertureContentViewProviding>

@property (nonatomic) struct CGSize { double x0; double x1; } intrinsicPackageSize;
@property (readonly, nonatomic) UIView *providedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishedObjectWithName:(id)a0;
- (BOOL)setState:(id)a0 animated:(BOOL)a1;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithPackageName:(id)a0 inBundle:(id)a1;
- (id)_providedView;

@end
