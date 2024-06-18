@class NSData;

@interface _UIMappedBitmapImage : UIImage

@property (retain, nonatomic) NSData *data;

+ (BOOL)supportsSecureCoding;
+ (void)initialize;

- (void)_configureImage:(id)a0 assumePreconfigured:(BOOL)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_preheatBitmapData;

@end
