@class NSString, UIImage, TTRIContentUnavailableTextProperties, NSAttributedString, TTRIContentUnavailableButtonProperties;

@interface TTRIContentUnavailableConfiguration : TTRIUIContentUnavailableShim <UIContentConfiguration>

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) TTRIContentUnavailableTextProperties *textProperties;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (readonly, nonatomic) TTRIContentUnavailableTextProperties *secondaryTextProperties;
@property (readonly, nonatomic) TTRIContentUnavailableButtonProperties *buttonProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyConfiguration;
+ (id)loadingConfiguration;
+ (id)emptyProminentConfiguration;
+ (id)searchConfiguration;
+ (Class)implClass;

- (id)makeContentView;
- (id)updatedConfigurationForState:(id)a0;
- (id)asUIKit;

@end
