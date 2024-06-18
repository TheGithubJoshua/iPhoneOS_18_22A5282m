@class UITableViewCell, NSString, AKController, AKFontChooserUIItemDelegate, AKTextAttributesUIItemDelegate, AKFontListController, NSNumber, UIColor;

@interface AKTextAttributesViewController : UITableViewController <AKFontChooserUserInterfaceItem, AKTextAttributesUserInterfaceItem>

@property (retain, nonatomic) UITableViewCell *sizeTableCell;
@property (retain, nonatomic) UITableViewCell *alignmentTableCell;
@property (retain, nonatomic) UIColor *currentFontColor;
@property (retain, nonatomic) NSString *currentFontFamilyName;
@property (retain, nonatomic) NSNumber *currentFontSize;
@property (nonatomic) id currentAlignment;
@property (nonatomic) id currentStyle;
@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) AKFontListController *presetFontController;
@property long long lastActionID;
@property (retain) id lastActionValue;
@property (retain, nonatomic) AKFontChooserUIItemDelegate *fontUIItemDelegate;
@property (retain, nonatomic) AKTextAttributesUIItemDelegate *textAttributesUIItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fontSizeNumberFormatter;

- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_commonInit;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithController:(id)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)didSelectFont:(id)a0;
- (void)_sendFontAction;
- (void)_alignmentSegmentChanged:(id)a0;
- (void)_sendTextAttributesAction;
- (void)_sizeStepperValueChanged:(id)a0;
- (void)_styleSegmentChanged:(id)a0;
- (id)convertFont:(id)a0;
- (id)convertTextAttributes:(id)a0;
- (id)createRowAlignmentCell;
- (id)createRowFontSizeCell;
- (void)syncFontsToUI:(id)a0;
- (void)syncTextAttributesToUI:(id)a0;
- (BOOL)validateUserInterfaceItems;

@end
