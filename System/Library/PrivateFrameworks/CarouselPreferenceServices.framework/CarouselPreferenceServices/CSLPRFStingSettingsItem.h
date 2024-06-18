@class NSString, NSNumber;

@interface CSLPRFStingSettingsItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *assetName;
@property (copy, nonatomic) NSNumber *actionType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 title:(id)a1 actionType:(id)a2 assetName:(id)a3;

@end
