@class NSString, NSArray;

@interface PXDisplayAssetViewDemoSettings : PXSettings

@property (nonatomic) BOOL allowsTextSelection;
@property (copy, nonatomic) NSString *stringToHighlight;
@property (readonly, nonatomic) NSArray *stringsToHighlight;

+ (id)transientProperties;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
