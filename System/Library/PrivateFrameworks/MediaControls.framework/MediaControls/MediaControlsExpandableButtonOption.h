@class NSString, UIColor, MRUAsset;

@interface MediaControlsExpandableButtonOption : NSObject

@property (retain, nonatomic) id identifier;
@property (retain, nonatomic) MRUAsset *asset;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *selectedState;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
