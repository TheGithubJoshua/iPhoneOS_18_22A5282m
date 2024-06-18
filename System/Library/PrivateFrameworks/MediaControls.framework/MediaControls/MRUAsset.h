@class UIImage, MRUCAPackageAsset, NSString;

@interface MRUAsset : NSObject

@property (readonly, nonatomic) MRUCAPackageAsset *packageAsset;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *symbolName;
@property (retain, nonatomic) NSString *accessibilityIdentifier;

+ (id)image:(id)a0;
+ (id)packageAsset:(id)a0;
+ (id)packageAsset:(id)a0 symbolName:(id)a1 image:(id)a2;
+ (id)symbolNamed:(id)a0;

- (id)initWithImage:(id)a0;
- (id)initWithSymbolName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithPackageAsset:(id)a0;
- (id)initWithPackageAsset:(id)a0 symbolName:(id)a1 image:(id)a2;

@end
