@class NSString, NSArray, AXDialectMap;

@interface AXSettingsVoiceResourceFootprintSpecifierData : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL showListItemStyle;
@property (retain, nonatomic) NSArray *resources;
@property (retain, nonatomic) AXDialectMap *dialect;
@property (nonatomic) BOOL isSelected;

- (void).cxx_destruct;
- (id)description;

@end
