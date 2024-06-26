@class NSString, UIImage, SSMutableURLRequestProperties;

@interface SUPageSection : NSObject

@property (readonly, nonatomic) id segmentedControlItem;
@property (nonatomic) double expirationTime;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long structuredPageType;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) SSMutableURLRequestProperties *URLRequestProperties;
@property (retain, nonatomic) id userInfo;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)_setURL:(id)a0;
- (BOOL)loadFromDictionary:(id)a0;
- (void)_setURLBagKey:(id)a0;

@end
