@class UIColor;

@interface _UIBarBackgroundLayoutPrototyping : _UIBarBackgroundLayout {
    UIColor *_colorWash;
}

+ (BOOL)prototypingEnabled;
+ (id)prototypingLayoutForBarType:(long long)a0;
+ (void)registerPrototypingCallback:(id /* block */)a0;

- (id)bg1Effects;
- (id)bg1Color;
- (id)bg1ShadowColor;
- (BOOL)shouldUseExplicitGeometry;
- (void)describeInto:(id)a0;
- (BOOL)bg1HasShadow;
- (void).cxx_destruct;

@end
