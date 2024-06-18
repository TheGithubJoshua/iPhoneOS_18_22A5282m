@class NSString, NSBundle;

@interface NTKPlistBundle : NSObject

@property (retain, nonatomic) NSString *plistFileName;
@property (retain, nonatomic) NSBundle *bundle;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPlist:(id)a0 bundle:(id)a1;

@end
