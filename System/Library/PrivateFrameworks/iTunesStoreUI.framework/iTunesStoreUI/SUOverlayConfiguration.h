@class NSString, NSRegularExpression;

@interface SUOverlayConfiguration : NSObject {
    NSRegularExpression *_bagKeyPattern;
    NSRegularExpression *_urlPattern;
}

@property (readonly, nonatomic) long long cornerRadius;
@property (readonly, nonatomic) BOOL shouldShowNavigationBar;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) NSString *transitionName;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (BOOL)matchesURL:(id)a0;
- (BOOL)matchesURLBagKey:(id)a0;

@end
