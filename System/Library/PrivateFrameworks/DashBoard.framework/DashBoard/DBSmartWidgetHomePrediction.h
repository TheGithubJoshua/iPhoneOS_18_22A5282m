@class UIImage, DBGarageDoor, NSString;

@interface DBSmartWidgetHomePrediction : DBSmartWidgetPrediction <DBGarageDoorObserver>

@property (class, readonly, nonatomic) UIImage *openGarageDoor;
@property (class, readonly, nonatomic) UIImage *closedGarageDoor;

@property (readonly, nonatomic) DBGarageDoor *garageDoor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minValue;
+ (double)maxValue;
+ (void)resetImages;
+ (id)_imageNamed:(id)a0 onBackgroundColor:(id)a1;
+ (long long)baseScore;

- (id)image;
- (id)subtitle;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)compositingFilter;
- (id)uniqueIdentifier;
- (long long)_iconType;
- (id)title;
- (double)value;
- (id /* block */)actionBlock;
- (id)predictedObject;
- (BOOL)showImageBorder;
- (id)debugScoreText;
- (void)garageDoor:(id)a0 didUpdateDoorState:(long long)a1;
- (void)garageDoor:(id)a0 didUpdateObstructionDetected:(BOOL)a1;
- (void)garageDoor:(id)a0 didUpdateTargetDoorState:(long long)a1;
- (id)initWithGarageDoor:(id)a0;
- (void)serviceDidUpdate:(id)a0;
- (long long)tieBreakScore;
- (BOOL)updateWithPrediction:(id)a0;

@end
