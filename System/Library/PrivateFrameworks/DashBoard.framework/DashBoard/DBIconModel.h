@class NSArray, NSString;
@protocol DBEnvironment, DBIconModelApplicationDataSource;

@interface DBIconModel : SBHIconModel

@property (weak, nonatomic) id<DBIconModelApplicationDataSource> carApplicationDataSource;
@property (retain, nonatomic) NSArray *metadata_hiddenBundleIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } metadata_screenBounds;
@property (nonatomic) BOOL metadata_showsOEMIcon;
@property (copy, nonatomic) NSString *metadata_OEMIconLabel;
@property (nonatomic) BOOL current_isSet;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } current_screenBounds;
@property (nonatomic) BOOL current_showsOEMIcon;
@property (copy, nonatomic) NSString *current_OEMIconLabel;
@property (nonatomic) unsigned long long current_statusBarEdge;
@property (nonatomic) unsigned long long interactionAffordances;
@property (readonly, nonatomic) NSArray *hiddenBundleIdentifiers;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } screenBounds;
@property (nonatomic) struct CGSize { double width; double height; } iconImageSize;
@property (weak, nonatomic) id<DBEnvironment> environment;
@property (readonly, nonatomic) unsigned long long rowCount;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL showsOEMIcon;
@property (readonly, nonatomic) NSString *OEMIconLabel;

- (void)resetCurrentIconState;
- (BOOL)_showPrototypeApps;
- (void)importState:(id)a0;
- (void)didUnarchiveMetadata:(id)a0;
- (id)analyticsIconRepresentation;
- (BOOL)isIconVisible:(id)a0;
- (void)loadAllIcons;
- (id)iconModelMetadata;
- (BOOL)supportsDock;
- (void).cxx_destruct;
- (void)_importStateWithoutLayout:(id)a0;
- (BOOL)_showInternalApps;
- (id)exportStateForCarKit;
- (id)initWithStore:(id)a0 carApplicationDataSource:(id)a1;
- (id)exportIconLayoutState;

@end
