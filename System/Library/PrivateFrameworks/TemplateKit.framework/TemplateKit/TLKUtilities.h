@interface TLKUtilities : NSObject

+ (double)onePixelForCurrentScreenResolution;
+ (void)dispatchMainIfNecessary:(id /* block */)a0;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1;
+ (void)executeBlock:(id /* block */)a0 async:(BOOL)a1;
+ (BOOL)isMacOS;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1;
+ (double)standardRoundedCornerRadiusRatio;
+ (BOOL)recursivelyCheckIfSubviewTapped:(id)a0 forTappedView:(id)a1;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 color:(id)a2;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0 color:(id)a1;
+ (BOOL)deviceSupportsRotation;
+ (void)performWithoutAnimations:(id /* block */)a0;
+ (void)dispatchAsyncIfNecessary:(id /* block */)a0;
+ (void)performAnimatableChanges:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (double)standardTableCellContentInset;
+ (id)testImageWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)performAnimatableChanges:(id /* block */)a0;
+ (BOOL)isHiddenView:(id)a0;
+ (double)appIconCornerRadiusRatio;

@end
