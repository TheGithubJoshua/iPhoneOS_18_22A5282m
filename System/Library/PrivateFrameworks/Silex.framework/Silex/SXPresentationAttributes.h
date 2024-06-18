@class NSString;

@interface SXPresentationAttributes : NSObject

@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL fadeInComponents;
@property (nonatomic) double contentScaleFactor;
@property (nonatomic) BOOL useTransparentToolbar;
@property (nonatomic) BOOL enableViewportDebugging;
@property (nonatomic) BOOL testingConditionEnabled;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
